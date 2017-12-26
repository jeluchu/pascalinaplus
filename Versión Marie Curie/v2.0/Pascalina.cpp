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

    int Opcion, Opcion2, Opcion3, Opcion4, Opcion5, Opcion6, Opcion7, Opcion8,
        Opcion9, Opcion10, HorasTrabajdas;

    float numero, porcentajea, porcentajeb, PrecioHora, sueldo, R,
          Base, base, alt;

    char alfabeto[] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    system("sl");

    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];
    strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);

    printf("\n");
    system("toilet --gay -fpagga PASCALINA\n\n");
    printf("\n");
    sleep(2);
    printf(AMARILLO "|     Te damos la bienvenida ");
    printf("%s", getenv("USER"));
    printf("\n" NORMAL);
    sleep(1);
    printf(VERDE "|     PASCALINA v2.0 · MARIE CURIE ~ Versión 'ESTABLE'\n" NORMAL);
    sleep(1);
    printf(AZULETE "|     Iniciada el %s\n" NORMAL,output);
    printf("+---------------------------------------------------------------------+\n");
    sleep(1);
    printf(
   NEGRITA "|     Pascalina, la calculadora adivina\n"
           "|     En ella podrás realizar diversas operaciones matemáticas\n"
           "|     conversiones de unidades, calcular tu propio sueldo y además\n"
           "|     podrás hasta saber un número en romano.\n" NORMAL);
    printf("+---------------------------------------------------------------------+\n\n");
    sleep(8);

