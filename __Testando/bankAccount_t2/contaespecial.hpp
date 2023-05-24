#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include "client.hpp"
#include "contacorrente.hpp"

class ContaEspecial : public ContaCorrente
{
protected:
    float m_limit;

public:
    ContaEspecial(Client *client, float balance=0, float limit=1000) : ContaCorrente(client, balance), m_limit(limit) {}


    void Show();

    bool Saque(float valor);
    bool operator-=(float valor);

    bool Transferir(float valor, ContaCorrente &contaDestino);


};

#endif
