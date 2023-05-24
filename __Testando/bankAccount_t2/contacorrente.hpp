#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP

#include "client.hpp"

class ContaCorrente
{
protected:
    Client *m_client;
    float m_balance;

public:
    ContaCorrente(Client *client, float balance=0) :
    m_client(client), m_balance(balance) {};

    virtual void Show();

    float GetBalance() { return m_balance; };
    void Depositar(float valor);
    void operator+=(float valor);

    virtual bool Saque(float valor);
    virtual bool operator-=(float valor);

    virtual bool Transferir(float valor, ContaCorrente &contaDestino);
    bool operator>>(ContaCorrente &contaDestino);
    bool operator<<(ContaCorrente &contaDestino);
};

#endif
