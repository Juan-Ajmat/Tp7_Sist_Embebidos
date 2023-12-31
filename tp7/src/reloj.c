#include "reloj.h"
#include <string.h>

struct clock_s{
    uint8_t hora_actual[6];
    bool valida;
    
};
clock_t ClockCreate(int tics_por_segundo){
    static struct clock_s self[1];
    memset(self, 0, sizeof(self));
    return self;

}

bool ClockGetTime(clock_t reloj, uint8_t * hora, int size){
    memcpy (hora, reloj->hora_actual, size);
    return reloj->valida;
}


bool ClockSetTime(clock_t reloj, const uint8_t * hora, int size){
    memcpy (reloj->hora_actual, hora, size);
    reloj->valida = true;
    return true;
}