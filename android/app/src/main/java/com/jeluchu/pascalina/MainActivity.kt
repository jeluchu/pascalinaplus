package com.jeluchu.pascalina

import android.app.Activity
import android.content.Intent
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
    private val botonComa: Button by bind(R.id.btn_decimal)

    private val tvHistorial: TextView by bind(R.id.formula)
    private val tvResultado: AppCompatTextView by bind(R.id.result)

    private var opBotonPulsado: Boolean = false
    private var instanteBotonPulsado: Boolean = false
    private var igualPulsado: Boolean = false

    private var numActual: Double = 0.0 // Value can be changed.
    private var resActual: Double = 0.0

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
            numPulsado(CERO)
        }
        button1.setOnClickListener {
            numPulsado(UNO)
        }
        button2.setOnClickListener {
            numPulsado(DOS)
        }
        button3.setOnClickListener {
            numPulsado(TRES)
        }
        button4.setOnClickListener {
            numPulsado(CUATRO)
        }
        button5.setOnClickListener {
            numPulsado(CINCO)
        }
        button6.setOnClickListener {
            numPulsado(SEIS)
        }
        button7.setOnClickListener {
            numPulsado(SIETE)
        }
        button8.setOnClickListener {
            numPulsado(OCHO)
        }
        button9.setOnClickListener {
            numPulsado(NUEVE)
        }

        botonDivision.setOnClickListener {
            operacionBasica(DIVISION)
        }

        botonMultiplicacion.setOnClickListener {
            operacionBasica(MULTIPLICACION)
        }

        botonResta.setOnClickListener {
            operacionBasica(RESTA)
        }

        botonSuma.setOnClickListener {
            operacionBasica(SUMA)
        }

        botonPorcentaje.setOnClickListener {
            calcularOpInstant(PORCENTAJE)
        }

        botonRaiz.setOnClickListener {
            calcularOpInstant(RAIZ)
        }

        botonPotencia.setOnClickListener {
            calcularOpInstant(POTENCIA)
        }

    }

    // BORRAR CARACTERES (1 A 1 / COMPLETO)
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

    // EVENTOS DE OPCIONES DEL MENÚ
    override fun onOptionsItemSelected(item: MenuItem?): Boolean {
        // Safe call operator ? added to the variable before invoking the property instructs the compiler to invoke the property only if the value isn't null.
        when (item?.itemId) {
            R.id.historial -> {
                HistoryActionListDialogFragment.newInstance(listaAccionHistorial).show(supportFragmentManager, "dialog")
                return true
            }
            R.id.informacion -> {
                val i = Intent(this, InfoActivity::class.java)
                startActivity(i)
            }
            /*
            R.id.ajustes -> {
                val i = Intent(this, SettingsActivity::class.java)
                startActivity(i)
            } */
            else -> return super.onOptionsItemSelected(item)
        }
        return true
    }

    // CALCULAR OPCIONES BÁSICAS
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

    // CALCULAR OPCIONES INSTANTÁNEAS
    private fun calcularOpInstant(operation: String) {

        var valorActual: String = tvResultado.text.toString()
        var numOpActual: Double = formatStringToDouble(valorActual)

        valorActual = "(${formatDoubleToString(numOpActual)})"

        when (operation) {
            PORCENTAJE -> {
                numOpActual = (resActual * numOpActual) / 100
                valorActual = formatDoubleToString(numOpActual)
            }

            RAIZ -> numOpActual = numOpActual.sqrt
            POTENCIA -> numOpActual *= numOpActual
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

    // EVENTO AL PULSAR UN NÚMERO
    @Throws(IllegalArgumentException::class)
    private fun numPulsado(number: String, isHistory: Boolean = false) {

        var valorActual: String = tvResultado.text.toString()

        valorActual = if (valorActual == CERO || opBotonPulsado || instanteBotonPulsado || igualPulsado || isHistory) number else StringBuilder().append(valorActual).append(number).toString()

        try {
            numActual = formatStringToDouble(valorActual)
        } catch (e: ParseException) {
            throw IllegalArgumentException("El string debe ser un número")
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

    // REALIZACIÓN DE OPERACIONES BÁSICAS
    private fun operacionBasica(operation: String) {

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

    // FORMATO DE LOS DECIMALES
    private fun numFormato(): DecimalFormat {

        val symbols = DecimalFormatSymbols(Locale.US)
        symbols.decimalSeparator = ','
        symbols.groupingSeparator = '.'

        val format = DecimalFormat()
        format.maximumFractionDigits = 16
        format.decimalFormatSymbols = symbols
        format.isGroupingUsed = true

        return format
    }

    // CONVERSIÓN DE DOUBLE A STRING
    private fun formatDoubleToString(number: Double): String {
        return numFormato().format(number)
    }

    // CONVERSIÓN DE STRING A DOUBLE
    private fun formatStringToDouble(number: String): Double {
        return numFormato().parse(number).toDouble()
    }

    // RAÍZ CUADRADA OPCIONES
    private val Double.sqrt: Double get() = Math.sqrt(this)

    // HISTORIAL TOAST
    override fun onHistoryItemClicked(resultText: String) {

        try {
            numPulsado(resultText, true)
        } catch (e: IllegalArgumentException) {
            return
        }

        Toast.makeText(applicationContext, getString(R.string.history_result) + resultText, Toast.LENGTH_SHORT).show()
    }

    private fun <T : View> Activity.bind(@IdRes idRes: Int): Lazy<T> {

        // LLAMADA ÚNICAMENTE POR EL HILO PRINCIPAL
        return lazy(LazyThreadSafetyMode.NONE) { findViewById<T>(idRes) }
    }

}