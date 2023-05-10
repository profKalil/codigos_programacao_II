#include "IngressoVIP.h"

int main()
{
    cout << "Bem-vindo ao cineUFSC" << endl;
    Ingresso i(50);
    cout << i.toString()<<endl;

    Ingresso i2;
    i2.setValor(50);
    cout << i2.toString() << endl;

     
    IngressoVIP v(50);
    cout<< v.toString()<<endl;

    IngressoVIP v1(50, 25);
    cout << v.toString() << endl;

    IngressoVIP v2;
    v2.setValor(50);
    cout << v2.toString() << endl;
}