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
       	 "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
         "┃"      VERDE "\t¿Qué operación deseas realizar?" NORMAL        "\t\t      ┃\n"
         "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
         NEGRITA "┃\t  Pulsa 1 " NORMAL "si 'Raíz cuadrada'\t\t      ┃\n"
       		NEGRITA "┃\t  Pulsa 2 " NORMAL "si 'Raíz cúbica'\t\t      ┃\n");
        printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
        printf("\n");
}

void raiz_cuadrada()
{
	double n;

 	printf(AZULETE "\t  Introduce el número deseado: " NORMAL);
        scanf("%lf", &n);
        printf("\n");
        n = sqrt(n);
        printf(AMARILLO
               "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
               "\t  El resultado de la suma es: %.2f      \n"
               "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" NORMAL, n);

}

void raiz_cubica()
{
	double n;

        printf(AZULETE "\t  Introduce el número deseado: " NORMAL);
        scanf("%lf", &n);
        printf("\n");
        n = cbrt(n);
        printf(AMARILLO
               "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
               "\t  El resultado de la suma es: %.2f      \n"
               "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" NORMAL, n);
}
