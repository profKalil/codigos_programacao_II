#include "IngressoVIP.h"

int main()
{
    cout << "Bem-vindo ao cineUFSC" << endl;
    Ingresso i;
    i.setValor(50);
    cout << i.toString()<<endl;
     
    IngressoVIP v;
    cout<< v.toString()<<endl;
}