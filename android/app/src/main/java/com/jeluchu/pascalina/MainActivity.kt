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
import kotlinx.android.synthetic.main.activity_main.*
import java.text.DecimalFormat
import java.text.DecimalFormatSymbols
import java.text.ParseException

class MainActivity : AppCompatActivity() {

    /* ---------   VARIABLES   --------- */

    // ESTABLECIENDO BOTONES
    private val buttonPercentage: Button by bind(R.id.btn_percent)
    private val buttonRoot: Button by bind(R.id.btn_root)
    private val buttonSquare: Button by bind(R.id.btn_power)

    private val buttonBackspace: Button by bind(R.id.btn_clear)
    private val buttonDivision: Button by bind(R.id.btn_divide)
    private val buttonMultiplication: Button by bind(R.id.btn_multiply)
    private val buttonSubtraction: Button by bind(R.id.btn_minus)
    private val buttonAddition: Button by bind(R.id.btn_plus)
    private val buttonEqual: Button by bind(R.id.btn_equals)
    private val buttonPlusMinus: Button by bind(R.id.btn_minus)
    private val buttonComma: Button by bind(R.id.btn_decimal)

    private val textViewHistoryText: TextView by bind(R.id.formula)
    private val textViewCurrentNumber: AppCompatTextView by bind(R.id.result)

    private var isFutureOperationButtonClicked: Boolean = false
    private var isInstantOperationButtonClicked: Boolean = false
    private var isEqualButtonClicked: Boolean = false

    private var currentNumber: Double = 0.0 // Value can be changed.
    private var currentResult: Double = 0.0
    private var memory: Double = 0.0

    private var historyText = "" // Recognize type of variable without declaring it.
    private var historyInstantOperationText = ""
    private var historyActionList: ArrayList<String> = ArrayList()


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

    private val ADDITION = " + "
    private val SUBTRACTION = " − "
    private val MULTIPLICATION = " × "
    private val DIVISION = " ÷ "

    private val PERCENTAGE = ""
    private val ROOT = "√"
    private val SQUARE = "sqr"
    private val FRACTION = "1/"

    private val NEGATE = "negate"
    private val COMMA = ","
    private val EQUAL = " = "

    private var currentOperation = INIT


    /* ---------   ONCREATE   --------- */

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        setSupportActionBar(findViewById(R.id.toolbar))

        declararBotones()
        limpiarOperaciones()


        buttonPlusMinus.setOnClickListener {

            val currentValue: String = textViewCurrentNumber.text.toString()

            currentNumber = formatStringToDouble(currentValue)
            if (currentNumber == 0.0) return@setOnClickListener

            currentNumber *= -1
            textViewCurrentNumber.text = formatDoubleToString(currentNumber)

            if (isInstantOperationButtonClicked) {
                historyInstantOperationText = "($historyInstantOperationText)"
                historyInstantOperationText = StringBuilder().append(NEGATE).append(historyInstantOperationText).toString()
                textViewHistoryText.text = StringBuilder().append(historyText).append(currentOperation).append(historyInstantOperationText).toString()
            }

            if (isEqualButtonClicked) {
                currentOperation = INIT
            }

            isFutureOperationButtonClicked = false
            isEqualButtonClicked = false
        }

        buttonComma.setOnClickListener {

            var currentValue: String = textViewCurrentNumber.text.toString()

            if (isFutureOperationButtonClicked || isInstantOperationButtonClicked || isEqualButtonClicked) {

                currentValue = StringBuilder().append(CERO).append(COMMA).toString()

                if (isInstantOperationButtonClicked) {
                    historyInstantOperationText = ""
                    textViewHistoryText.text = StringBuilder().append(historyText).append(currentOperation).toString()
                }
                if (isEqualButtonClicked) currentOperation = INIT
                currentNumber = 0.0
            } else if (currentValue.contains(COMMA)) {
                return@setOnClickListener
            } else currentValue = StringBuilder().append(currentValue).append(COMMA).toString()

            textViewCurrentNumber.text = currentValue

            isFutureOperationButtonClicked = false
            isInstantOperationButtonClicked = false
            isEqualButtonClicked = false
        }

        buttonEqual.setOnClickListener {

            if (isFutureOperationButtonClicked) {
                currentNumber = currentResult
            }

            val historyAllText = calculateResult()

            Toast.makeText(applicationContext, historyAllText, Toast.LENGTH_LONG).show()

            historyActionList.add(historyAllText)

            historyText = StringBuilder().append(formatDoubleToString(currentResult)).toString()

            textViewHistoryText.text = ""

            isFutureOperationButtonClicked = false
            isEqualButtonClicked = true
        }

