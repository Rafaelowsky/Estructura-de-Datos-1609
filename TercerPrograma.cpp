/* Devuelve el tamaño en bits de los tipos de datos
20 AGO 24
CCS */

#include <iostream>

using namespace std;
int main()

{
    int i,f,d,c,b;
    i = sizeof( int );
    f = sizeof( float );
    d = sizeof( double );
    c = sizeof( char );
    b = sizeof( bool );
    

    cout <<"Tamaño (en bits) del tipo int = ";
    cout << i<<endl ;
    cout <<"Tamaño (en bits) del tipo float = ";
    cout << f<<endl ;
    cout <<"Tamaño (en bits) del tipo double = ";
    cout << d<<endl ;
    cout <<"Tamaño (en bits) del tipo char = ";
    cout << c<<endl ;
    cout <<"Tamaño (en bits) del tipo bool = ";
    cout << b<<endl ;

    /*endl nos ayuda para identar nuestra salida*/
    return 0;

}