#include <iostream>
#include <string>
#include <sstream>
using std::stringstream;
using namespace std;

class Ingresso {
protected:
	float valor=0.0;
public:
	Ingresso() : valor(0) { cout << "Ingresso criado"<<endl; };
	Ingresso(float _valor) { setValor(_valor); };
	~Ingresso() { cout << "Ingresso destruido" << endl; }
	float getValor () { 
		return valor;
	}
	void setValor(float _valor) {
		if (_valor > 0) {
			valor = _valor;
			cout << "Ingresso criado sobrecarga" << endl;
		}
	}
	
	string toString() {

		stringstream buffer;
		string s1;
		buffer << "Valor do ingresso -> ";
		buffer << getValor();
		s1 = buffer.str();

		return s1;
	}
};