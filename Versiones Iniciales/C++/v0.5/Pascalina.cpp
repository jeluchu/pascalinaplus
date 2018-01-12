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

int main(){

    int op1;
    int op2;
    int Opcion;
    int Resultado;
    int n;

    printf("PASCALINA v0.5\n\n");

    printf("Bienvenido/a a 'Pascalina', la calculadora adivina, en ella podrás realizar diversas operaciónes con dos números\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Introducir el primer número deseado: ");
    scanf(" %i", &op1);

    printf("Introducir el segundo número deseado: ");
    scanf(" %i", &op2);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    fflush(stdin);

    printf("\t¿Qué operación deseas realizar?\n");
    printf("\tPulsa 1 si deseas sumar\n");
    printf("\tPulsa 2 si deseas restar\n");
    printf("\tPulsa 3 si deseas multiplicar\n");
    printf("\tPulsa 4 si deseas dividir\n");
    printf("\tPulsa 5 si deseas hacer una Raíz Cuadrada\n");
    printf("\tPulsa 6 si deseas cambiar los valores\n");
    printf("\tPulsa 0 si deseas salir\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Escoge la opción deseada: ");


do{
    scanf("%i", &Opcion);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    switch(Opcion) {
    case 0:
           printf("Gracias por usar 'Pascalina', esperamos que te haya sido de utilidad. Muchas gracias\n");
           return EXIT_SUCCESS;
    break;

    case 1: Resultado = op1+op2; /* Suma */
        printf("El resultado de la suma es: ");
        printf("%i\n\n", Resultado);
    break;

    case 2: Resultado = op1-op2; /* Resta */
        printf("El resultado de la resta es: ");
        printf("%i\n\n", Resultado);
    break;

    case 3: Resultado = op1*op2; /* Multiplicación */
        printf("El resultado de la multiplicación es: ");
        printf("%i\n\n", Resultado);
    break;

    case 4: Resultado = op1/op2; /* División */
        printf("El resultado de la división es: ");
        printf("%i\n\n", Resultado);
    break;

    case 5: /* Raíz Cuadrada */
        printf("Introducir el número deseado: ");
           scanf("%i",&n);
           n = sqrt(n);
           printf("El resultado de la raíz cuadrada es: %i\n\n",n);
    break;

    case 6:
        printf("Introducir el primer número deseado: ");
        scanf(" %i", &op1);
        printf("Introducir el segundo número deseado: ");
        scanf(" %i", &op2);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break;

    default: printf("Por favor seleccione una opción correcta\n");

  }


    printf("Para realizar otra operación, marque una opción: ");
 }while(Opcion!=0);
 }
