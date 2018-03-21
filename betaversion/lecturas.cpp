#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <complex.h>
#include <unistd.h>
#include <ctype.h>
#include <cctype>

#include "lecturas.h"

//int OpcionM, Opcion1, Opcion2, Opcion3, Opcion4, Opcion5, Opcion6, Opcion7, Opcion8, Opcion9, Opcion10;

int leerNumero()
{
   int numero = -1;
   __fpurge(stdin);
   scanf("%i", &numero );
   return numero;
}

void opcion_1()
{
  int OpcionM;
  
  OpcionM = leerNumero();
}

/*
void un_numero()
{
  double op1;

  printf("Introduce un número: ");
  scanf(" %lf", &op1);

}
*/
