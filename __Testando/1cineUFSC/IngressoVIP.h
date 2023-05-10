#include "Ingresso.h"
using namespace std;

class IngressoVIP : public Ingresso
{
private :
	float valorAdicional;
public:
	IngressoVIP() : Ingresso(0), valorAdicional(25) { cout << "Ingresso VIP criado" << endl; };
	IngressoVIP(float _valor) : Ingresso(_valor), valorAdicional(25) {
		cout << "Ingresso VIP criado sobrecarga 1"<<endl;
	}
	IngressoVIP(float _valor, float _valorAdicional) : Ingresso(_valor), valorAdicional(_valorAdicional) {
		cout << "Ingresso VIP criado sobrecarga 2" << endl;
	};
	~IngressoVIP() { cout << "Ingresso VIP destruido" << endl; };
	void setValorAdicional(float _valorAdicional) {
		if (_valorAdicional > 0 ) {
			valorAdicional = _valorAdicional;
			cout << "Ingresso VIP criado sobrecarga" << endl;
		}
	}
	float getValorAdicional() {
		return valorAdicional;
	}
	string toString() {
		
		string s2;
		stringstream buffer;
		buffer << Ingresso :: toString();
		buffer << "\nAdicional de -> ";
		buffer << getValorAdicional();
		buffer << "\nValor total -> ";
		float total = Ingresso::getValor() + getValorAdicional();
		buffer << total;
		s2 = buffer.str();

		return s2;
	}
};

