#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "ContaCorrente.hpp"
#include <vector>


class Cliente
{
private:
    string nome;

public:
    vector <ContaCorrente> conta;
    Cliente(): nome(""), conta(0) {};
    Cliente(string val, ContaCorrente c) : nome(val) {
        conta.push_back(c);
    };
    virtual ~Cliente() {};

    string Getnome()
    {
        return nome;
    }

    void Setnome(string val)
    {
        nome = val;
    }
    string toString()
    {
        stringstream ss;
        ss << "Nome -> ";
        ss << Getnome();
        return ss.str();
    }

};

#endif
