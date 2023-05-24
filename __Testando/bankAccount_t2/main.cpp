#include "contacorrente.hpp"
#include "contaespecial.hpp"
#include <vector>

int main()
{
    //criar o seguinte menu:
    //1-New Client
    //2-Delete Client   //somente se este cliente nao estiver ativo em alguma conta
    //3-New Account
    //4-Transfer Account to another client
    //5-Delete Account
    //relatorios diversos

    //Client c1;
    vector<Client*> clientList;
    clientList.push_back(new Client("Antonio Carlos", "Rua Uruguai", "Empresario", 25000));
    clientList.push_back(new Client("Pedro da Silva"));
    clientList.push_back(new Client("Maria de Oliveira", "Rua das Camelias"));
    clientList.push_back(new Client("Jonas", "Rua X"));
    clientList.push_back(new Client("Jose Silva", "rua X", "Padeiro"));

    vector<ContaCorrente*> accountList;
    accountList.push_back(new ContaCorrente(clientList.at(1), 10000));
    accountList.push_back(new ContaCorrente(clientList.at(2), 20000));
    accountList.push_back(new ContaCorrente(clientList.at(1), 50000));
    accountList.push_back(new ContaCorrente(clientList.at(0), 50000));
    accountList.push_back(new ContaEspecial(clientList.at(1), 50000, 30000));
    accountList.push_back(new ContaEspecial(clientList.at(4)));

    //accountList.at(5).ChangeClient(clientList.at(3));

    for(size_t i=0; i< accountList.size(); i++)
    {
        accountList.at(i)->Show();
    }

    //1.Criar a classe conta Platinum




    //deletes
    //valgrind --leak-check=full ./out   -> instalar subsystem windows
    for(size_t i=0; i< clientList.size(); i++)
    {
        delete clientList.at(i);
    }
    clientList.clear();

    for(size_t i=0; i< accountList.size(); i++)
    {
        delete accountList.at(i);
    }
    accountList.clear();

    return 0;
};