        buttonPercentage.setOnClickListener {
            onInstantOperationButtonClick(PERCENTAGE)
        }

        buttonRoot.setOnClickListener {
            onInstantOperationButtonClick(ROOT)
        }

        buttonSquare.setOnClickListener {
            onInstantOperationButtonClick(SQUARE)
        }

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

        buttonAddition.setOnClickListener {
            onFutureOperationButtonClick(ADDITION)
        }

        buttonSubtraction.setOnClickListener {
            onFutureOperationButtonClick(SUBTRACTION)
        }

        buttonMultiplication.setOnClickListener {
            onFutureOperationButtonClick(MULTIPLICATION)
        }

        buttonDivision.setOnClickListener {
            onFutureOperationButtonClick(DIVISION)
        }
    }

    // BORRAR CARACTERES (1 A 1 / TODO)
    private fun limpiarOperaciones(){

        buttonBackspace.setOnClickListener {

            if (isFutureOperationButtonClicked || isInstantOperationButtonClicked || isEqualButtonClicked) return@setOnClickListener

            var currentValue: String = textViewCurrentNumber.text.toString()

            val charsLimit = if (currentValue.first().isDigit()) 1 else 2

            if (currentValue.length > charsLimit)
                currentValue = currentValue.substring(0, currentValue.length - 1)
            else
                currentValue = CERO

            textViewCurrentNumber.text = currentValue
            currentNumber = formatStringToDouble(currentValue)

        }

        buttonBackspace.setOnLongClickListener {

            this.result.text = null
            this.formula.text = ""

            return@setOnLongClickListener true
        }

    }

    // APLICANDO OPCIONES DEL MENÚ
    override fun onCreateOptionsMenu(menu: Menu): Boolean {
        menuInflater.inflate(R.menu.menu, menu)
        return true
    }

    @Throws(IllegalArgumentException::class)
    private fun onNumberButtonClick(number: String, isHistory: Boolean = false) {

        var currentValue: String = textViewCurrentNumber.text.toString()

        currentValue = if (currentValue == CERO || isFutureOperationButtonClicked || isInstantOperationButtonClicked || isEqualButtonClicked || isHistory) number else StringBuilder().append(currentValue).append(number).toString()

        try {
            currentNumber = formatStringToDouble(currentValue)
        } catch (e: ParseException) {
            throw IllegalArgumentException("String must be number.")
        }

        textViewCurrentNumber.text = currentValue

        if (isEqualButtonClicked) {
            currentOperation = INIT
            historyText = ""
        }

        if (isInstantOperationButtonClicked) {
            historyInstantOperationText = ""
            textViewHistoryText.text = StringBuilder().append(historyText).append(currentOperation).toString()
            isInstantOperationButtonClicked = false
        }

        isFutureOperationButtonClicked = false
        isEqualButtonClicked = false
    }

    private fun onFutureOperationButtonClick(operation: String) {

        if (!isFutureOperationButtonClicked && !isEqualButtonClicked) {
            calculateResult()
        }

        currentOperation = operation

        if (isInstantOperationButtonClicked) {
            isInstantOperationButtonClicked = false
            historyText = textViewHistoryText.text.toString()
        }
        textViewHistoryText.text = StringBuilder().append(historyText).append(operation).toString()

        isFutureOperationButtonClicked = true
        isEqualButtonClicked = false
    }

    private fun onInstantOperationButtonClick(operation: String) {

        var currentValue: String = textViewCurrentNumber.text.toString()
        var thisOperationNumber: Double = formatStringToDouble(currentValue)

        currentValue = "(${formatDoubleToString(thisOperationNumber)})"

        when (operation) {
            PERCENTAGE -> {
                thisOperationNumber = (currentResult * thisOperationNumber) / 100
                currentValue = formatDoubleToString(thisOperationNumber)
            }

            ROOT -> {
                    thisOperationNumber = thisOperationNumber.sqrt
            }

            SQUARE -> {
                thisOperationNumber = thisOperationNumber * thisOperationNumber
            }
            FRACTION -> {
                thisOperationNumber = 1 / thisOperationNumber
            }
        }

        if (isInstantOperationButtonClicked) {
            historyInstantOperationText = "($historyInstantOperationText)"
            historyInstantOperationText = StringBuilder().append(operation).append(historyInstantOperationText).toString()
            textViewHistoryText.text = if (isEqualButtonClicked) historyInstantOperationText else StringBuilder().append(historyText).append(currentOperation).append(historyInstantOperationText).toString()
        } else if (isEqualButtonClicked) {
            historyInstantOperationText = StringBuilder().append(operation).append(currentValue).toString()
            textViewHistoryText.text = historyInstantOperationText
        } else {
            historyInstantOperationText = StringBuilder().append(operation).append(currentValue).toString()
            textViewHistoryText.text = StringBuilder().append(historyText).append(currentOperation).append(historyInstantOperationText).toString()
        }

        textViewCurrentNumber.text = formatDoubleToString(thisOperationNumber)

        if (isEqualButtonClicked) currentResult = thisOperationNumber else currentNumber = thisOperationNumber

        isInstantOperationButtonClicked = true
        isFutureOperationButtonClicked = false
    }

    private fun calculateResult(): String {

        when (currentOperation) {
            INIT -> {
                currentResult = currentNumber
                historyText = StringBuilder().append(textViewHistoryText.text.toString()).toString()
            }
            ADDITION -> currentResult = currentResult + currentNumber
            SUBTRACTION -> currentResult = currentResult - currentNumber
            MULTIPLICATION -> currentResult = currentResult * currentNumber
            DIVISION -> currentResult = currentResult / currentNumber
        }

        textViewCurrentNumber.text = formatDoubleToString(currentResult)

        if (isInstantOperationButtonClicked) {
            isInstantOperationButtonClicked = false
            historyText = textViewHistoryText.text.toString()
            if (isEqualButtonClicked) historyText = StringBuilder().append(historyText).append(currentOperation).append(formatDoubleToString(currentNumber)).toString()
        } else {
            historyText = StringBuilder().append(historyText).append(currentOperation).append(formatDoubleToString(currentNumber)).toString()
        }

        return StringBuilder().append(historyText).append(EQUAL).append(formatDoubleToString(currentResult)).toString()
    }

    private fun useNumberFormat(): DecimalFormat {

        val symbols = DecimalFormatSymbols()
        symbols.decimalSeparator = ','

        val format = DecimalFormat("#.##############")
        format.decimalFormatSymbols = symbols

        return format
    }

    private fun formatDoubleToString(number: Double): String {
        return useNumberFormat().format(number)
    }

    private fun formatStringToDouble(number: String): Double {
        return useNumberFormat().parse(number).toDouble()
    }

    // Extension property provides similar mechanism.
    // Note that you have to define a getter method on your property for this to work.
    private val Double.sqrt: Double get() = Math.sqrt(this)

    private fun clearEntry(newNumber: Double = 0.0) {
        historyInstantOperationText = ""

        if (isEqualButtonClicked) {
            currentOperation = INIT
            historyText = ""
        }

        if (isInstantOperationButtonClicked) textViewHistoryText.text = StringBuilder().append(historyText).append(currentOperation).toString()

        isInstantOperationButtonClicked = false
        isFutureOperationButtonClicked = false
        isEqualButtonClicked = false

        currentNumber = newNumber
        textViewCurrentNumber.text = formatDoubleToString(newNumber)
    }

/*
    // Functions are defined using the “fun” keyword.
    override fun onOptionsItemSelected(item: MenuItem?): Boolean {
        // Safe call operator ? added to the variable before invoking the property instructs the compiler to invoke the property only if the value isn't null.
        when (item?.itemId) {
            R.id.menu_item_history -> {
                HistoryActionListDialogFragment.newInstance(historyActionList).show(getSupportFragmentManager(), "dialog")
                return true
            }
            else -> return super.onOptionsItemSelected(item)
        }

    }

    override fun onHistoryItemClicked(resultText: String) {

        try {
            onNumberButtonClick(resultText, true)
        } catch (e: IllegalArgumentException) {
            return
        }

        Toast.makeText(applicationContext, getString(R.string.history_result) + resultText, Toast.LENGTH_SHORT).show()
    } */

    // Extension function created to add special behaviour to our Activity.
    // Here keyword lazy means it won’t be initialised right away but the first time the value is actually needed.
    fun <T : View> Activity.bind(@IdRes idRes: Int): Lazy<T> {
        // Function will be called only by the main thread to improve performance.
        return lazy(LazyThreadSafetyMode.NONE) { findViewById<T>(idRes) }
    }

    companion object {
        const val NAN = "NaN"
    }
}
