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
#include "escritura.h"

#include "opbasic.h"

void menu_basico()
{
  system("clear");
  system("toilet --gay -fpagga PASCALINA\n\n");
  system("toilet -fpagga OPERACIONES BÁSICAS\n\n");
  printf("\n");
  printf(
        "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
        "┃"      VERDE "\t¿Qué operación deseas realizar?" NORMAL        "\t\t      ┃\n"
        "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
        "┃"NEGRITA "\t  Pulsa 1 " NORMAL "'Suma'"   "\t\t\t      ┃\n"
        "┃"NEGRITA "\t  Pulsa 2 " NORMAL "'Resta' " "\t\t\t      ┃\n"
        "┃"NEGRITA "\t  Pulsa 3 " NORMAL "'Multiplicación'" "\t\t      ┃\n"
        "┃"NEGRITA "\t  Pulsa 4 " NORMAL "'División'" "\t\t\t      ┃\n"
        "┃"NEGRITA "\t  Pulsa 5 " NORMAL "'Resto de una división entera'" "      ┃\n"
        "┃"NEGRITA "\t  Pulsa 6 " NORMAL "'Media entre varios números'" "\t      ┃\n"
        "┃"NEGRITA "\t  Pulsa 7 " NORMAL "'Digitalizador de números'" "\t      ┃\n"
        "┃"NEGRITA "\t  Pulsa 8 " NORMAL "'Suma de fracciones'" "\t\t      ┃\n");
  printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");



}

void suma ()
{
  double numero1, numero2, resultado;

  printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &numero1);

  printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &numero2);
  printf("+---------------------------------------------------------------------+\n");

  if((numero1<=10000000) && (numero2<=10000000))
  {
    resultado = numero1+numero2;
    printf(AMARILLO"\t  El resultado de la suma es: " NORMAL
           NEGRITA "%.2f\n" NORMAL, resultado);
    res_sumas(numero1, numero2, resultado);
  }
  else
  {
    printf(ROJO"\t  Introduce valores menores de 10.000.000\n" NORMAL);
  }

}

void resta()
{
  double op1, op2, resultado;

  printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &op1);

  printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &op2);
  printf("+---------------------------------------------------------------------+\n");

  if((op1<=10000000) && (op2<=10000000))
  {
    resultado = op1-op2;
    printf(AMARILLO "\t  El resultado de la resta es: " NORMAL
           NEGRITA "%.2f\n" NORMAL, resultado);
    res_restas(op1, op2, resultado);
  }
  else
  {
    printf(ROJO"\t  Introduce valores menores de 10.000.000\n" NORMAL);
  }
}

void multiplicacion()
{
  double op1, op2, resultado;

  printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &op1);

  printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &op2);
  printf("+---------------------------------------------------------------------+\n");
  if((op1<=10000000) || (op2<=10000000)){
  resultado = op1*op2;
  printf(AMARILLO"\t  El resultado de la multiplicación es: " NORMAL
         NEGRITA "%.2f\n" NORMAL, resultado);
  res_multiplicaciones(op1, op2, resultado);
  }else{printf(ROJO"\t  Introduce valores menores de 10.000.000\n" NORMAL);}
}

void division()
{
  double op1, op2, resultado;

  printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &op1);

  printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
  __fpurge(stdin);
  scanf(" %lf", &op2);
  printf("+---------------------------------------------------------------------+\n");
  if((op1<=10000000) || (op2<=10000000)){
  resultado = op1/op2;
  printf(AMARILLO"\t  El resultado de la división es: " NORMAL
         NEGRITA "%.2f\n" NORMAL, resultado);
  }else{printf(ROJO"\t  Introduce valores menores de 10.000.000\n" NORMAL);}
}

void restodivision()
{
  int dividendo,divisor,resto;

  printf(AZULETE "\t  Introduce el dividendo: " NORMAL);
  __fpurge(stdin);
  scanf("%d",&dividendo);
  printf(AZULETE "\t  Introduce el divisor: " NORMAL);
  __fpurge(stdin);
  scanf("%d",&divisor);
  printf("+---------------------------------------------------------------------+\n");
  resto=dividendo%divisor;
  printf(AMARILLO "\t  El resto de la division es: " NORMAL
         NEGRITA "%d\n" NORMAL,resto);
}

void mediaritmetica()
{
  int V;
  float Media,n1,n2,n3;

  printf(AZUL "\t  Introduce el número de valores que habrá (min 2, máx 3): " NORMAL);
  __fpurge(stdin);
  scanf("%i",&V);
  while(getchar()!='\n');
  printf("+---------------------------------------------------------------------+\n");
  switch(V){
  case 2:
      printf(AZULETE "\t  Introduce el primer número: " NORMAL);
      __fpurge(stdin);
      scanf("%f",&n1);
      printf(AZULETE "\t  Introduce el segundo número: " NORMAL);
      __fpurge(stdin);
      scanf("%f",&n2);
      printf("+---------------------------------------------------------------------+\n");
      Media=(n1+n2)/2;
      printf(AMARILLO "\t  La media aritmética es: " NORMAL
             NEGRITA "%.2f\n" NORMAL,Media);
  break;

  case 3:
      printf(AZULETE "\t  Introduce el primer número: ");
      __fpurge(stdin);
      scanf("%f",&n1);
      printf(AZULETE "\t  Introduce el segundo número: ");
      __fpurge(stdin);
      scanf("%f",&n2);
      printf(AZULETE "\t  Introduce el tercer número: ");
      __fpurge(stdin);
      scanf("%f",&n3);
      printf("+---------------------------------------------------------------------+\n");
      Media=(n1+n2+n3)/3;
      printf(AMARILLO "\t  La media aritmética es: " NORMAL
              NEGRITA "%.2f\n" NORMAL,Media);
  break;
  default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
  }

}

void digitalizadornumerico()
{
  int A, B, C, X;

  printf(AZULETE "\t  Introduce el valor de 'A': " NORMAL);
  __fpurge(stdin);
  scanf(" %i", &A);
  printf(AZULETE "\t  Introduce el valor de B: " NORMAL);
  __fpurge(stdin);
  scanf ("%d", &B);
  printf (AZULETE "\t  Introduce el valor de 'C': " NORMAL);
  __fpurge(stdin);
  scanf ("%d", &C);
  printf("+---------------------------------------------------------------------+\n");
  X=A*100+B*10+C;
  printf(AMARILLO "\t  El valor digitalizado será " NORMAL NEGRITA "%i\n" NORMAL, X);
}

void sumafracciones()
{
  float dividendo1, dividendo2, divisor1, divisor2, resultado;

  printf (AZULETE "\t  Introduce el valor de dividendo 1: " NORMAL);
  __fpurge(stdin);
  scanf ("%f", &dividendo1);
  printf (AZULETE "\t  Introduce el valor de dividendo 2: " NORMAL);
  __fpurge(stdin);
  scanf ("%f", &dividendo2);
  printf (AZULETE "\t  Introduce el valor de divisor 1: " NORMAL);
  __fpurge(stdin);
  scanf ("%f", &divisor1);
  printf (AZULETE "\t  Introduce el valor de divisor 2: " NORMAL);
  __fpurge(stdin);
  scanf ("%f", &divisor2);
  resultado=(divisor1*dividendo2+divisor2*dividendo1)/dividendo2/dividendo1;
  printf (AMARILLO "\t  El resultado de la suma es " NORMAL NEGRITA "%g\n" NORMAL, resultado);
}
