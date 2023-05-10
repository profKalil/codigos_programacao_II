#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.h"
class Vendedor : public Empregado
{
private:
	float percentualComissao;
public:
	Vendedor() : Empregado(), percentualComissao(0) {cout <<"Vendedor criado"<<endl; };
	Vendedor(float pc) : Empregado(), percentualComissao(pc) { cout << "Vendedor criado sobrecarga 1"<<endl; };
	Vendedor(string n, float s, float pc) : Empregado(n, s), percentualComissao(pc) { cout << "Vendedor criado sobrecarga 2" <<endl; };
	~Vendedor() { cout << "Vendedor destruido" << endl; };
	void setPercentualComissao(float pc) {
		if (pc>0) percentualComissao = pc;
	}
	float getPercentualComissao() {
		return percentualComissao;
	}
	float calcularSalario(float s, float pc){
		return getSalario() * getPercentualComissao();
	}
	string toString() {
		string s3;
		stringstream buffer;
		buffer << Empregado::toString();
		buffer << "\nPercentual de Comissao -> ";
		buffer << getPercentualComissao();
		float total = getSalario() * getPercentualComissao();
		buffer << "\nSalario com comissao -> ";
		buffer << total;
		s3 = buffer.str();

		return s3;
	}
};

#endif