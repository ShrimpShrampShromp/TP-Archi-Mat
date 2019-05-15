#include "io.h"

#ifdef STM32F103xB
#include "stm32f10x.h"
#else
#include <stdio.h>
#endif

void expose( int x ) {
#ifdef STM32F103xB
SysTick->LOAD = x;
#else
printf("%d=0x%08x\n", x, x );
#endif
}

int seed( int i ) {
return i+1;
}
