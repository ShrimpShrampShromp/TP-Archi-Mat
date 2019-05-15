#include "io.h"

#define BUFSIZE 9

int sub02( int * bb ) {
int i;
for	( i = 0; i < BUFSIZE; ++i )
	bb[i+1] += bb[i];
return bb[BUFSIZE-1];
}

int sub01( unsigned int aa ) {
int i;
int buf[BUFSIZE];
for	( i = 0; i < BUFSIZE; ++i )
	buf[i] = aa + i*i;
i = sub02( buf );
return i;
}

int main() {
expose( sub01( 0x1000 ) );
#ifdef STM32F103xB
while(1) {}
#else
return 0;
#endif
}
