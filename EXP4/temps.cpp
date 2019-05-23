#include "temps.h"

void temps::set( unsigned int hh, unsigned int mnmn, unsigned int ss )
{
h = hh; mn = mnmn; s = ss;
}

// convertir en secondes
unsigned int temps::get_sec()
{
return s + 60 * get_mn();
}

// normaliser : ramener s et mn dans l'intervalle [0,59]
void temps::normalize()
{
mn += s / 60;
s = s % 60;
h += mn / 60;
mn = mn % 60;
} 

// additionner un autre temps
void temps::add( temps * ta )
{
h += ta->h;
mn += ta->mn;
s += ta->s;
normalize();
}
