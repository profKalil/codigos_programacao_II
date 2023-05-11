#include <iostream>

using namespace std;

class Client
{
private:
    string m_name, m_address, m_profession;
    float m_income;

public:
    Client(string nome, string address="", string profession="", float income=0) : m_name(nome), m_address(address), m_profession(profession), m_income(income) {};

    void Show();
};
