#include "Ingresso.h"
using namespace std;

class IngressoVIP : public Ingresso
{
private :
	float valorAdicional;
public:
	IngressoVIP() : Ingresso(), valorAdicional(valor + 25) { cout << "Ingresso VIP criado"<<endl; };
	IngressoVIP(float _valorAdicional) : Ingresso(valor) {
		setValorAdicional(_valorAdicional);
	}
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
		
		Ingresso :: toString();
		string s2;
		stringstream buffer;
		buffer << "Adicional de -> ";
		buffer << getValorAdicional();
		s2 = buffer.str();

		return s2;
	}
};

