#include "contacorrente.hpp"

int main()
{
    //Client c1;
    Client c2("Antonio Carlos", "Rua Uruguai", "Empresario", 25000);
    //Client c3("Pedro da Silva","","",0);
    Client c3("Pedro da Silva");
    Client c4("Maria de Oliveira", "Rua das Camelias");
    Client *c5 = new Client("Jonas", "Rua X");

    ContaCorrente conta1(&c2, 10000);
    ContaCorrente conta2(&c3, 20000);
    ContaCorrente conta3(&c2, 50000);
    ContaCorrente conta4(&c4, 50000);
    ContaCorrente conta5(c5, 1000000);

    //depositar
    //sacar
    //transferir

    conta1.Show();
    conta2.Show();
    conta3.Show();
    conta4.Show();
    conta5.Show();

    //mostrar o cliente e o saldo

    delete c5;

    return 0;
};
