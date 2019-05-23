#include "io.h"
#include "temps.h"

temps ts[4];

int main() {
temps t0;
// donner des valeurs a un temps
ts[seed(1)].set( 2, 45, 30 );
// copie
t0 = ts[2];
// addition
ts[2].add( &t0 );
// gets
expose( ts[2].get_sec() );
return 0;
}
