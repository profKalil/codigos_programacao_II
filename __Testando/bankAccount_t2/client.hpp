#include <iostream>
using namespace std;

class Client {
private:
  string m_name, m_adress, m_profession;
  float m_income;
public:
  Client(string name, string adress=" ", string profession=" ", float income=0) : m_name(name), m_adress(adress), m_profession(profession), m_income(income) {};
  void show() {
    cout << "Nome -> " << m_name<<endl
      << "Adress -> " << m_adress <<endl
      << "Profession -> " << m_profession<<endl
      << "Income - > "<<m_income<<endl;
   }
};