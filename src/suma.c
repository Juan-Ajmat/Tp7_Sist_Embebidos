#include "suma.h"
:

int resultado;
int suma;
int operando;

suma= *acumulado + operando;

if ((*acumulado>0 )) && (operando>0) && (suma<0){
    *acumulado = 0x7FFFFFFF;
    resultado = 1;
} else if ((*acumulado<0) && (operando<0) && (suma>0)){
    *acumulado = 0x80000000;
    resultado=0; //deberia ser -1
}else {
    *acumulado = suma;
    resultado=0;
}
return resultado;
