
class temps {
unsigned int h;
unsigned int mn;
unsigned int s;
// methodes
public:
void set( unsigned int hh, unsigned int mnmn, unsigned int ss );
// convertir en secondes
unsigned int get_sec();
// convertir en minutes
unsigned int get_mn() { return mn + 60 * h; };
// normaliser : ramener s et mn dans l'intervalle [0,59]
void normalize();
// additionner un autre temps
void add( temps * ta );
};
