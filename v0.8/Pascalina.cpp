/*Este es un proyecto individual de clase, para acceder a él si te gusta,
  te pediría que pidieras permisos para usar el código de la calculadora
  al siguiente correo: jeluchu@gmail.com
  Muchas gracias*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <complex.h>
#include <unistd.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"
#define PI "3.14159265"
//#define G "6,67*10

int main(){

    double op1, op2, Resultado, n, lado, area, perimetro, x, s, c, t, b, h, e, i, o, ladoa, ladob, diaM, diam;
    int Opcion, Opcion2, Opcion3, HorasTrabajdas;
    float numero, porcentajea, porcentajeb, PrecioHora, sueldo;
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];
    strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);


    printf("\n");
    system("toilet --gay -fpagga PASCALINA v0.8\n\n");
    printf("\n");
    sleep(2);
    printf(AMARILLO "Te damos la bienvenida ");
    printf(getenv("USER"));
    printf("\n" NORMAL);
    printf(VERDE "PASCALINA v0.8 ~ Versión 'ESTABLE'\n" NORMAL);
    printf(AZULETE "Iniciada el %s\n" NORMAL,output);
    printf("---------------------------------------------------------\n");
    printf("Bienvenido/a a 'Pascalina', la calculadora adivina\n");
    printf("En ella podrás realizar diversas operaciónes con dos números\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(AZUL "Introducir el primer número deseado: " NORMAL);
    scanf(" %lf", &op1);

    printf(AZUL "Introducir el segundo número deseado: " NORMAL);
    scanf(" %lf", &op2);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    fflush(stdin);

    printf(VERDE "\t¿Qué operación deseas realizar?\n" NORMAL);
    printf("\t  Pulsa 1 si deseas sumar\n"
           "\t  Pulsa 2 si deseas restar\n"
           "\t  Pulsa 3 si deseas multiplicar\n"
           "\t  Pulsa 4 si deseas dividir\n"
           "\t  Pulsa 5 si deseas realizar una Raíz\n"
           "\t  Pulsa 6 si deseas cambiar los valores\n"
           "\t  Pulsa 7 si deseas realizar porcentajes\n"
           "\t  Pulsa 8 si deseas realizar potencias\n"
           "\t  Pulsa 9 si deseas saber áreas y el perímetros\n"
           "\t  Pulsa 10 si deseas realizar funciones trigonométricas\n"
           "\t  Pulsa 11 si deseas realizar calcular tu sueldo\n"
           "\t  Pulsa 0 si deseas salir\n\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(AZUL "Escoge la opción deseada: " NORMAL);

do{
    scanf("%i", &Opcion);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    switch(Opcion) {
    case 0:
           /*printf(ROJO "¿Estás seguro de querer salir?" NORMAL);*/

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
        printf(VERDE "\t¿Qué tipo de raíz deseas?\n" NORMAL);
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
        printf(VERDE "\t¿Qué tipo de área y perímetro deseas?\n" NORMAL);
        printf("\t  Pulsa 1 si deseas el de un cuadrado\n"
               "\t  Pulsa 2 si deseas el de un triángulo\n"
               "\t  Pulsa 3 si deseas el de un rectángulo\n"
               "\t  Pulsa 4 si deseas el de un paralelogramo\n"
               "\t  Pulsa 5 si deseas el de un rombo\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion2);
        switch(Opcion2){
        case 1:
            printf("Introducir la longitud del lado: ");
            scanf(" %lf", &lado);
            area = lado*lado;
            perimetro = 4*lado;
            printf("El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n", area, perimetro);
        break;

        case 2:
            printf("Introducir la longitud de la base: ");
            scanf(" %lf", &b);
            printf("Introducir la longitud de la altura: ");
            scanf(" %lf", &h);
            printf("Introducir la longitud del lado 'a': ");
            scanf(" %lf", &e);
            printf("Introducir la longitud del lado 'b': ");
            scanf(" %lf", &i);
            printf("Introducir la longitud del lado 'c': ");
            scanf(" %lf", &o);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            area = b*h/2.0;
            perimetro = e+i+o;
            printf(AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        break;
        case 3:
            printf("Introducir la longitud del lado 'a': ");
            scanf(" %lf", &ladoa);
            printf("Introducir la longitud del lado 'b': ");
            scanf(" %lf", &ladob);
            area = ladoa*ladob;
            perimetro = 2*ladoa+2+ladob;
            printf(AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        break;
        case 4:
            printf("Introducir la longitud de la base: ");
            scanf(" %lf", &b);
            printf("Introducir la longitud de la altura: ");
            scanf(" %lf", &h);
            printf("Introducir la longitud del lado 'c': ");
            scanf(" %lf", &c);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            area = b*h;
            perimetro = 2*b+2*c;
            printf(AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        break;
        case 5:
            printf(AZUL "Introducir la longitud del 'Diametro mayor': " NORMAL);
            scanf(" %lf", &diaM);
            printf(AZUL "Introducir la longitud del 'Diametro menor': " NORMAL);
            scanf(" %lf", &diam);
            printf(AZUL "Introducir la longitud del 'lado': " NORMAL);
            scanf(" %lf", &lado);
            area = diaM*diam/2;
            perimetro = 4*lado;
            printf(AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
        break;
        }
    break;

    break;

    case 10:
        printf(VERDE "\t¿Qué tipo de raíz deseas?\n" NORMAL);
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
    case 11:
        PrecioHora, sueldo = 0;
        printf(AZUL "Introducir las horas trabajadas: " NORMAL);
        scanf(" %d", &HorasTrabajdas);
        printf(AZUL "Introducir el precio por hora: " NORMAL);
        scanf(" %f", &PrecioHora);
        sueldo = HorasTrabajdas*PrecioHora;
        printf(AMARILLO "El sueldo total del trabajador es: %.2f€\n" NORMAL, sueldo);
        break;
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break;
    /*case 12:
        printf(AZUL "Introducir la 'masa 1': " NORMAL);
        scanf(" %d", &HorasTrabajdas);
        printf(AZUL "Introducir la 'masa 2': " NORMAL);
        scanf(" %f", &PrecioHora);
        printf(AZUL "Introducir la 'distancia': " NORMAL);
        scanf(" %f", &PrecioHora);
        Fuerza = G*masa1*masa2/distancia^2 HorasTrabajdas*PrecioHora;
        printf(AMARILLO "El sueldo total del trabajador es: %.2f€\n" NORMAL, sueldo);
        break;
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break; */

    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
    }
    printf(NEGRITA "Para realizar otra operación, marque una opción: " NORMAL);
 }while(Opcion!=0);
 }
