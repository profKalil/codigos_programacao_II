#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<pair<char, char> > CriarTabela(int desloc);

string Encriptar(string text, vector<pair<char, char> > table);
string Decriptar(string text, vector<pair<char, char> > table);

int main()
{
    string text = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    vector<pair<char, char> > TabelaConversao;
    TabelaConversao = CriarTabela(15);

    for(size_t i=0; i<TabelaConversao.size(); i++)
    {
        cout << "Origem: " << TabelaConversao.at(i).first << " -> " << "Destino: " << TabelaConversao.at(i).second << endl;
    }

    //ENCRIPTAR
    string TextEncriptado;
    TextEncriptado = Encriptar(text, TabelaConversao);
    cout << "Texto Original: " << text << endl << endl;
    cout << "Texto Encriptado: " << TextEncriptado << endl << endl;
    string TextDecriptado = Decriptar(TextEncriptado, TabelaConversao);
    cout << "Texto Decriptado: " << TextDecriptado << endl;

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

string Encriptar(string text, vector<pair<char, char> > table)
{
    string result;
    for(size_t i=0; i< text.size(); i++)
    {
        char ch = text.at(i);

        result += table.at(ch).second;
    }
    return result;
}

string Decriptar(string text, vector<pair<char, char> > table)
{
    string result;
    for(size_t i=0; i< text.size(); i++)
    {
        char ch = text.at(i);
        for(size_t j=0; j<table.size(); j++)
        {
            if(ch == table.at(j).second)
            {
                result += table.at(j).first;
            }
        }
    }
    return result;
}

