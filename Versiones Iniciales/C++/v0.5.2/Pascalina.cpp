//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

//ESTE ES UN PROYECTO QUE COMENCÉ A REALIZAR TRAS APRENDER ALGUNOS CONOCIMIENTOS BÁSICOS DE PROGRAMACIÓN, 
//Y QUE POCO A POCO HA IDO AVANZANDO. POR ESO EN MIS RATOS LIBRES INTENTARÉ REALIZAR MEJORAS A ESTA CALCULADORA. 
//ASÍ QUE POR EL MOMENTO ESTARÁ EN DESARROLLO. SI QUERÉIS SABER MÁS ACERCA DE ESTE PROYECTO O APORTAR ALGUNA IDEA, 
//NO DUDÉIS EN PONEROS EN CONTACTO

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define MAGENTA "\x1B[1;35m"

int main(){

    double op1;
    double op2;
    int Opcion;
    double Resultado;
    double n;

    printf("\n");
    system("toilet --gay -fpagga PASCALINA\n\n");
    printf("\n");
    printf(VERDE "PASCALINA v0.5.2 ~ Versión 'Estable'\n" NORMAL);
    printf("Bienvenido/a a 'Pascalina', la calculadora adivina\n");
    printf("En ella podrás realizar diversas operaciónes con dos números\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf(AZUL "Introducir el primer número deseado: " NORMAL);
    scanf(" %lf", &op1);

    printf(AZUL "Introducir el segundo número deseado: " NORMAL);
    scanf(" %lf", &op2);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    fflush(stdin);

    printf(MAGENTA "\t¿Qué operación deseas realizar?\n" NORMAL);
    printf("\t  Pulsa 1 si deseas sumar\n");
    printf("\t  Pulsa 2 si deseas restar\n");
    printf("\t  Pulsa 3 si deseas multiplicar\n");
    printf("\t  Pulsa 4 si deseas dividir\n");
    printf("\t  Pulsa 5 si deseas hacer una Raíz Cuadrada\n");
    printf("\t  Pulsa 6 si deseas cambiar los valores\n");
    printf("\t  Pulsa 0 si deseas salir\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(AZUL "Escoge la opción deseada: " NORMAL);


do{
    scanf("%i", &Opcion);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    switch(Opcion) {
    case 0:
           printf(NEGRITA "Gracias por usar 'Pascalina', esperamos que te haya sido de utilidad\n");
           printf(NEGRITA "Muchas gracias\n\n");
           printf("¡HASTA PRONTO!\n\n" NORMAL);
           system("toilet --gay -fpagga JÉLUCHU\n\n");
           printf("\n");
           return EXIT_SUCCESS;
    break;

    case 1: Resultado = op1+op2; /* Suma */
        printf(AMARILLO"El resultado de la suma es: ");
        printf("%.3f\n\n" NORMAL, Resultado);
    break;

    case 2: Resultado = op1-op2; /* Resta */
        printf(AMARILLO"El resultado de la resta es: ");
        printf("%.3f\n\n" NORMAL, Resultado);
    break;

    case 3: Resultado = op1*op2; /* Multiplicación */
        printf(AMARILLO"El resultado de la multiplicación es: ");
        printf("%.3f\n\n" NORMAL, Resultado);
    break;

    case 4: Resultado = op1/op2; /* División */
        printf(AMARILLO"El resultado de la división es: ");
        printf("%.4f\n\n" NORMAL, Resultado);
    break;

    case 5: /* Raíz Cuadrada */
        printf(AZUL "Introducir el número deseado: " NORMAL);
           scanf("%lf", &n);
           n = sqrt(n);
           printf(AMARILLO "El resultado de la raíz cuadrada es: %lf\n\n" NORMAL,n);
    break;

    case 6:
        printf(AZUL "Introducir el primer número deseado: " NORMAL);
        scanf(" %lf", &op1);
        printf(AZUL "Introducir el segundo número deseado: " NORMAL);
        scanf(" %lf", &op2);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break;

    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);

  }


    printf(NEGRITA "Para realizar otra operación, marque una opción: " NORMAL);
 }while(Opcion!=0);
 }
