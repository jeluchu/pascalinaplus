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

    double op1, op2, Resultado, n, lado, area, perimetro,
           x, s, c, t, b, h, e, i, o, z, at, ladoa, ladob, diaM, diam, ladoR,
           basM, basm, altura, bases;
    int Opcion, Opcion2, Opcion3, Opcion4, Opcion5, HorasTrabajdas;
    float numero, porcentajea, porcentajeb, PrecioHora, sueldo;
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];
    strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);


    printf("\n");
    system("toilet --gay -fpagga PASCALINA\n\n");
    printf("\n");
    sleep(2);
    printf(AMARILLO "Te damos la bienvenida ");
    printf(getenv("USER"));
    printf("\n" NORMAL);
    printf(
      VERDE "PASCALINA v1.0 · Blaise Pascal ~ Versión 'ESTABLE'\n" NORMAL
    AZULETE "Iniciada el %s\n" NORMAL,output);
    printf("---------------------------------------------------------\n");
    printf(
   NEGRITA "'Pascalina', la calculadora adivina\n"
           "En ella podrás realizar diversas operaciones matemáticas\n" NORMAL);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    sleep(5);

do{
        system("clear");
        system("toilet -fpagga PASCALINA\n\n");
        system("toilet -fpagga CALCULADORA ADIVINA\n\n");
        printf("\n");
        printf(
         VERDE "\t¿Qué operación deseas realizar?\n" NORMAL
       NEGRITA "\t  Pulsa 1 " NORMAL "si deseas operaciones básicas\n"
       NEGRITA "\t  Pulsa 2 " NORMAL "si deseas realizar una Raíz\n"
       NEGRITA "\t  Pulsa 3 " NORMAL "si deseas realizar porcentajes\n"
       NEGRITA "\t  Pulsa 4 " NORMAL "si deseas realizar potencias\n"
       NEGRITA "\t  Pulsa 5 " NORMAL "si deseas saber áreas y el perímetros\n"
       NEGRITA "\t  Pulsa 6 " NORMAL "si deseas realizar funciones trigonométricas\n"
       NEGRITA "\t  Pulsa 7 " NORMAL "si deseas realizar calcular tu sueldo\n"
       NEGRITA "\t  Pulsa 8 " NORMAL "si deseas realizar un logaritmo\n"
       NEGRITA "\t  Pulsa 0 " NORMAL "si deseas salir\n\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    switch(Opcion) {
    case 0:         
           printf(NEGRITA "Te agradecemos que hayas usado 'Pascalina', muchísimas gracias "
                  VERDE);
           printf(getenv("USER"));
           printf("\n" NORMAL);
           sleep(2);
           printf("\n");
           printf(NEGRITA "Esperamos que te haya sido de utilidad\n"
                  "¡HASTA PRONTO!\n\n" NORMAL);
           sleep(2);
           system("toilet --gay -fpagga JÉLUCHU\n\n");
           printf("\n");
           return EXIT_SUCCESS;
    break;
    case 1: /* OPERACIONES BÁSICAS */
        printf(
         VERDE "\t¿Qué operación deseas realizar?\n" NORMAL
       NEGRITA "\t  Pulsa 1 " NORMAL "si deseas realizar una suma\n"
       NEGRITA "\t  Pulsa 2 " NORMAL "si deseas realizar una resta\n"
       NEGRITA "\t  Pulsa 3 " NORMAL "si deseas realizar una multiplicación\n"
       NEGRITA "\t  Pulsa 4 " NORMAL "si deseas realizar una división\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion5);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        switch(Opcion5) {
            case 1: /* SUMA */
             printf(AZUL "Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZUL "Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
             Resultado = op1+op2;
             printf(AMARILLO"El resultado de la suma es: " NORMAL
                    NEGRITA "%.2f\n\n" NORMAL, Resultado);
            break;

            case 2: /* RESTA */
             printf(AZUL "Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZUL "Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
             Resultado = op1-op2;
             printf(AMARILLO "El resultado de la resta es: " NORMAL
                    NEGRITA "%.2f\n\n" NORMAL, Resultado);
            break;

            case 3: /* MULTIPLICACIÓN */
             printf(AZUL "Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZUL "Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
             Resultado = op1*op2;
             printf(AMARILLO"El resultado de la multiplicación es: " NORMAL
                    NEGRITA "%.3f\n\n" NORMAL, Resultado);
            break;

            case 4: /* DIVISIÓN */
             printf(AZUL "Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZUL "Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
             Resultado = op1/op2;
             printf(AMARILLO"El resultado de la división es: " NORMAL
                    NEGRITA "%.4f\n\n" NORMAL, Resultado);
    break;
    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
        }
    break;
    case 2: /*RAÍCES */
        printf(VERDE "\t¿Qué tipo de raíz deseas?\n" NORMAL);
        printf(
       NEGRITA "\t  Pulsa 1 " NORMAL "si deseas raíz cuadrada\n"
       NEGRITA "\t  Pulsa 2 " NORMAL "si deseas raíz cúbica\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion2);
        switch(Opcion2){
        case 1: /* RAÍZ CUADRADA */
           printf(AZUL "Introducir el número deseado: " NORMAL);
           scanf("%lf", &n);
           n = sqrt(n);
           printf(AMARILLO "El resultado de la raíz cuadrada es: " NORMAL
                  NEGRITA  "%lf\n\n" NORMAL,n);
        break;

        case 2: /*RAÍZ CÚBICA */
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf("%lf", &n);
            n = cbrt(n);
            printf(AMARILLO "El resultado de la raíz cúbica es: %lf\n\n" NORMAL,n);
       break;

       default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);

        }
    break;

    case 3: /* PORCENTAJES */
        printf(AZUL "Introducir el primer número deseado: " NORMAL);
        scanf("\n%f", &numero);
        printf(AZUL "Introducir el número del porcentaje deseado: " NORMAL);
        scanf("\n%f", &porcentajea);
        porcentajeb = porcentajea /100;
        Resultado = numero*porcentajeb;
        printf(AMARILLO "\n El %.2f por ciento de %.2f es %.2f\n\n" NORMAL, porcentajea, numero, Resultado);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    break;

    case 4: /* POTENCIAS */
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

    case 5: /* ÁREAS Y PERÍMETROS */
        printf(VERDE "\t¿Qué tipo de área y perímetro deseas?\n" NORMAL);
        printf(
        NEGRITA "\t  Pulsa 1" NORMAL "si deseas el de un cuadrado\n"
        NEGRITA "\t  Pulsa 2" NORMAL "si deseas el de un triángulo\n"
        NEGRITA "\t  Pulsa 3" NORMAL "si deseas el de un rectángulo\n"
        NEGRITA "\t  Pulsa 4" NORMAL "si deseas el de un paralelogramo\n"
        NEGRITA "\t  Pulsa 5" NORMAL "si deseas el de un rombo\n"
        NEGRITA "\t  Pulsa 6" NORMAL "si deseas calcular el lado de un rombo\n"            );
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion2);
        switch(Opcion2){
        case 1: /* CUADRADO */
            printf(AZUL "Introducir la longitud del lado: " NORMAL);
            scanf(" %lf", &lado);
            area = lado*lado;
            perimetro = 4*lado;
            printf(
          AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
        break;

        case 2: /* TRIÁNGULO */
            printf(AZUL "Introducir la longitud de la base: " NORMAL);
            scanf(" %lf", &b);
            printf(AZUL "Introducir la longitud de la altura: " NORMAL);
            scanf(" %lf", &h);
            printf(AZUL "Introducir la longitud del lado 'a': " NORMAL);
            scanf(" %lf", &e);
            printf(AZUL "Introducir la longitud del lado 'b': " NORMAL);
            scanf(" %lf", &i);
            printf(AZUL "Introducir la longitud del lado 'c': " NORMAL);
            scanf(" %lf", &o);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            area = b*h/2.0;
            perimetro = e+i+o;
            printf(AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        break;

        case 3: /* RECTÁNGULO */
            printf(AZUL "Introducir la longitud del lado 'a': " NORMAL);
            scanf(" %lf", &ladoa);
            printf(AZUL "Introducir la longitud del lado 'b': " NORMAL);
            scanf(" %lf", &ladob);
            area = ladoa*ladob;
            perimetro = 2*ladoa+2+ladob;
            printf(AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        break;

        case 4: /* PARALELOGRAMO */
            printf(AZUL "Introducir la longitud de la base: " NORMAL);
            scanf(" %lf", &b);
            printf(AZUL "Introducir la longitud de la altura: " NORMAL);
            scanf(" %lf", &h);
            printf(AZUL "Introducir la longitud del lado 'c': " NORMAL);
            scanf(" %lf", &c);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            area = b*h;
            perimetro = 2*b+2*c;
            printf(AMARILLO "El resultado del área es: %.2f\n"
                   "El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        break;

        case 5: /* ROMBO */
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

        case 6: /* LADO ROMBO */
            printf(AZUL "Introducir la longitud del 'Diametro mayor': " NORMAL);
            scanf(" %lf", &diaM);
            printf(AZUL "Introducir la longitud del 'Diametro menor': " NORMAL);
            scanf(" %lf", &diam);
            Resultado = pow(diaM/2,2)+pow(diam/2,2);
            ladoR = sqrt(Resultado);
            printf(AMARILLO "El resultado del lado es: %.2f\n" NORMAL, ladoR);
        break;

        case 7: /* TRAPECIO */
            printf(AZUL "Introducir la longitud de la 'Base mayor': " NORMAL);
            scanf(" %lf", &basM);
            printf(AZUL "Introducir la longitud de la 'Base menor': " NORMAL);
            scanf(" %lf", &basm);
            printf(AZUL "Introducir la altura: " NORMAL);
            scanf(" %lf", &altura);
            bases = (basM+basm/2);
            area = bases*altura;
            printf(AMARILLO "El resultado del área es: %.2f\n" NORMAL, area);
        break;
            default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
        }
    break;

    break;

    case 6: /* TRIGONOMETRÍA */
        printf(VERDE "\t¿Qué tipo de razón trigonométrica deseas?\n" NORMAL);
        printf(
        NEGRITA "\t  Pulsa 1 " NORMAL "si deseas realizar el seno\n"
        NEGRITA "\t  Pulsa 2 " NORMAL "si deseas realizar el coseno\n"
        NEGRITA "\t  Pulsa 3 " NORMAL "si deseas realizar la tangente\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion3);
        switch(Opcion3){
        case 1: /* SENO */
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            s = sin(x*3.14159/180);
            printf(AMARILLO "El resultado del seno es: %lf\n\n" NORMAL,s);
        break;

        case 2: /* COSENO */
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            c = cos(x*3.14159/180);
            printf(AMARILLO "El resultado del coseno es: %lf\n\n" NORMAL,c);
        break;

        case 3: /* TANGENTE */
            printf(AZUL "Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            t = tan(x*3.14159/180);
            printf(AMARILLO "El resultado de la tangente es: %lf\n\n" NORMAL,t);
        break;

    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
        }
    break;

    case 7: /* CALCULA TU SUELDO */
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

    case 8:
            printf(AZUL"Introducir el número que deseas saber: " NORMAL);
            scanf(" %lf", &z);
            Resultado = log10(z);
            printf(AMARILLO "El resultado del logaritmo neperiano es %f\n\n" NORMAL, Resultado);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    break;

    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
}
    sleep(5);
    }while(Opcion!=0);

 }
