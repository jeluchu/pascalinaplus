#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "escritura.h"
#include "opbasic.h"

void crear_archivo() {

    FILE* fichero;
    fichero = fopen("pascalina.txt", "a+");

    time_t t;
    struct tm *tm;
    char fechayhora[100];

    t=time(NULL);
    tm=localtime(&t);
    strftime(fechayhora, 100, "%d/%m/%y a las %H:%M", tm);

    fputs("\n\n", fichero);
    fputs("┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉┉\n", fichero);
    fprintf(fichero, "PASCALINA v3.0 ~ %s\n", fechayhora);
    fputs("─────────────────────────────────────\n\n", fichero);
    fprintf(fichero, "Historial de operaciones realizadas\n\n");

    fclose(fichero);

}

void res_sumas(double op1, double op2, double Resultado){

    FILE* fichero;

    fichero = fopen("pascalina.txt", "a+");

    fprintf(fichero, "El resultado de la suma de %.2lf + %.2lf es igual a %.2lf\n", op1, op2, Resultado);
    fputs("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n", fichero);

    fclose(fichero);

 }

void res_restas(double op1, double op2, double resultado){

    FILE* fichero;

    fichero = fopen("pascalina.txt", "a+");

    fprintf(fichero, "El resultado de la resta de %.2lf - %.2lf es igual a %.2lf\n", op1, op2, resultado);
    fputs("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n", fichero);

    fclose(fichero);

 }

 void res_multiplicaciones(double op1, double op2, double resultado){

     FILE* fichero;

     fichero = fopen("pascalina.txt", "a+");

     fprintf(fichero, "El resultado de la multiplicación de %.2lf x %.2lf es igual a %.2lf\n", op1, op2, resultado);
     fputs("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n", fichero);

     fclose(fichero);

  }

  void res_divisiones(double dividendo, double divisor, double resto){

      FILE* fichero;

      fichero = fopen("pascalina.txt", "a+");

      fprintf(fichero, "El resultado de la división de %.2lf ÷ %.2lf es igual a %.2lf\n", dividendo, divisor, resto);
      fputs("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n", fichero);

      fclose(fichero);

   }

   void res_resto_divisiones(double dividendo, double divisor, double resto){

       FILE* fichero;

       fichero = fopen("pascalina.txt", "a+");

       fprintf(fichero, "El resto de la división de %.2lf ÷ %.2lf es %.2lf\n", dividendo, divisor, resto);
       fputs("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n", fichero);

       fclose(fichero);

    }

/*
void instrucciones(){

     //APERTURA DE IMÁGENES
     //system("run-mailcap ../fotos/foto.png");

     //APERTURA DE DOCUMENTOS PDF - PARA UN MANUAL
     //system("evince ./pascalina.txt");

 }
 */
