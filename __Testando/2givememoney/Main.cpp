#include "Gerente.h"
#include "Vendedor.h"

int main() {

	Gerente g0; 
	g0.setNome("Joao");
	g0.setSalario(550.5);
	g0.setDepartamento("Compras");
	cout<<g0.toString()<<endl<<endl;

	Gerente g1("Jose", 808.6, "Vendas");
	cout<<g1.toString() << endl<<endl;

	Vendedor v0;
	v0.setNome("Manoel");
	v0.setPercentualComissao(1.2);
	v0.setSalario(100);
	v0.calcularSalario(v0.getSalario(), v0.getPercentualComissao());
	cout << v0.toString() << endl << endl;

	return 0;
}