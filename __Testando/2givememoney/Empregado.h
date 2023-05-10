#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <sstream>
using namespace std;

class Empregado
{
private:
	string nome;
protected:
	float salario;
public:
	Empregado() : nome(" "), salario(0.0) { cout << "Nome e Salario criados" << endl; };
	Empregado(string n) : nome(n), salario(0.0) { cout << "Nome criado sobrecarga 1 " << endl; };
	Empregado(string n, float s) : nome(n), salario(s) { cout << "Nome criado sobrecarga 2 " << endl; };
	~Empregado() { cout << "Empregado destruido" << endl; };
	string getNome() {
		return nome;
	}
	void setNome(string n) {
		nome = n;
	}
	float getSalario() {
		return salario;
	}
	void setSalario(float s) {
		if (s > 0) salario = s;
	}
	string toString() {
		stringstream buffer;
		string s1;
		buffer << "Nome -> ";
		buffer << getNome();
		buffer << "\nSalario -> ";
		buffer << getSalario();
		s1 = buffer.str();
		return s1;
	}
};

#endif
