#include <stdio.h>
#include <stdlib.h>

#include "escritura.h"
#include "opbasic.h"

void crear_archivo() {
    FILE* fichero;
    fichero = fopen("pascalina.txt", "a+");

    fputs("PASCALINA v3.0\n", fichero);
    fputs("En este documento podrás visualizar todos los resultados de las operaciones realizadas\n\n", fichero);

}

void res_sumas(){
   
    double op1, op2, Resultado;

    FILE* fichero;

    fichero = fopen("pascalina.txt", "a+");
  
    fprintf(fichero, "El resultado de la suma de %.2lf + %.2lf es igual a %.2lf\n", op1, op2, Resultado);
	
    fclose(fichero);
  
 }
    
