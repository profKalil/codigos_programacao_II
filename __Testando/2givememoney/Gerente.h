#include "Empregado.h"
class Gerente : public Empregado
{
private:
	string departamento;
public:
	Gerente() : Empregado(), departamento("") { cout << "Gerente criado"<<endl; };
	Gerente(string n, string d) : Empregado(n), departamento(d) { cout << "Gerente criado sobrecarga 1" << endl; };
	Gerente(string n, float s, string d) : Empregado(n, s), departamento(d) { cout << "Gerente criado sobrecarga 2" << endl; }
	void setDepartamento(string d) {
		departamento = d;
	}
	string getDepartamento() {
		return departamento;
	}
	string toString() {
		stringstream buffer;
		string s2;
		buffer << Empregado::toString();
		buffer << "/nDepartamento -> ";
		buffer << getDepartamento();
		s2 = buffer.str();
		return s2;
	}
};
