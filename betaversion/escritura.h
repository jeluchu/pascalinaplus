
#ifndef __ESCRITURA_H__
#define __ESCRITURA_H__

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"

#include "opbasic.h"

#ifdef __cplusplus
extern "C" {
#endif
void crear_archivo();
void res_sumas(double op1, double op2, double Resultado);
void res_restas(double op1, double op2, double Resultado);
void res_multiplicaciones(double op1, double op2, double resultado);
void res_divisiones(double dividendo, double divisor, double resto);
void res_resto_divisiones(double dividendo, double divisor, double resto);
//void instrucciones();
#ifdef __cplusplus
}
#endif

#endif
