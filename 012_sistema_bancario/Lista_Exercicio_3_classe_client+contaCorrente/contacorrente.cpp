#include "contacorrente.hpp"

void ContaCorrente::Show()
{
    m_client->Show();
    cout << "Balance: " << m_balance << endl;
}

