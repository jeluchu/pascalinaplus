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

#include "porcentajes.h"

void porcentaje()
{
	double porcentajeb, Resultado;
	float numero, porcentajea;

        system("clear");
        system("toilet --gay -fpagga PASCALINA\n\n");
        system("toilet -fpagga PORCENTAJES\n\n");
        printf("\n");
       	printf("+---------------------------------------------------------------------+\n");
        printf(AZULETE "\t  Introduce el primer número deseado: " NORMAL);
        scanf("\n%f", &numero);
        printf(AZULETE "\t  Introduce el número del porcentaje deseado: " NORMAL);
        scanf("\n%f", &porcentajea);
        printf("+---------------------------------------------------------------------+\n");
        porcentajeb = porcentajea /100;
        Resultado = numero*porcentajeb;
        printf(AMARILLO "\t  El %.0f por ciento de %.0f es: " NORMAL
               NEGRITA "%.2f\n" NORMAL, porcentajea, numero, Resultado);

}

