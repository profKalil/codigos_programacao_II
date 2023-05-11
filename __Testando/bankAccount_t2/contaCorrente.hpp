#include "client.hpp"

class ContaCorrente {
protected:
  Client *m_client;
  float m_balance;
  float m_deposito=0;
  float m_saque=0;
public:
  ContaCorrente(Client *client, float balance) :   
      m_client(client), 
      m_balance(balance) {};
   float getDeposito() {
    return m_deposito;
  }
  void setDeposito (float d) {
    if (d>0) {
      m_deposito = d;
      m_balance +=m_deposito;
    }
  }
  float getSaque() {
    return m_saque;
  }
  void setSaque (float s) {
    if (s<=m_balance) {
      m_saque = s;
      m_balance -=m_saque;
    }
  }
  
 
  void show() {
    cout<<"Saldo e Movimentacoes - Conta Corrente" << endl;
    m_client->show();
    cout<<"Valor depositado -> " << getDeposito() << endl;
    cout<<"Valor sacado -> " << getSaque() << endl;
    cout<<"Saldo da Conta -> " << m_balance<<endl;
  }
};