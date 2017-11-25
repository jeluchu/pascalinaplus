//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

//ESTE ES UN PROYECTO QUE COMENCÉ A REALIZAR TRAS APRENDER ALGUNOS CONOCIMIENTOS BÁSICOS DE PROGRAMACIÓN, Y QUE POCO A POCO HA IDO AVANZANDO. POR ESO EN MIS RATOS LIBRES INTENTARÉ REALIZAR MEJORAS A ESTA CALCULADORA. ASÍ QUE POR EL MOMENTO ESTARÁ EN DESARROLLO. SI QUERÉIS SABER MÁS ACERCA DE ESTE PROYECTO O APORTAR ALGUNA IDEA, NO DUDÉIS EN PONEROS EN CONTACTO

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define MAGENTA "\x1B[1;35m"
#define PI "3.14159265"

int main(){

    double op1, op2, Resultado, n, lado, area, perimetro, x, s, c, t;
    int Opcion, Opcion2, Opcion3;
    float numero, porcentajea, porcentajeb;

    printf("\n");
    system("toilet --gay -fpagga PASCALINA v0.6\n\n");
    sleep(2);
    printf(VERDE "PASCALINA v0.6 ~ Versión 'ESTABLE'\n" NORMAL);
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
    printf("\t  Pulsa 1 si deseas sumar\n"
           "\t  Pulsa 2 si deseas restar\n"
           "\t  Pulsa 3 si deseas multiplicar\n"
           "\t  Pulsa 4 si deseas dividir\n"
           "\t  Pulsa 5 si deseas realizar una Raíz\n"
           "\t  Pulsa 6 si deseas cambiar los valores\n"
           "\t  Pulsa 7 si deseas realizar porcentajes\n"
           "\t  Pulsa 8 si deseas realizar potencias\n"
           "\t  Pulsa 9 si deseas saber el área y el perímetro de un cuadrado\n"
           "\t  Pulsa 10 si deseas realizar funciones trigonométricas\n"
           "\t  Pulsa 0 si deseas salir\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(AZUL "Escoge la opción deseada: " NORMAL);

do{
    scanf("%i", &Opcion);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    switch(Opcion) {
    case 0:
           printf(NEGRITA "Gracias por usar 'Pascalina', esperamos que te haya sido de utilidad\n"
                          "Muchas gracias\n\n");
           printf("¡HASTA PRONTO!\n\n" NORMAL);
           sleep(1);
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
        printf(MAGENTA "\t¿Qué tipo de raíz deseas?\n" NORMAL);
        printf("\t  Pulsa 1 si deseas raíz cuadrada\n"
               "\t  Pulsa 2 si deseas raíz cúbica\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion2);
        switch(Opcion2){
        case 1:
           printf(AZUL "Introducir el número deseado: " NORMAL);
           scanf("%lf", &n);
           n = sqrt(n);
           printf(AMARILLO "El resultado de la raíz cuadrada es: %lf\n\n" NORMAL,n);
        break;

        case 2:
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf("%lf", &n);
            n = cbrt(n);
            printf(AMARILLO "El resultado de la raíz cúbica es: %lf\n\n" NORMAL,n);
        }
    break;

    case 6:
        printf(AZUL "Introducir el primer número deseado: " NORMAL);
        scanf(" %lf", &op1);
        printf(AZUL "Introducir el segundo número deseado: " NORMAL);
        scanf(" %lf", &op2);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break;

    case 7:
        printf(AZUL "Introducir el primer número deseado: " NORMAL);
        scanf("\n%f", &numero);
        printf(AZUL "Introducir el número del porcentaje deseado: " NORMAL);
        scanf("\n%f", &porcentajea);
        porcentajeb = porcentajea /100;
        Resultado = numero*porcentajeb;
        printf(AMARILLO "\n El %.2f por ciento de %.2f es %.2f\n\n" NORMAL, porcentajea, numero, Resultado);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    break;

    case 8:
        printf(AZUL "Introducir el primer número deseado: " NORMAL);
        scanf(" %lf", &op1);
        printf(AZUL "Introducir el número del exponente deseado: " NORMAL);
        scanf(" %lf", &op2);
        if(op2<0) /*Si el exponente fuese negativo saldría un error */
        printf(ROJO "Solo se admitirán exponentes positivos\n\n" NORMAL);
        else
        {
            Resultado = pow(op1,op2);
            printf(AMARILLO "El resultado de %f^%f es %f\n\n" NORMAL, op1, op2, Resultado);
        }
        break;
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break;

    case 9:
        printf("Introducir la longitud del lado: ");
        scanf(" %lf", &lado);
        area = lado*lado;
        perimetro = 4*lado;
        printf("El resultado del área es: %.2f\n"
               "El resultado del perímetro: %.2f\n", area, perimetro);

        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break;

    case 10:
        printf(MAGENTA "\t¿Qué tipo de raíz deseas?\n" NORMAL);
        printf("\t  Pulsa 1 si deseas realizar el seno\n"
               "\t  Pulsa 2 si deseas realizar el coseno\n"
               "\t  Pulsa 3 si deseas realizar la tangente\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion3);
        switch(Opcion3){
        case 1:
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            s = sin(x*3.14159/180);
            printf(AMARILLO "El resultado del seno es: %lf\n\n" NORMAL,s);
        break;

        case 2:
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            c = cos(x*3.14159/180);
            printf(AMARILLO "El resultado del coseno es: %lf\n\n" NORMAL,c);
        break;
        case 3:
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            t = tan(x*3.14159/180);
            printf(AMARILLO "El resultado de la tangente es: %lf\n\n" NORMAL,t);
        break;
        }
    break;

    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
    }
    printf(NEGRITA "Para realizar otra operación, marque una opción: " NORMAL);
 }while(Opcion!=0);
 }
