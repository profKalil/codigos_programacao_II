#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<pair<char, char> > CriarTabela(int desloc);

int main()
{
    string text = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    vector<pair<char, char> > TabelaConversao;
    TabelaConversao = CriarTabela(2);

    for(size_t i=0; i<TabelaConversao.size(); i++)
    {
        cout << "Origem: " << TabelaConversao.at(i).first << " -> " << "Destino: " << TabelaConversao.at(i).second << endl;
    }

    //ENCRIPTAR

    return 0;
}

vector<pair<char, char> > CriarTabela(int desloc)
{
    vector<pair<char, char> > tabela(256);
    for(size_t i=0; i<tabela.size(); i++)
    {
        tabela.at(i).first = i;
        tabela.at(i).second = i + desloc;
    }
    return tabela;
}

