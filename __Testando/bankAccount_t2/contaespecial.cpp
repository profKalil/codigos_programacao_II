#include "contaespecial.hpp"

void ContaEspecial::Show()
{
    m_client->Show();
    cout << "Balance: " << m_balance << " Limit: " << m_limit << endl;
}

bool ContaEspecial::Saque(float valor)
{
    if(m_balance-valor+m_limit >= 0)
    {
        m_balance -= valor;
        return true;
    }
    else
        return false;
}

bool ContaEspecial::operator-=(float valor)
{
    return(Saque(valor));
};


bool ContaEspecial::Transferir(float valor, ContaCorrente &contaDestino)
{
    if(m_balance-valor+m_limit >= 0)
    {
        m_balance -= valor;
        contaDestino.Depositar(valor);
        return true;
    }
    else
        return false;
}

