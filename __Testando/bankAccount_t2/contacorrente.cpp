#include "contacorrente.hpp"

void ContaCorrente::Show()
{
    m_client->Show();
    cout << "Balance: " << m_balance << endl;
}

void ContaCorrente::Depositar(float valor)
{
    m_balance += valor;
}

void ContaCorrente::operator+=(float valor)
{
    m_balance += valor;
    //Depositar(valor);
}

bool ContaCorrente::Saque(float valor)
{
    if(m_balance-valor >= 0)
    {
        m_balance -= valor;
        return true;
    }
    else
        return false;
}

bool ContaCorrente::operator-=(float valor)
{
    return(Saque(valor));
};


bool ContaCorrente::Transferir(float valor, ContaCorrente &contaDestino)
{
    if(m_balance-valor >= 0)
    {
        m_balance -= valor;
        contaDestino.Depositar(valor);
        return true;
    }
    else
        return false;
}

bool ContaCorrente::operator>>(ContaCorrente &contaDestino)
{
    contaDestino.Depositar(m_balance);
    m_balance = 0;

    return true;
}

bool ContaCorrente::operator<<(ContaCorrente &contaDestino)
{
    float balanceDest = contaDestino.GetBalance();
    if(balanceDest == 0) return false;

    contaDestino.Saque(balanceDest);

    //Deposito(balanceDest);
    m_balance += balanceDest;
    return true;
}
