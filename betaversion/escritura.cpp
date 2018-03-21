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
    strftime(fechayhora, 100, "%d/%m/%y", tm);

    fprintf(fichero, "PASCALINA v3.0 ~ %s\n", fechayhora);
    fprintf(fichero, "En este documento podrás visualizar todos los resultados de las operaciones realizadas\n\n");
    
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

/*    
void instrucciones(){
   
     //APERTURA DE IMÁGENES
     //system("run-mailcap ../fotos/foto.png"); 

     //APERTURA DE DOCUMENTOS PDF - PARA UN MANUAL
     //system("evince ./pascalina.txt"); 
  
 }
 */   
