#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <complex.h>
#include <unistd.h>
#include <ctype.h>
#include <cctype>

#include "interfaz.h"
#include "opbasic.h"
#include "raiz.h"
#include "porcentajes.h"
#include "potencias.h"
#include "escritura.h"

//ERRORES
int leerNumero()
{
   int numero = -1;
   __fpurge(stdin);
   scanf("%i", &numero );
   return numero;
}


void pausa() {
  __fpurge(stdin);
  printf("|     Pulsa" VERDE " 'ENTER' " NORMAL "para para comenzar");
  while(getchar()!='\n');
}


int main(){

  int OpcionM, Opcion1, Opcion2, Opcion3, Opcion4, Opcion5, Opcion6, Opcion7, Opcion8, Opcion9, Opcion10;

    //inicio();

  crear_archivo();

  do{
    menu();
    printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
    OpcionM = leerNumero();

    switch (OpcionM) {

      /* OPERACIONES BÁSICO */
      case 1:
        menu_basico();
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        fflush(stdout);
        Opcion1 = leerNumero();
        printf("+---------------------------------------------------------------------+\n");

        switch (Opcion1) {
          case 1:
            suma();
            pausa();
          break;

          case 2:
            resta();
            sleep(5);
          break;

          case 3:
            multiplicacion();
            sleep(5);
          break;

          case 4:
            division();
            sleep(5);
          break;

          case 5:
            restodivision();
            sleep(5);
          break;

          case 6:
            mediaritmetica();
            sleep(5);
          break;

          case 7:
            digitalizadornumerico();
            sleep(5);
          break;

          case 8:
            sumafracciones();
            sleep(5);
          break;
        }

      break;

      /* RAÍCES */
      case 2:

	menu_raiz();
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        fflush(stdout);
        Opcion2 = leerNumero();
        printf("+---------------------------------------------------------------------+\n");

	switch(Opcion2){
	 case 1:
	  raiz_cuadrada();
	  sleep(5);
	 break;

	 case 2:
	  raiz_cubica();
	  sleep(5);
	 break;
	}

       break;


      /* PORCENTAJES */
      case 3:
	porcentaje();
	sleep(5);
      break;


      /* POTENCIAS */
      case 4:
	potencia();
	sleep(5);
      break;


      /* GEOMETRÍA */
      case 5:

      break;

      /* TROGONOMETRÍA */
      case 6:

      break;

      /* SALIDA DEL PROGRAMA */
      case 0:
        return EXIT_SUCCESS;
      break;

    default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
    }

  }while(OpcionM!=0);
}
