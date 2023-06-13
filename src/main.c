#include <stdint.h>

int main(void){
    int suma;

    suma = 5;
    acumular (&suma, 3);
    printf("resultado: %d\r\n", suma);
}