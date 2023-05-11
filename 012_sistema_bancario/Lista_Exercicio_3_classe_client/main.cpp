#include "client.hpp"

int main()
{
    //Client c1;

    Client c2("Antonio Carlos", "Rua Uruguai", "Empresario", 25000);

    //Client c3("Pedro da Silva","","",0);
    Client c3("Pedro da Silva");

    Client c4("Maria de Oliveira", "Rua das Camelias");


    c2.Show();
    c3.Show();
    c4.Show();

    return 0;
};
