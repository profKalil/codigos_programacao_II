#include "Cliente.hpp"

using namespace std;

int main()
{
    ContaCorrente cc(1000);
    Cliente cliente("Jose", cc);
    cout<<cliente.toString();
    cout<<cliente.conta.at(0).toString();

    return 0;
}
