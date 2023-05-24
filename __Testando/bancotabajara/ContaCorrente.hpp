#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP

#include <iostream>
#include <sstream>

using namespace std;

class ContaCorrente
{
protected:
    float saldo;

public:
    ContaCorrente() : saldo(0.0) {};
    ContaCorrente(float s): saldo(s) {};
    virtual ~ContaCorrente() {};

    float Getsaldo()
    {
        return saldo;
    }
    void Setsaldo(float val)
    {
        saldo = val;
    }
    void depositar(float valor)
    {
        if (valor>0)
        {
            saldo+=valor;
        }
    }
    bool sacar (float valor)
    {
        if(valor<=saldo)
        {
            saldo-=valor;
            return true;
        }
        else
        {
            return false;
        }
    }
    string toString()
    {
        stringstream ss;
        ss << "\nSaldo -> ";
        ss << Getsaldo();
        return ss.str();
    }
    bool transferir ()
    {
        return true;
    }

};

#endif // CONTACORRENTE_HPP
