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

#include "raiz.h"

void menu_raiz()
{
 	system("clear");
        system("toilet --gay -fpagga PASCALINA\n\n");
        system("toilet -fpagga RAÍCES\n\n");
        printf("\n");
       	printf(
       	 "+---------------------------------------------------------------------+\n"
         "|"      VERDE "\t\t¿Qué tipo de raíz deseas?" NORMAL        "\t\t\t      |\n"
         "+---------------------------------------------------------------------+\n"
       		NEGRITA "\t  Pulsa 1 " NORMAL "si 'Raíz cuadrada'\n"
       		NEGRITA "\t  Pulsa 2 " NORMAL "si 'Raíz cúbica'\n");
        printf("+---------------------------------------------------------------------+\n");

}

void raiz_cuadrada()
{
	double n;

 	printf(AZULETE "\t  Introduce el número deseado: " NORMAL);
        scanf("%lf", &n);
        printf("+---------------------------------------------------------------------+\n");
        n = sqrt(n);
        printf(AMARILLO "\t  El resultado de la raíz cuadrada es: " NORMAL  NEGRITA  "%lf\n" NORMAL,n);

}

void raiz_cubica()
{
	double n;

        printf(AZULETE "Introduce el número deseado: " NORMAL);
        scanf("%lf", &n);
        printf("+---------------------------------------------------------------------+\n");
        n = cbrt(n);
        printf(AMARILLO "\t  El resultado de la raíz cúbica es: " NORMAL   NEGRITA "%lf\n" NORMAL,n);
}
