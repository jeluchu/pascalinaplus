#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <complex.h>
#include <unistd.h>
#include <ctype.h>
#include <cctype>
#include <strings.h>
#include <string.h>

#include "potencias.h"

void potencia()
{
	double op1, op2, Resultado;

        system("clear");
        system("toilet --gay -fpagga PASCALINA\n\n");
        system("toilet -fpagga PONTENCIAS\n\n");
        printf("\n");

       	printf("+---------------------------------------------------------------------+\n");
        printf(AZULETE "\t  Introduce el primer número deseado: " NORMAL);
        scanf(" %lf", &op1);
        printf(AZULETE "\t  Introduce el número del exponente deseado: " NORMAL);
        scanf(" %lf", &op2);
        printf("+---------------------------------------------------------------------+\n");

        if(op2<0)
        printf(ROJO "\t  Solo se admitirán exponentes positivos\n" NORMAL);
        else
        {
            Resultado = pow(op1,op2);
            printf(AMARILLO "\t  El resultado de %.0f^%.0f es: " NORMAL
                   NEGRITA "%f\n" NORMAL, op1, op2, Resultado);
        }

}