do{

        printf(NORMAL "\n");
        system("clear");
        system("toilet -fpagga PASCALINA\n\n");
        system("toilet -fpagga CALCULADORA ADIVINA\n\n");
        printf("\n");
        printf(
        "+---------------------------------------------------------------------+\n"
        "|"      VERDE "\t\t¿Qué operación deseas realizar?" NORMAL     "\t\t\t      |\n"
        "+---------------------------------------------------------------------+\n"
        "|" NEGRITA "\t  Pulsa 1 " NORMAL "si deseas operaciones básicas" "\t\t\t      |\n"
        "|" NEGRITA "\t  Pulsa 2 " NORMAL "si deseas realizar una Raíz"   "\t\t\t      |\n"
        "|" NEGRITA "\t  Pulsa 3 " NORMAL "si deseas realizar porcentajes" "\t\t      |\n"
        "|" NEGRITA "\t  Pulsa 4 " NORMAL "si deseas realizar potencias" "\t\t\t      |\n"
        "|" NEGRITA "\t  Pulsa 5 " NORMAL "si deseas saber áreas y el perímetros" "\t\t      |\n"
        "|" NEGRITA "\t  Pulsa 6 " NORMAL "si deseas realizar funciones trigonométricas" "\t      |\n"
        "|" NEGRITA "\t  Pulsa 7 " NORMAL "si deseas acceder a la parte económica" "\t      |\n"
        "|" NEGRITA "\t  Pulsa 8 " NORMAL "si deseas realizar un logaritmo" "\t\t      |\n"
        "|" NEGRITA "\t  Pulsa 9 " NORMAL "si deseas realizar conversiones" "\t\t      |\n"
        "|" NEGRITA "\t  Pulsa 10 " NORMAL "si deseas saber más acerca de esta versión" "\t      |\n"
        "|" NEGRITA "\t  Pulsa 0 " NORMAL "si deseas salir" "\t\t\t\t      |\n"
        "+---------------------------------------------------------------------+\n");
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        scanf("%d", &Opcion);
        while(getchar()!='\n');
        printf("+---------------------------------------------------------------------+\n");

    if(Opcion >= 0 && Opcion <= 10 && Opcion != 'a'-'z'){
    switch(Opcion) {
    case 0:         
           printf("\n");
           printf(NEGRITA "|     Te agradecemos que hayas usado 'Pascalina'\n" NORMAL
                  NEGRITA "|     muchísimas gracias " VERDE);
           printf("%s",getenv("USER"));
           printf("\n" NORMAL);
           sleep(2);
           printf("\n");
           printf(NEGRITA "|     Esperamos que te haya sido de utilidad\n"
                  "|     ¡HASTA PRONTO!\n\n" NORMAL);
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
       NEGRITA "\t  Pulsa 4 " NORMAL "si deseas realizar una división\n"
       NEGRITA "\t  Pulsa 5 " NORMAL "si deseas saber el resto de una división entera\n"
       NEGRITA "\t  Pulsa 6 " NORMAL "si deseas saber la media entre varios números\n"
       NEGRITA "\t  Pulsa 7 " NORMAL "si deseas abrir el digitalizador de números\n"
       NEGRITA "\t  Pulsa 8 " NORMAL "si deseas hacer una suma de fracciones\n");
        printf("+---------------------------------------------------------------------+\n");
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion5);
        while(getchar()!='\n');
        printf("+---------------------------------------------------------------------+\n");
        switch(Opcion5) {
            case 1: /* SUMA */
             printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("+---------------------------------------------------------------------+\n");
             Resultado = op1+op2;
             printf(AMARILLO"\t  El resultado de la suma es: " NORMAL
                    NEGRITA "%.2f\n\n" NORMAL, Resultado);
            break;

            case 2: /* RESTA */
             printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("+---------------------------------------------------------------------+\n");
             Resultado = op1-op2;
             printf(AMARILLO "\t  El resultado de la resta es: " NORMAL
                    NEGRITA "%.2f\n\n" NORMAL, Resultado);
            break;

            case 3: /* MULTIPLICACIÓN */
             printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("+---------------------------------------------------------------------+\n");
             Resultado = op1*op2;
             printf(AMARILLO"\t  El resultado de la multiplicación es: " NORMAL
                    NEGRITA "%.3f\n\n" NORMAL, Resultado);
            break;

            case 4: /* DIVISIÓN */
             printf(AZULETE "\t  Introducir el primer número deseado: " NORMAL);
             scanf(" %lf", &op1);

             printf(AZULETE "\t  Introducir el segundo número deseado: " NORMAL);
             scanf(" %lf", &op2);
             printf("+---------------------------------------------------------------------+\n");
             Resultado = op1/op2;
             printf(AMARILLO"\t  El resultado de la división es: " NORMAL
                    NEGRITA "%.4f\n\n" NORMAL, Resultado);
            break;

            case 5: /* RESTO DIVISIÓN */
             int D,d,R;
             printf(AZULETE "\t  Introduce el dividendo: " NORMAL);
             scanf("%d",&D);
             printf(AZULETE "\t  Introduce el divisor: " NORMAL);
             scanf("%d",&d);
             printf("+---------------------------------------------------------------------+\n");
             R=D%d;
             printf(AMARILLO "\t  El resto de la division es: " NORMAL
                    NEGRITA "%d\n" NORMAL,R);
             break;

            case 6: /* MEDIA ARITMÉTICA */
             int V;
             float Media,n1,n2,n3;
             printf(AZUL "\t  Introduce el número de valores que habrá (min 2, máx 3): " NORMAL);
             scanf("%i",&V);
             while(getchar()!='\n');
             printf("+---------------------------------------------------------------------+\n");
             switch(V){
             case 2:
                 printf(AZULETE "\t  Introduce el primer número: " NORMAL);
                 scanf("%f",&n1);
                 printf(AZULETE "\t  Introduce el segundo número: " NORMAL);
                 scanf("%f",&n2);
                 printf("+---------------------------------------------------------------------+\n");
                 Media=(n1+n2)/2;
                 printf(AMARILLO "\t  La media aritmética es: " NORMAL
                        NEGRITA "%.2f\n" NORMAL,Media);
             break;

             case 3:
                 printf(AZULETE "\t  Introduce el primer número: ");
                 scanf("%f",&n1);
                 printf(AZULETE "\t  Introduce el segundo número: ");
                 scanf("%f",&n2);
                 printf(AZULETE "\t  Introduce el tercer número: ");
                 scanf("%f",&n3);
                 printf("+---------------------------------------------------------------------+\n");
                 Media=(n1+n2+n3)/3;
                 printf(AMARILLO "\t  La media aritmética es: " NORMAL
                         NEGRITA "%.2f\n" NORMAL,Media);
             break;
             default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
             }

          break;

          case 7: /* DIGITALIZADOR DE DÍGITOS */
            int A, B, C, X;
            printf(AZULETE "\t  Introduce el valor de 'A': " NORMAL);
            scanf(" %i", &A);
            printf(AZULETE "\t  Introduce el valor de B: " NORMAL);
            scanf ("%d", &B);
            printf (AZULETE "\t  Introduce el valor de 'C': " NORMAL);
            scanf ("%d", &C);
            printf("+---------------------------------------------------------------------+\n");
            X=A*100+B*10+C;
            printf(AMARILLO "\t  El valor digitalizado será " NORMAL NEGRITA "%i\n" NORMAL, X);
         break;

        case 8: /* SUMA DE DOS FRACCIONES */
            float dividendo1, dividendo2, divisor1, divisor2, resultado;
            printf (AZULETE "\t  Introduce el valor de dividendo 1: " NORMAL);
            scanf ("%f", &dividendo1);
            printf (AZULETE "\t  Introduce el valor de dividendo 2: " NORMAL);
            scanf ("%f", &dividendo2);
            printf (AZULETE "\t  Introduce el valor de divisor 1: " NORMAL);
            scanf ("%f", &divisor1);
            printf (AZULETE "\t  Introduce el valor de divisor 2: " NORMAL);
            scanf ("%f", &divisor2);
            resultado=(divisor1*dividendo2+divisor2*dividendo1)/dividendo2/dividendo1;
            printf (AMARILLO "\t  El resultado de la suma es " NORMAL NEGRITA "%g\n" NORMAL, resultado);
       break;
    default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
        }
    break;
    case 2: /*RAÍCES */
        printf(VERDE "\t¿Qué tipo de raíz deseas?\n" NORMAL);
        printf(
       NEGRITA "\t  Pulsa 1 " NORMAL "si deseas raíz cuadrada\n"
       NEGRITA "\t  Pulsa 2 " NORMAL "si deseas raíz cúbica\n");
        printf("+---------------------------------------------------------------------+\n");
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion2);
        while(getchar()!='\n');
        printf("+---------------------------------------------------------------------+\n");
        switch(Opcion2){
        case 1: /* RAÍZ CUADRADA */
           printf(AZULETE "\t  Introduce el número deseado: " NORMAL);
           scanf("%lf", &n);
           printf("+---------------------------------------------------------------------+\n");
           n = sqrt(n);
           printf(AMARILLO "\t  El resultado de la raíz cuadrada es: " NORMAL
                  NEGRITA  "%lf\n\n" NORMAL,n);
        break;

        case 2: /*RAÍZ CÚBICA */
            printf(AZULETE "Introduce el número deseado: " NORMAL);
            scanf("%lf", &n);
            printf("+---------------------------------------------------------------------+\n");
            n = cbrt(n);
            printf(AMARILLO "\t  El resultado de la raíz cúbica es: "
                   NEGRITA "%lf\n\n" NORMAL,n);
       break;

       default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);

        }
    break;

    case 3: /* PORCENTAJES */
        printf(AZULETE "\t  Introduce el primer número deseado: " NORMAL);
        scanf("\n%f", &numero);
        printf(AZULETE "\t  Introduce el número del porcentaje deseado: " NORMAL);
        scanf("\n%f", &porcentajea);
        printf("+---------------------------------------------------------------------+\n");
        porcentajeb = porcentajea /100;
        Resultado = numero*porcentajeb;
        printf(AMARILLO "\t  El %.2f por ciento de %.2f es: " NORMAL
               NEGRITA "%.2f\n\n" NORMAL, porcentajea, numero, Resultado);
    break;

    case 4: /* POTENCIAS */
        printf(AZULETE "\t  Introduce el primer número deseado: " NORMAL);
        scanf(" %lf", &op1);
        printf(AZULETE "\t  Introduce el número del exponente deseado: " NORMAL);
        scanf(" %lf", &op2);
        printf("+---------------------------------------------------------------------+\n");
        if(op2<0)
        printf(ROJO "\t  Solo se admitirán exponentes positivos\n\n" NORMAL);
        else
        {
            Resultado = pow(op1,op2);
            printf(AMARILLO "\t  El resultado de %f^%f es: " NORMAL
                   NEGRITA "%f\n\n" NORMAL, op1, op2, Resultado);
        }
        break;
    break;

    case 5: /* Funciones Matemáticas */
        printf(VERDE "\t¿Qué tipo de función deseas realizar?\n" NORMAL);
        printf(
        NEGRITA "\t  Pulsa 1 " NORMAL "si deseas el menu de áreas y perímetros\n"
        NEGRITA "\t  Pulsa 2 " NORMAL "si deseas pitágoras\n"
        NEGRITA "\t  Pulsa 3 " NORMAL "si deseas el de un rectángulo\n"
        NEGRITA "\t  Pulsa 4 " NORMAL "si deseas el de un paralelogramo\n"
        NEGRITA "\t  Pulsa 5 " NORMAL "si deseas el de un rombo\n"
        NEGRITA "\t  Pulsa 6 " NORMAL "si deseas calcular el lado de un rombo\n"
        NEGRITA "\t  Pulsa 7 " NORMAL "si deseas calcular las longitudes de una circunferencia\n"
        NEGRITA "\t  Pulsa 8 " NORMAL "si deseas el de un trapecio\n"
        NEGRITA "\t  Pulsa 9 " NORMAL "si deseas el de un cilindro\n");
        printf("+---------------------------------------------------------------------+\n");
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion2);
        while(getchar()!='\n');
        printf("+---------------------------------------------------------------------+\n");
        switch(Opcion2){
        case 1:
                printf(VERDE "\t¿Qué tipo de área y perímetro deseas?\n" NORMAL);
                printf(
                NEGRITA "\t  Pulsa 1 " NORMAL "si deseas el de un cuadrado\n"
                NEGRITA "\t  Pulsa 2 " NORMAL "si deseas el de un triángulo\n"
                NEGRITA "\t  Pulsa 3 " NORMAL "si deseas el de un rectángulo\n"
                NEGRITA "\t  Pulsa 4 " NORMAL "si deseas el de un paralelogramo\n"
                NEGRITA "\t  Pulsa 5 " NORMAL "si deseas el de un rombo\n"
                NEGRITA "\t  Pulsa 6 " NORMAL "si deseas calcular el lado de un rombo\n"
                NEGRITA "\t  Pulsa 7 " NORMAL "si deseas calcular las longitudes de una circunferencia\n"
                NEGRITA "\t  Pulsa 8 " NORMAL "si deseas el de un trapecio\n"
                NEGRITA "\t  Pulsa 9 " NORMAL "si deseas el de un cilindro\n");
                printf("+---------------------------------------------------------------------+\n");
                printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
                scanf("%i", &Opcion8);
                while(getchar()!='\n');
                printf("+---------------------------------------------------------------------+\n");
                switch(Opcion8){
                case 1: /* CUADRADO */
                    printf(AZULETE "\t  Introduce la longitud del lado: " NORMAL);
                    scanf(" %lf", &lado);
                    area = lado*lado;
                    printf("+---------------------------------------------------------------------+\n");
                    perimetro = 4*lado;
                    printf(
                  AMARILLO "\t  El resultado del área es: " NORMAL NEGRITA "%.2f\n" NORMAL
                  AMARILLO "\t  El resultado del perímetro es: " NORMAL NEGRITA "%.2f\n" NORMAL, area, perimetro);
                break;

                case 2: /* TRIÁNGULO */
                    printf(AZULETE "\t  Introduce la longitud de la base: " NORMAL);
                            scanf(" %lf", &b);
                    printf(AZULETE "\t  Introduce la longitud de la altura: " NORMAL);
                    scanf(" %lf", &h);
                    printf(AZULETE "\t  Introduce la longitud del lado 'a': " NORMAL);
                    scanf(" %lf", &e);
                    printf(AZULETE "\t  Introduce la longitud del lado 'b': " NORMAL);
                    scanf(" %lf", &i);
                    printf(AZULETE "\t  Introduce la longitud del lado 'c': " NORMAL);
                    scanf(" %lf", &o);
                    printf("+---------------------------------------------------------------------+\n");
                    area = b*h/2.0;
                    perimetro = e+i+o;
                    printf(AMARILLO "\t  El resultado del área es: " NORMAL NEGRITA "%.2f\n" NORMAL
                           AMARILLO "\t  El resultado del perímetro es: " NORMAL NEGRITA "%.2f\n" NORMAL, area, perimetro);
                break;

                case 3: /* RECTÁNGULO */
                    printf(AZULETE "\t  Introduce la longitud del lado 'a': " NORMAL);
                    scanf(" %lf", &ladoa);
                    printf(AZULETE "\t  Introduce la longitud del lado 'b': " NORMAL);
                    scanf(" %lf", &ladob);
                    printf("+---------------------------------------------------------------------+\n");
                    area = ladoa*ladob;
                    perimetro = 2*ladoa+2+ladob;
                    printf(AMARILLO "\t  El resultado del área es: " NORMAL NEGRITA "%.2f\n" NORMAL
                           AMARILLO "\t  El resultado del perímetro es: " NORMAL NEGRITA "%.2f\n" NORMAL, area, perimetro);
                break;

                case 4: /* PARALELOGRAMO */
                    printf(AZULETE "\t  Introduce la longitud de la base: " NORMAL);
                    scanf(" %lf", &b);
                    printf(AZULETE "\t  Introduce la longitud de la altura: " NORMAL);
                    scanf(" %lf", &h);
                    printf(AZULETE "\t  Introduce la longitud del lado 'c': " NORMAL);
                    scanf(" %lf", &c);
                    printf("+---------------------------------------------------------------------+\n");
                    area = b*h;
                    perimetro = 2*b+2*c;
                    printf(AMARILLO "\t  El resultado del área es: " NORMAL NEGRITA "%.2f\n" NORMAL
                           AMARILLO "\t  El resultado del perímetro es: " NORMAL NEGRITA "%.2f\n" NORMAL, area, perimetro);
                break;

                case 5: /* ROMBO */
                    printf(AZULETE "\t  Introduce la longitud del 'Diametro mayor': " NORMAL);
                    scanf(" %lf", &diaM);
                    printf(AZULETE "\t  Introduce la longitud del 'Diametro menor': " NORMAL);
                    scanf(" %lf", &diam);
                    printf(AZULETE "\t  Introduce la longitud del 'lado': " NORMAL);
                    scanf(" %lf", &lado);
                    printf("+---------------------------------------------------------------------+\n");
                    area = diaM*diam/2;
                    perimetro = 4*lado;
                    printf(AMARILLO "\t  El resultado del área es: " NORMAL NEGRITA "%.2f\n" NORMAL
                           AMARILLO "\t  El resultado del perímetro: %.2f\n" NORMAL, area, perimetro);
                break;

                case 6: /* LADO ROMBO */
                    printf(AZULETE "\t  Introduce la longitud del 'Diametro mayor': " NORMAL);
                    scanf(" %lf", &diaM);
                    printf(AZULETE "\t  Introduce la longitud del 'Diametro menor': " NORMAL);
                    scanf(" %lf", &diam);
                    printf("+---------------------------------------------------------------------+\n");
                    Resultado = pow(diaM/2,2)+pow(diam/2,2);
                    ladoR = sqrt(Resultado);
                    printf(AMARILLO "\t  El resultado del lado es: " NORMAL NEGRITA"%.2f\n" NORMAL, ladoR);
                break;

                case 7: /* LONG. CIRCUNFERENCIA */
                    printf(AZULETE "\t  Introduce el radio: " NORMAL);
                    scanf("%f",&R);
                    printf("+---------------------------------------------------------------------+\n");
                    Resultado=2*3.141592*R;
                    printf(AMARILLO "\t  El resultado es %f\n\n" NORMAL, Resultado);
                break;

                case 8: /* TRAPECIO */
                    printf(AZULETE "\t  Introduce la 'Base Mayor': " NORMAL);
                    scanf("%f",&Base);
                    printf(AZULETE "\t  Introduce la 'Base menor': " NORMAL);
                    scanf("%f",&base);
                    printf(AZULETE "\t  Introduce la 'Altura': " NORMAL);
                    scanf("%f",&alt);
                    printf("+---------------------------------------------------------------------+\n");
                    Resultado=((Base+base)*alt)/2;
                    printf(AMARILLO "\t  El area del trapecio es: " NORMAL NEGRITA "%.2f\n" NORMAL, Resultado);
                break;

                case 9: /* CILINDRO */
                    float a, diametrocentro, diametroextremos, longitudCIL, volumen;
                    printf (AZULETE "\t  Introduce el valor del diámetro en centro: " NORMAL);
                    scanf ("%f", &diametrocentro);
                    printf (AZULETE "\t  Introduce el valor del diámetro en los extremos: " NORMAL);
                    scanf ("%f", &diametroextremos);
                    printf (AZULETE "\t  Introduce el valor de la longitud del cilindro: " NORMAL);
                    scanf ("%f", &longitudCIL);
                    printf("+---------------------------------------------------------------------+\n");
                    a=diametroextremos/2+2/3*(diametrocentro/2-diametroextremos/2);
                    volumen=3.141592*longitudCIL*a*a;
                    printf (AMARILLO "\t  El resultado de la altura " NORMAL NEGRITA "%.2f\n" NORMAL, a);
                    printf (AMARILLO "\t  El resultado del volumen es " NORMAL NEGRITA "%.2f\n" NORMAL, volumen);
                break;
                    default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
                }
            break;
        case 2:
            printf(VERDE "\t¿Qué tipo de deseas?\n" NORMAL);
            printf(
            NEGRITA "\t  Pulsa 1 " NORMAL "a²=a²+b²\n"
            NEGRITA "\t  Pulsa 2 " NORMAL "c²=a²-b²\n");
            printf("+---------------------------------------------------------------------+\n");
            printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
            scanf("%i", &Opcion9);
            while(getchar()!='\n');
            printf("+---------------------------------------------------------------------+\n");
            switch(Opcion9){
            case 1:
                float cata, catb, hipo;

                printf (AZULETE "\t  Introduce el valor del cateto 'a': " NORMAL);
                scanf ("%f", &cata);
                printf (AZULETE "\t  Introduce el valor del cateto 'b': " NORMAL);
                scanf ("%f", &catb);
                printf("+---------------------------------------------------------------------+\n");
                hipo=sqrt(cata*cata+catb*catb);
                printf (AMARILLO "\t  El valor de la hipotenusa es " NORMAL  NEGRITA "%.2f\n" NORMAL, hipo);
            break;

            case 2:
                printf (AZULETE "\t  Introduce el valor de la de hipotenusa: " NORMAL);
                scanf (" %f", &hipo);
                printf (AZULETE "\t  Introduce el valor del cateto 'a': " NORMAL);
                scanf (" %f", &cata);
                printf("+---------------------------------------------------------------------+\n");
                catb=sqrt(hipo*hipo-(cata*cata));
                printf (AMARILLO "\t  El valor del cateto es " NORMAL  NEGRITA "%.2f\n" NORMAL, catb);
            break;
                default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
            }

        break;
        default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
    }
        break;
    break;

    case 6: /* TRIGONOMETRÍA */
        printf(VERDE "\t¿Qué tipo de razón trigonométrica deseas?\n" NORMAL);
        printf(
        NEGRITA "\t  Pulsa 1 " NORMAL "si deseas realizar el seno\n"
        NEGRITA "\t  Pulsa 2 " NORMAL "si deseas realizar el coseno\n"
        NEGRITA "\t  Pulsa 3 " NORMAL "si deseas realizar la tangente\n");
        printf("+---------------------------------------------------------------------+\n");
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion3);
        while(getchar()!='\n');
        printf("+---------------------------------------------------------------------+\n");
        switch(Opcion3){
        case 1: /* SENO */
            printf(AZULETE "\t  Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            printf("+---------------------------------------------------------------------+\n");
            s = sin(x*3.14159/180);
            printf(AMARILLO "\t  El resultado del seno es: " NORMAL NEGRITA "%lf\n\n" NORMAL,s);
        break;

        case 2: /* COSENO */
            printf(AZULETE "\t  Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            printf("+---------------------------------------------------------------------+\n");
            c = cos(x*3.14159/180);
            printf(AMARILLO "\t  El resultado del coseno es: " NORMAL NEGRITA "%lf\n\n" NORMAL,c);
        break;

        case 3: /* TANGENTE */
            printf(AZULETE "\t  Introducir el número deseado: " NORMAL);
            scanf(" %lf", &x);
            printf("+---------------------------------------------------------------------+\n");
            t = tan(x*3.14159/180);
            printf(AMARILLO "\t  El resultado de la tangente es: " NORMAL NEGRITA "%lf\n\n" NORMAL,t);
        break;

    default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
        }
    break;

    case 7: /* ECONOMÍA */
        printf(VERDE "\t¿Qué operación deseas realizar?\n" NORMAL);
        printf(
        NEGRITA "\t  Pulsa 1 " NORMAL "si deseas calcular tu sueldo por horas\n"
        NEGRITA "\t  Pulsa 2 " NORMAL "si deseas calcular el capital final de un interés simple\n"
        NEGRITA "\t  Pulsa 3 " NORMAL "si deseas calcular el precio de un objeto sin IVA\n"
        NEGRITA "\t  Pulsa 4 " NORMAL "si deseas calcular el precio de un objeto con IVA\n"
        NEGRITA "\t  Pulsa 5 " NORMAL "si deseas usar el contador de dinero\n"
        NEGRITA "\t  Pulsa 6 " NORMAL "si deseas hacer un desglose de una cifra en euros\n");
        printf("+---------------------------------------------------------------------+\n");
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion2);
        while(getchar()!='\n');
        printf("+---------------------------------------------------------------------+\n");
        switch(Opcion2){
        case 1: /* SUELDO POR HORAS */
            PrecioHora, sueldo = 0;
            printf(AZULETE "\t  Introducir las horas trabajadas: " NORMAL);
            scanf(" %d", &HorasTrabajdas);
            printf(AZULETE "\t  Introducir el precio por hora: " NORMAL);
            scanf(" %f", &PrecioHora);
            printf("+---------------------------------------------------------------------+\n");
            sueldo = HorasTrabajdas*PrecioHora;
            printf(AMARILLO "\t  El sueldo total del trabajador es: " NORMAL NEGRITA "%.2f€\n" NORMAL, sueldo);

        break;

        case 2: /* CAPITAL FINAL DE UN INTERÉS SIMPLE */
            float Interes,t,capital;
            printf(AZULETE "\t  Introduce el capital inicial: " NORMAL);
            scanf("%f",&capital);
            printf(AZULETE "\t  Introduce el intéres al que esta colocado: " NORMAL);
            scanf("%f",&Interes);
            printf(AZULETE "\t  Introduce el tiempo al que se deja el capital: " NORMAL);
            scanf("%f",&t);
            printf("+---------------------------------------------------------------------+\n");
            Resultado = capital+capital*(Interes/100)*t;
            printf(AMARILLO "El capital final es de " NORMAL NEGRITA "%.2f€\n" NORMAL, Resultado);
        break;

        case 3: /* SIN IVA */
            printf("¿De qué tipo de IVA se trata?\n");
            printf(
            NEGRITA "\t  Pulsa 1 " NORMAL "IVA superreducido del 4\n"
            NEGRITA "\t  Pulsa 2 " NORMAL "IVA superreducido del 10\n"
            NEGRITA "\t  Pulsa 3 " NORMAL "IVA general del 21\n");
            printf("+---------------------------------------------------------------------+\n");
            printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
            scanf("%i", &Opcion6);
            while(getchar()!='\n');
            printf("+---------------------------------------------------------------------+\n");
                switch(Opcion6){
                case 1: /*IVA SUPERREDUCIDO */
                    float X,IVA,Resultado;
                    printf(AZULETE "\t  Introduce el precio del producto con IVA: " NORMAL);
                    scanf("%f",&X);
                    printf("+---------------------------------------------------------------------+\n");
                    IVA=(4*X/100);
                    Resultado=X-IVA;
                    printf(AMARILLO "\t  El precio del objeto sin IVA superreducido es " NORMAL NEGRITA "%.2f€\n" NORMAL ,Resultado);
                break;

                case 2: /*IVA REDUCIDO */
                    printf(AZULETE "\t  Introduce el precio del producto con IVA: " NORMAL);
                    scanf("%f",&X);
                    printf("+---------------------------------------------------------------------+\n");
                    IVA=(10*X/100);
                    Resultado=X-IVA;
                    printf(AMARILLO "\t  El precio del objeto sin IVA reducido es " NORMAL NEGRITA "%.2f€\n" NORMAL ,Resultado);
                break;

                case 3: /*IVA GENERAL */
                    printf(AZULETE "\t  Introduce el precio del producto con IVA: " NORMAL);
                    scanf("%f",&X);
                    IVA=(21*X/100);
                    printf("+---------------------------------------------------------------------+\n");
                    Resultado=X-IVA;
                    printf(AMARILLO "\t  El precio del objeto sin IVA reducido es " NORMAL NEGRITA "%.2f€\n" NORMAL ,Resultado);
                break;
                default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
                }
        break;

        case 4: /* CON IVA */
            printf("¿De qué tipo de IVA se trata?\n");
            printf(
            NEGRITA "\t  Pulsa 1 " NORMAL "IVA superreducido del 4\n"
            NEGRITA "\t  Pulsa 2 " NORMAL "IVA superreducido del 10\n"
            NEGRITA "\t  Pulsa 3 " NORMAL "IVA general del 21\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
            scanf("%i", &Opcion6);
            while(getchar()!='\n');
            printf("+---------------------------------------------------------------------+\n");
                switch(Opcion6){
                case 1: /*IVA SUPERREDUCIDO */
                    float X,IVA,Resultado;
                    printf(AZULETE "\t  Introduce el precio del producto con IVA: " NORMAL);
                    scanf("%f",&X);
                    printf("+---------------------------------------------------------------------+\n");
                    IVA=(4*X/100);
                    Resultado=X+IVA;
                    printf(AMARILLO "\t  El precio del objeto sin IVA superreducido es " NORMAL NEGRITA "%.2f€\n" NORMAL ,Resultado);
                break;

                case 2: /*IVA REDUCIDO */
                    printf("\t  Introduce el precio del producto con IVA: ");
                    scanf("%f",&X);
                    printf("+---------------------------------------------------------------------+\n");
                    IVA=(10*X/100);
                    Resultado=X+IVA;
                    printf(AMARILLO "\t  El precio del objeto sin IVA reducido es " NORMAL NEGRITA "%.2f€\n" NORMAL ,Resultado);
                break;

                case 3: /*IVA GENERAL */
                    printf("\t  Introduce el precio del producto con IVA: ");
                    scanf("%f",&X);
                    printf("+---------------------------------------------------------------------+\n");
                    IVA=(21*X/100);
                    Resultado=X+IVA;
                    printf(AMARILLO "\t  El precio del objeto sin IVA reducido es " NORMAL NEGRITA "%.2f€\n" NORMAL ,Resultado);
                break;
                default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
                }
       break;

       case 5: /* CONTADOR DE DINERO */
          int billetes50, billetes20, billetes10, Total, billetes5;
          printf (AZULETE "\t  Introduce el valor de billetes de 50: " NORMAL);
          scanf ("%i", &billetes50);
          printf (AZULETE "\t  Introduce el valor de billetes de 20: " NORMAL);
          scanf ("%i", &billetes20);
          printf (AZULETE "\t  Introduce el valor de billetes de 10: " NORMAL);
          scanf ("%i", &billetes10);
          printf (AZULETE "\t  Introduce el valor de billetes de 5: " NORMAL);
          scanf ("%i", &billetes5);
          printf("+---------------------------------------------------------------------+\n");
          Total=billetes50*50+billetes20*20+billetes10*10+billetes5*5;
          printf (AMARILLO "\t  El total de dinero que tienes es " NORMAL  NEGRITA "%i" "€\n" NORMAL, Total);
       break;

       case 6: /* DESGLOSADOR DE DINERO */
          int monedasuno, monedasdos, billetes100, billetes200, billetes500, cantidadeuro;

          printf(AZULETE "\t  Introduce la cantidad de dinero en '€': " NORMAL);
          scanf("%i", &cantidadeuro);
          printf("+---------------------------------------------------------------------+\n");
          monedasuno=cantidadeuro;

          billetes500=(monedasuno-monedasuno%500)/500;
          monedasuno=monedasuno%500;

          billetes200=(monedasuno-monedasuno%200)/200;
          monedasuno=monedasuno%200;

          billetes100=(monedasuno-monedasuno%100)/100;
          monedasuno=monedasuno%100;

          billetes50=(monedasuno-monedasuno%50)/50;
          monedasuno=monedasuno%50;

          billetes20=(monedasuno-monedasuno%20)/20;
          monedasuno=monedasuno%20;

          billetes10=(monedasuno-monedasuno%10)/10;
          monedasuno=monedasuno%10;

          billetes5=(monedasuno-monedasuno%5)/5;
          monedasuno=monedasuno%5;

          monedasdos=(monedasuno-monedasuno%2)/2;
          monedasuno=monedasuno%2;

          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " billetes de 500\n" NORMAL , billetes500);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " billetes de 200\n" NORMAL , billetes200);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " billetes de 100\n" NORMAL, billetes100);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " billetes de 50\n" NORMAL , billetes50);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " billetes de 20\n" NORMAL , billetes20);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " billetes de 10\n" NORMAL , billetes10);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " billetes de 5\n" NORMAL , billetes5);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " monedas de 2\n" NORMAL , monedasdos);
          printf(NEGRITA "\t  Se compone de " NORMAL AMARILLO "%i" NORMAL NEGRITA " monedas de 1\n" NORMAL , monedasuno);

          sleep(10);
       break;

       default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
      }
    break;

    case 8: /* LOGARITMOS */
        printf(AZUL "Introducir el número que deseas saber: " NORMAL);
        scanf(" %lf", &z);
        printf("+---------------------------------------------------------------------+\n");
        Resultado = log10(z);
        printf(AMARILLO "El resultado del logaritmo neperiano es " NORMAL NEGRITA "%f\n\n" NORMAL, Resultado);
    break;

    case 9: /* FÍSICA Y CONVERSIONES */
        printf(VERDE "\t¿Qué operación deseas realizar?\n" NORMAL);
        printf(
        NEGRITA "\t  Pulsa 1 " NORMAL "si deseas calcular la F de atracción entre dos masas\n"
        NEGRITA "\t  Pulsa 2 " NORMAL "si deseas convertir los grados ºC a Fahrenheit\n"
        NEGRITA "\t  Pulsa 3 " NORMAL "si deseas convertir los gramos a kilogramos\n"
        NEGRITA "\t  Pulsa 4 " NORMAL "si deseas saber si un número es par o impar\n"
        NEGRITA "\t  Pulsa 5 " NORMAL "si deseas introducir un número y verlo en romano\n"
        NEGRITA "\t  Pulsa 6 " NORMAL "si deseas saber de entre tres números el mayor\n"
        NEGRITA "\t  Pulsa 7 " NORMAL "si deseas convertir una calificación en letra\n"
        NEGRITA "\t  Pulsa 8 " NORMAL "si deseas calcular cuánto tardas en recorrer KM\n"
        NEGRITA "\t  Pulsa 9 " NORMAL "si deseas saber si un número es primo o no\n");
        printf("+---------------------------------------------------------------------+\n");
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion10);
        while(getchar()!='\n');
        printf("+---------------------------------------------------------------------+\n");
        switch(Opcion10){
        case 1: /* CALCULAR FUERZA ENTRE DOS MASAS */
            float F, G, distancia, masa1, masa2;
            printf (AZULETE "\t  Introduce el valor de la distancia: " NORMAL);
            scanf ("%f", &distancia);
            printf (AZULETE "\t  Introduce el valor de la primera masa: " NORMAL);
            scanf ("%f", &masa1);
            printf (AZULETE "\t  Introduce el valor de la segunda masa: " NORMAL);
            scanf ("%f", &masa2);
            printf("+---------------------------------------------------------------------+\n");
            G=0.00000006673;
            F=G*masa1*masa2/distancia/distancia;
            printf (AMARILLO "\t  El valor de 'F'" NORMAL NEGRITA "%g\n" NORMAL, F);
            printf (AMARILLO "\t  El valor de 'G'" NORMAL NEGRITA "%g\n" NORMAL, G);
        break;

        case 2: /* CONVERSION DE ºC A FAHRENHEIT */
            float gradoscentigrados, gradosfahrenheit, kelvins;
            printf (AZULETE "\t  Introduce el valor de grados centígrados: " NORMAL);
            scanf ("%f", &gradoscentigrados);
            printf("+---------------------------------------------------------------------+\n");
            kelvins=gradoscentigrados+273.15;
            gradosfahrenheit=1.8*gradoscentigrados+32;
            printf (AMARILLO "\t  Valor de grados Fahrenheit" NORMAL NEGRITA "%g\n" NORMAL, gradosfahrenheit);
            printf (AMARILLO "\t  Valor de Kelvins" NORMAL NEGRITA "%g\n" NORMAL, kelvins);
        break;

        case 3: /* CONVERSIÓN DE GRAMOS A KILOGRAMOS */
            float gramos, kilogramos;
            printf (AZULETE "\t  Introduce la cantidad en gramos: " NORMAL);
            scanf ("%f", &gramos);
            printf("+---------------------------------------------------------------------+\n");
            kilogramos=gramos/1000;
            printf (AMARILLO "\t  La cantidad %.3f en Kilogramos es " NORMAL NEGRITA "%g\n" NORMAL, gramos, kilogramos);
        break;

        case 4: /* PAR O IMPAR */
            int numero;
            printf (AZULETE "\t  Introduce el número: " NORMAL);
            scanf ("%d", &numero);
            printf("+---------------------------------------------------------------------+\n");
            if(numero%2==0)
                printf (AMARILLO "\t  El número " NORMAL NEGRITA "%i es par\n" NORMAL,numero);
            else
                printf (AMARILLO "\t  El número " NORMAL NEGRITA "%i es impar\n" NORMAL, numero);
        break;

        case 5: /* NÚMEROS ROMANOS */
            int x;

            printf(AZULETE "\t  Introduzca un número: ");
            scanf(" %i", &x);
            printf("+---------------------------------------------------------------------+\n");
            if((x<1)||(x>9999))
                printf(ROJO "\t  Por favor, introduce números entre el 0 al 9999" NORMAL);

            else {
                if(x>=1000)  {printf(NEGRITA "\t  M"    NORMAL);       ;x=x-1000;}
                if(x>=900)   {printf(NEGRITA "\t  CM"   NORMAL);       ;x=x-900;}
                if(x>=500)   {printf(NEGRITA "\t  D"    NORMAL);       ;x=x-500;}
                if(x>=400)   {printf(NEGRITA "\t  CD"   NORMAL);       ;x=x-400;}
                if(x>=300)   {printf(NEGRITA "\t  C"    NORMAL);       ;x=x-100;}
                if(x>=200)   {printf(NEGRITA "\t  C"    NORMAL);       ;x=x-100;}
                if(x>=100)   {printf(NEGRITA "\t  C"    NORMAL);       ;x=x-100;}
                if(x>=90)    {printf(NEGRITA "\t  XC"   NORMAL);       ;x=x-90;}
                if(x>=50)    {printf(NEGRITA "\t  L"    NORMAL);       ;x=x-50;}
                if(x>=40)    {printf(NEGRITA "\t  XL"   NORMAL);       ;x=x-40;}
                if(x>=30)    {printf(NEGRITA "\t  X"    NORMAL);       ;x=x-10;}
                if(x>=20)    {printf(NEGRITA "\t  X"    NORMAL);       ;x=x-10;}
                if(x>=10)    {printf(NEGRITA "\t  X"    NORMAL);       ;x=x-10;}
                if(x>=9)     {printf(NEGRITA "\t  IX"   NORMAL);       ;x=x-9;}
                if(x>=5)     {printf(NEGRITA "\t  V"    NORMAL);       ;x=x-5;}
                if(x>=4)     {printf(NEGRITA "\t  IV"   NORMAL);       ;x=x-4;}
                if(x>=3)     {printf(NEGRITA "\t  III"  NORMAL);       ;x=x-3;}
                if(x>=2)     {printf(NEGRITA "\t  II"   NORMAL);       ;x=x-2;}
                if(x>=1)     {printf(NEGRITA "\t  I"    NORMAL);       ;x=x-1;}
            }
               printf("\n");
        break;

        case 6: /* MAYOR O MENOR */
            float a, b, c, mayor;

            printf (AZULETE "\t  Introduzca el valor de 'a': " NORMAL);
            scanf ("%f", &a);
            printf (AZULETE "\t  Introduzca el valor de 'b': " NORMAL);
            scanf ("%f", &b);
            printf (AZULETE "\t  Introduzca el valor de 'c': " NORMAL);
            scanf ("%f", &c);
            printf("+---------------------------------------------------------------------+\n");
            mayor=a;
            if(mayor<b)
                mayor=b;
            if(mayor<c)
                mayor=c;
            printf (AMARILLO "\t  El mayor es " NORMAL NEGRITA "%g\n" NORMAL, mayor);
        break;

        case 7: /* CONVIERTE TU CALIFICACIÓN EN LETRA */
            int calificacion;

            printf (AZULETE "\t  Introduzca el valor de calificacion: " NORMAL);
            scanf ("%i", &calificacion);
            printf("+---------------------------------------------------------------------+\n");
            if(calificacion==10)
                printf (NEGRITA "\t  Tu calificación es A\n" NORMAL);

            if(calificacion==9)
                printf (NEGRITA "\t  Tu calificación es B\n" NORMAL);

            if(calificacion==8)
                printf (NEGRITA "\t  Tu calificación es C\n" NORMAL);

            if(calificacion==7||calificacion==6)
                printf (NEGRITA "\t  Tu calificación es D\n" NORMAL);

            if(calificacion<=5)
                printf (NEGRITA "\t  Tu calificación es F\n" NORMAL);
        break;

        case 8: /* CALCULA EL TIEMPO EN MINUTOS DE UNA DISTANCIA EN KM Y VELOCIDAD KM/H */
            float distanciakm, tiempomin, velocidadkmh;

            printf (AZULETE "\t  Introduzca el valor de distancia a recorrer en km: " NORMAL);
            scanf ("%f", &distanciakm);
            printf (AZULETE "\t  Introduzca el valor de velocidad actual en km por h: " NORMAL);
            scanf ("%f", &velocidadkmh);
            printf("+---------------------------------------------------------------------+\n");
            tiempomin=distanciakm/velocidadkmh*60;
            printf (AMARILLO  "\t  Tardarás en recorrerlo " NORMAL NEGRITA "%g minutos\n" NORMAL, tiempomin);

        break;

        case 9: /* NÚMEROS PRIMOS */
           int num1,i,ab;

            ab=0;

            printf(AZULETE "\t  Introduce un número: " NORMAL);
            scanf("%d",&num1);
            printf("+---------------------------------------------------------------------+\n");

            for(i=1;i<=num1;i++)
            {
                if(num1%i==0)
                ab++;
            }

            if(ab==2){
               printf(AMARILLO "\t  El número " NORMAL NEGRITA "%i sí es primo\n\n" NORMAL, num1);
            }else
            {  printf(AMARILLO "\t  El número " NORMAL NEGRITA "%i no es primo\n\n" NORMAL, num1);}

        break;
        default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
        }
    break;

    case 10: /* INFORMACIÓN SOBRE LA VERSIÓN */
           printf(
        "+---------------------------------------------------------------------+\n"
        "|"      VERDE "\t\tPASCALINA v2.0 · MARIE CURIE" NORMAL     "\t\t\t      |\n"
        "|"          AZULETE "\t\t     ¿Qué deseas saber?" NORMAL "\t\t\t\t      |\n"
        "+---------------------------------------------------------------------+\n");
            printf(
            "|" NEGRITA "\t  Pulsa 1 " NORMAL "si deseas saber más acerca de Marie Curie" "\t      |\n"
            "|" NEGRITA "\t  Pulsa 2 " NORMAL "si deseas saber el porqué de esta versión" "\t      |\n"
            "|" NEGRITA "\t  Pulsa 3 " NORMAL "si deseas contactar con el soporte" "\t\t      |\n"
            "+---------------------------------------------------------------------+\n");
            printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
            scanf("%i", &Opcion7);
            while(getchar()!='\n');
            printf("+---------------------------------------------------------------------+\n");
            switch(Opcion7){
                case 1: /* SOBRE MARIE CURIE */
                           printf("\n");
                           printf(NEGRITA "|     MARIE CURIE\n\n" NORMAL
                           "|       Nació el 7 de noviembre de 1867 en Varsovia (Polonia)\n"
                           "|       En 1891 partió hacia París, donde cambió su nombre por Marie.\n"
                           "|       En 1894 conoció a Pierre Curie. En ese momento, los dos trabajaban\n"
                           "|       en el campo del magnetismo.\n\n"
                           "|       Marie Curie estaba interesada en los recientes descubrimientos de \n"
                           "|       los nuevos tipos de radiación.\n"
                           "|       Su marido acabó su trabajo sobre el magnetismo para unirse a\n"
                           "|       la investigación de su esposa, y en 1898 el matrimonio anunció\n"
                           "|       el descubrimiento de dos nuevos elementos: el polonio\n"
                           "|       (Marie le dio ese nombre en honor de su país de nacimiento) y el radio.\n\n"
                           "|       En 1903 les concedieron el Premio Nobel de Física por el descubrimiento de\n"
                           "|       los elementos radiactivos, que compartieron con Becquerel.\n"
                           "|       Marie Curie se convirtió en la primera mujer que recibía este premio.\n"
                           "|       Este mismo año la otorgaron un segundo Nobel, el de Química, por sus\n"
                           "|       investigaciones sobre el radio y sus compuestos. Fue nombrada directora\n"
                           "|       del Instituto de Radio de París en 1914 y se fundó el Instituto Curie.\n"
                           "|       Marie Curie sufrió una anemia perniciosa causada por las largas exposiciones\n"
                           "|       a la radiación. Tras quedar ciega, falleció el 4 de julio de 1934 en la Clínica\n"
                           "|       Sancellemoz, cerca de Passy, Alta Saboya, Francia. Fue enterrada junto a su marido\n"
                           "|       en el cementerio de Sceaux, pocos kilómetros al sur de París.\n ");
                           sleep(60);
                break;

                case 2: /* EL PROQUÉ DE ESTA VERSIÓN */
                           printf(NEGRITA "|     EL PORQUÉ DE ESTE NOMBRE\n\n" NORMAL
                           "|       El nomre de esta versión es debido a que en 2º BACHILLERATO, Leticia Cabezas,\n"
                           "|       una profesora del IES MIGUEL DELIBES, centro donde estudié, realizó junto a otros\n"
                           "|       profesores y profesoras de España, un #MarieCurioseando, para hacer difusión\n"
                           "|       científica acerca de Marie Curie.\n\n"
                           "|       Ese día en el que estuvimos tuiteando con ese hastag, con la intención de que\n"
                           "|       llegase a la lista de 'Trending Topic', y con mucho esfuerzo de toda la gente,\n"
                           "|       tanto profesor@s y alumn@s, conseguimos que llegase a un buen puesto de la lista.\n");
                           sleep(10);

                break;

                case 3: /* CONTACTO */
                    printf(NEGRITA "|     CONTACTO\n\n" NORMAL
                           "|       Si tienes alguna consulta o cualquier tipo de sugerencia\n"
                           "|       no dudes en ponerte en contacto con el programador\n"
                           "|       para ello, puedes mandarme un e-mail a la sigueinte\n"
                           "|       dirección: jeluchu@gmail.com\n");
                    sleep(5);
                break;
                default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
                }
    break;

    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);

    }
}else printf(ROJO "\t  ¡Error! No es una de las opciones permitidas\n" NORMAL);

    sleep(10);

 }while(Opcion!=0);

}
