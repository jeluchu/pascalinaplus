package com.jeluchu.pascalina

import android.app.Activity
import android.os.Bundle
import android.support.annotation.IdRes
import android.support.v7.app.AppCompatActivity
import android.support.v7.widget.AppCompatTextView
import android.view.Menu
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.TextView
import android.widget.Toast
import java.text.DecimalFormat
import java.text.DecimalFormatSymbols
import java.text.ParseException
import java.util.*

class MainActivity : AppCompatActivity(), HistoryActionListDialogFragment.Listener {

    /* ---------   VARIABLES   --------- */

    // ESTABLECIENDO BOTONES
    private val botonPorcentaje: Button by bind(R.id.btn_percent)
    private val botonRaiz: Button by bind(R.id.btn_root)
    private val botonPotencia: Button by bind(R.id.btn_power)

    private val botonBorrar: Button by bind(R.id.btn_clear)
    private val botonDivision: Button by bind(R.id.btn_divide)
    private val botonMultiplicacion: Button by bind(R.id.btn_multiply)
    private val botonResta: Button by bind(R.id.btn_minus)
    private val botonSuma: Button by bind(R.id.btn_plus)
    private val botonIgual: Button by bind(R.id.btn_equals)
    private val botonMasMenos: Button by bind(R.id.btn_minus)
    private val botonComa: Button by bind(R.id.btn_decimal)

    private val tvHistorial: TextView by bind(R.id.formula)
    private val tvResultado: AppCompatTextView by bind(R.id.result)

    private var opBotonPulsado: Boolean = false
    private var instanteBotonPulsado: Boolean = false
    private var igualPulsado: Boolean = false

    private var numActual: Double = 0.0 // Value can be changed.
    private var resActual: Double = 0.0
    private var memoria: Double = 0.0

    private var tHistorial = "" // Recognize type of variable without declaring it.
    private var historialOpTexto = ""
    private var listaAccionHistorial: ArrayList<String> = ArrayList()

    private val button0: Button by bind(R.id.btn_0)
    private val button1: Button by bind(R.id.btn_1)
    private val button2: Button by bind(R.id.btn_2)
    private val button3: Button by bind(R.id.btn_3)
    private val button4: Button by bind(R.id.btn_4)
    private val button5: Button by bind(R.id.btn_5)
    private val button6: Button by bind(R.id.btn_6)
    private val button7: Button by bind(R.id.btn_7)
    private val button8: Button by bind(R.id.btn_8)
    private val button9: Button by bind(R.id.btn_9)

    private val CERO: String = "0"
    private val UNO: String = "1"
    private val DOS: String = "2"
    private val TRES: String = "3"
    private val CUATRO: String = "4"
    private val CINCO: String = "5"
    private val SEIS: String = "6"
    private val SIETE: String = "7"
    private val OCHO: String = "8"
    private val NUEVE: String = "9"

    private val INIT = ""

    private val SUMA = " + "
    private val RESTA = " − "
    private val MULTIPLICACION = " × "
    private val DIVISION = " ÷ "

    private val PORCENTAJE = ""
    private val RAIZ = "√"
    private val POTENCIA = "pow"
    private val FRACCION = "1/"

    private val NEGATIVO = "negate"
    private val COMA = ","
    private val IGUAL = " = "

    private var opActual = INIT


    /* ---------   ONCREATE   --------- */

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        setSupportActionBar(findViewById(R.id.toolbar))

