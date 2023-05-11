#include <iostream>
#include "contaCorrente.hpp"

int main() {
  Client c0 ("Antonio Carlos", "Rua Uruguai", "Empresario", 25000);
  // c0.show();
  Client c1 ("Maria da Silva", "Rua Argentina", "Professora", 17000);

  ContaCorrente cc0(&c0, 7000);
  cc0.setDeposito(1000);
  cc0.setSaque(250);
  cc0.show();
  cout<<endl<<endl;
  ContaCorrente cc1(&c1, 5555);
  cc1.show();

  //transferência
  
  return 0;
}