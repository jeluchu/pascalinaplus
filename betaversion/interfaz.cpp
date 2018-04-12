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

void inicio(){

      system("clear");

      time_t tiempo = time(0);
      struct tm *tlocal = localtime(&tiempo);

      char output[128];
      strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);

      FILE* fichero;
      fichero = fopen("pascalina.txt", "a+");

      fprintf(fichero, "PASCALINA v3.0 %d/%m/%y\n", tlocal);
      fprintf(fichero, "En este documento podrás visualizar todos los resultados de las operaciones realizadas\n\n");

      fclose(fichero);


      printf("\n");
      system("toilet --gay -fpagga PASCALINA\n\n");
      printf("\n");
      sleep(1);
      printf(AMARILLO "|     Te damos la bienvenida ");
      printf("%s", getenv("USER"));
      printf("\n" NORMAL);
      sleep(1);
      printf(VERDE "|     PASCALINA v2.0.2 · MARIE CURIE ~ Versión 'ESTABLE'\n" NORMAL);
      printf(AZULETE "|     Iniciada el %s\n" NORMAL,output);
      printf("+---------------------------------------------------------------------+\n");
      sleep(1);
      printf(
     NEGRITA "|     Pascalina, la calculadora adivina\n"
             "|     En ella podrás realizar diversas operaciones matemáticas\n"
             "|     conversiones de unidades, calcular tu propio sueldo y además\n"
             "|     podrás hasta saber un número en romano.\n" NORMAL);
      printf("+---------------------------------------------------------------------+\n\n");
      sleep(2);
      printf("|     Pulsa" VERDE " 'ENTER' " NORMAL "para para comenzar");

      while(getchar()!='\n');
}

void menu(){

      system("clear");
      system("toilet -fpagga PASCALINA\n\n");
      system("toilet -fpagga CALCULADORA ADIVINA\n\n");
      printf("\n");
      printf(

          "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
          "┃"      VERDE "\t ¿Qué operación deseas realizar?" NORMAL     "\t      ┃\n"
          "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
          "┃" NEGRITA "\t  Pulsa 1 " NORMAL "para 'Operaciones básicas'" "\t      ┃\n"
          "┃" NEGRITA "\t  Pulsa 2 " NORMAL "para 'Raíces'"   "\t\t\t      ┃\n"
          "┃" NEGRITA "\t  Pulsa 3 " NORMAL "para 'Porcentajes'" "\t\t      ┃\n"
          "┃" NEGRITA "\t  Pulsa 4 " NORMAL "para 'Potencias'" "\t\t      ┃\n"
          "┃" NEGRITA "\t  Pulsa 5 " NORMAL "para 'Geometría'" "\t\t      ┃\n"
          "┃" NEGRITA "\t  Pulsa 6 " NORMAL "para 'Funciones trigonométricas'" "    ┃\n"
          "┃" NEGRITA "\t  Pulsa 7 " NORMAL "para 'Economía" "\t\t      ┃\n"
          "┃" NEGRITA "\t  Pulsa 8 " NORMAL "para 'Logaritmos'" "\t\t      ┃\n"
          "┃" NEGRITA "\t  Pulsa 9 " NORMAL "para 'Información de versión'""       ┃\n"
          "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
          "┃" NEGRITA "\t  Pulsa 0 " NORMAL "si deseas salir" "\t\t      ┃\n"
          "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
          printf("\n");


}