        declararBotones()
        limpiarOperaciones()
        comaDecimales()
        igualPulsado()

    }

    /* ---------   FUNCIONES   --------- */

    // DECLARAR VALOR DE BOTÓN
    private fun declararBotones(){

        button0.setOnClickListener {
            onNumberButtonClick(CERO)
        }
        button1.setOnClickListener {
            onNumberButtonClick(UNO)
        }
        button2.setOnClickListener {
            onNumberButtonClick(DOS)
        }
        button3.setOnClickListener {
            onNumberButtonClick(TRES)
        }
        button4.setOnClickListener {
            onNumberButtonClick(CUATRO)
        }
        button5.setOnClickListener {
            onNumberButtonClick(CINCO)
        }
        button6.setOnClickListener {
            onNumberButtonClick(SEIS)
        }
        button7.setOnClickListener {
            onNumberButtonClick(SIETE)
        }
        button8.setOnClickListener {
            onNumberButtonClick(OCHO)
        }
        button9.setOnClickListener {
            onNumberButtonClick(NUEVE)
        }

        botonDivision.setOnClickListener {
            onFutureOperationButtonClick(DIVISION)
        }

        botonMultiplicacion.setOnClickListener {
            onFutureOperationButtonClick(MULTIPLICACION)
        }

        botonResta.setOnClickListener {
            onFutureOperationButtonClick(RESTA)
        }

        botonSuma.setOnClickListener {
            onFutureOperationButtonClick(SUMA)
        }

        botonPorcentaje.setOnClickListener {
            onInstantOperationButtonClick(PORCENTAJE)
        }

        botonRaiz.setOnClickListener {
            onInstantOperationButtonClick(RAIZ)
        }

        botonPotencia.setOnClickListener {
            onInstantOperationButtonClick(POTENCIA)
        }

    }

    // BORRAR CARACTERES (1 A 1 / TODO)
    private fun limpiarOperaciones() {

        // PULSACIÓN CORTA
        botonBorrar.setOnClickListener {

            if (opBotonPulsado || instanteBotonPulsado || igualPulsado) return@setOnClickListener

            var valorActual: String = tvResultado.text.toString()

            val charsLimit = if (valorActual.first().isDigit()) 1 else 2

            if (valorActual.length > charsLimit) {
                valorActual = valorActual.substring(0, valorActual.length - 1)
            } else {
                valorActual = CERO
            }

            tvResultado.text = valorActual
            resActual = formatStringToDouble(valorActual)

        }

        // PULSACIÓN LARGA
        botonBorrar.setOnLongClickListener {

            numActual = 0.0
            resActual = 0.0
            opActual = INIT

            tHistorial = ""
            historialOpTexto = ""

            tvResultado.text = formatDoubleToString(numActual)
            tvHistorial.text = tHistorial

            opBotonPulsado = false
            igualPulsado = false
            instanteBotonPulsado = false

            return@setOnLongClickListener false

        }

    }

    // VALOR DE LA COMA
    private fun comaDecimales() {

        botonComa.setOnClickListener {

            var currentValue: String = tvResultado.text.toString()

            if (opBotonPulsado || instanteBotonPulsado || igualPulsado) {
                currentValue = StringBuilder().append(CERO).append(COMA).toString()
                if (instanteBotonPulsado) {
                    tHistorial = ""
                    tvHistorial.text = StringBuilder().append(tHistorial).append(opActual).toString()
                }
                if (igualPulsado) opActual = INIT
                resActual = 0.0
            } else if (currentValue.contains(COMA)) {
                return@setOnClickListener
            } else currentValue = StringBuilder().append(currentValue).append(COMA).toString()

            tvResultado.text = currentValue

            opBotonPulsado = false
            instanteBotonPulsado = false
            igualPulsado = false
        }
    }

    // APLICANDO OPCIONES DEL MENÚ
    override fun onCreateOptionsMenu(menu: Menu): Boolean {
        menuInflater.inflate(R.menu.menu, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem?): Boolean {
        // Safe call operator ? added to the variable before invoking the property instructs the compiler to invoke the property only if the value isn't null.
        when (item?.itemId) {
            R.id.history -> {
                HistoryActionListDialogFragment.newInstance(listaAccionHistorial).show(getSupportFragmentManager(), "dialog")
                return true
            }
            else -> return super.onOptionsItemSelected(item)
        }

    }

    private fun calcularResultado(): String {

        when (opActual) {
            INIT -> {
                resActual = numActual
                tHistorial = StringBuilder().append(tvHistorial.text.toString()).toString()
            }
            SUMA -> resActual +=  numActual
            RESTA -> resActual -= numActual
            MULTIPLICACION -> resActual *= numActual
            DIVISION -> resActual /= numActual
        }

        tvResultado.text = formatDoubleToString(resActual)

        if (instanteBotonPulsado) {
            instanteBotonPulsado = false
            tHistorial = tvHistorial.text.toString()
            if (igualPulsado) tHistorial = StringBuilder().append(tHistorial).append(opActual).append(formatDoubleToString(numActual)).toString()
        } else {
            tHistorial = StringBuilder().append(tHistorial).append(opActual).append(formatDoubleToString(numActual)).toString()
        }

        return StringBuilder().append(tHistorial).append(IGUAL).append(formatDoubleToString(resActual)).toString()
    }

    private fun onInstantOperationButtonClick(operation: String) {

        var valorActual: String = tvResultado.text.toString()
        var numOpActual: Double = formatStringToDouble(valorActual)

        valorActual = "(${formatDoubleToString(numOpActual)})"

        when (operation) {
            PORCENTAJE -> {
                numOpActual = (resActual * numOpActual) / 100
                valorActual = formatDoubleToString(numOpActual)
            }

            RAIZ -> numOpActual = numOpActual.sqrt
            POTENCIA -> numOpActual = numOpActual * numOpActual
            //FRACTION -> thisOperationNumber = 1 / thisOperationNumber
        }

        if (instanteBotonPulsado) {
            historialOpTexto = "($historialOpTexto)"
            historialOpTexto = StringBuilder().append(operation).append(historialOpTexto).toString()
            tvHistorial.text = if (igualPulsado) historialOpTexto else StringBuilder().append(tHistorial).append(opActual).append(historialOpTexto).toString()
        } else if (igualPulsado) {
            historialOpTexto = StringBuilder().append(operation).append(valorActual).toString()
            tvHistorial.text = historialOpTexto
        } else {
            historialOpTexto = StringBuilder().append(operation).append(valorActual).toString()
            tvHistorial.text = StringBuilder().append(tHistorial).append(opActual).append(historialOpTexto).toString()
        }

        tvResultado.text = formatDoubleToString(numOpActual)

        if (igualPulsado) resActual = numOpActual else numActual = numOpActual

        instanteBotonPulsado = true
        opBotonPulsado = false
    }

    // PULSACION IGUAL
    private fun igualPulsado() {

        botonIgual.setOnClickListener {

            if (opBotonPulsado) {
                numActual = resActual
            }

            val historyAllText = calcularResultado()

            listaAccionHistorial.add(historyAllText)

            tHistorial = StringBuilder().append(formatDoubleToString(resActual)).toString()

            tvHistorial.text = ""

            opBotonPulsado = false
            igualPulsado = true
        }
    }

    @Throws(IllegalArgumentException::class)
    private fun onNumberButtonClick(number: String, isHistory: Boolean = false) {

        var valorActual: String = tvResultado.text.toString()

        valorActual = if (valorActual == CERO || opBotonPulsado || instanteBotonPulsado || igualPulsado || isHistory) number else StringBuilder().append(valorActual).append(number).toString()

        try {
            numActual = formatStringToDouble(valorActual)
        } catch (e: ParseException) {
            throw IllegalArgumentException("String must be number.")
        }

        tvResultado.text = valorActual

        if (igualPulsado) {
            opActual = INIT
            tHistorial = ""
        }

        if (instanteBotonPulsado) {
            historialOpTexto = ""
            tvHistorial.text = StringBuilder().append(tHistorial).append(opActual).toString()
            instanteBotonPulsado = false
        }

        opBotonPulsado = false
        igualPulsado = false
    }

    private fun onFutureOperationButtonClick(operation: String) {

        if (!opBotonPulsado && !igualPulsado) {
            calcularResultado()
        }

        opActual = operation

        if (instanteBotonPulsado) {
            instanteBotonPulsado = false
            tHistorial = tvHistorial.text.toString()
        }
        tvHistorial.text = StringBuilder().append(tHistorial).append(operation).toString()

        opBotonPulsado = true
        igualPulsado = false
    }

    private fun useNumberFormat(): DecimalFormat {

        val symbols = DecimalFormatSymbols(Locale.US)
        symbols.decimalSeparator = ','
        symbols.groupingSeparator = '.'

        val format = DecimalFormat()
        format.maximumFractionDigits = 16
        format.decimalFormatSymbols = symbols
        format.isGroupingUsed = true

        return format
    }

    private fun formatDoubleToString(number: Double): String {
        return useNumberFormat().format(number)
    }

    private fun formatStringToDouble(number: String): Double {
        return useNumberFormat().parse(number).toDouble()
    }

    private val Double.sqrt: Double get() = Math.sqrt(this)

    override fun onHistoryItemClicked(resultText: String) {

        try {
            onNumberButtonClick(resultText, true)
        } catch (e: IllegalArgumentException) {
            return
        }

        Toast.makeText(applicationContext, getString(R.string.history_result) + resultText, Toast.LENGTH_SHORT).show()
    }

    fun <T : View> Activity.bind(@IdRes idRes: Int): Lazy<T> {
        // Function will be called only by the main thread to improve performance.
        return lazy(LazyThreadSafetyMode.NONE) { findViewById<T>(idRes) }
    }

}