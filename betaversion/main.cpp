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


//ERRORES
int leerNumero()
{
   int numero = -1;
   __fpurge(stdin);
   scanf("%i", &numero );
   return numero;
}

/*
void pausa() {
  printf("|     Pulsa" VERDE " 'ENTER' " NORMAL "para para comenzar");
  while(getchar()!='\n');
}
*/

int main(){

  int OpcionM, Opcion1, Opcion2, Opcion3, Opcion4, Opcion5, Opcion6, Opcion7, Opcion8, Opcion9, Opcion10;

    //inicio();

  do{
    menu();
    printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
    OpcionM = leerNumero();
    printf("+---------------------------------------------------------------------+\n");

    switch (OpcionM) {
      case 1:
        menu_basico();
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        fflush(stdout);
        Opcion1 = leerNumero();
        printf("+---------------------------------------------------------------------+\n");
        switch (Opcion1) {
          case 1:
            suma();
            sleep(5);
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
        }
      break;
    default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
    }

  }while(OpcionM!=0);
}
