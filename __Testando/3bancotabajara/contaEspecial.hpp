#ifndef CONTAESPECIAL.HPP
#define CONTAESPECIAL.HPP

#include contaCorrente.hpp

class ContaEspecial : public ContaCorrente {
	private:
	float limite;
	
	public:
	ContaEspecial() : limite(0) {cout<<"+ce"<<endl;};
	ContaEspecial(float l) : limite(l) {cout<<"+ce_sob"<<endl;};
	~ContaEspecial() {cout<<"-ce"<<endl;};
	bool sacar (float valor) {
		
		return true;
	}
	string toString () {
		string saida;
		stringstream ss;
		ss << ContaCorrente::toString();
		ss << "Limite -> ";
		saida << ss.str();
		return saida;
	}
};
#endif