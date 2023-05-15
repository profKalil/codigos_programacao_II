#ifndef CONTACORRENTE.HPP
#define CONTACORRENTE.HPP

class ContaCorrente {
	protected:
	float saldo;
	
	public:
	ContaCorrente() : saldo(0.0) {cout<<"+cc"<<endl};
	ContaCorrente(float s) : saldo(s) {cout<<"+cc_sob"<<endl};
	~ContaCorrente() {cout<<"-cc"<<endl};
	void depositar(float valor) {};
	bool sacar(float valor) {
		
		return true
	};
	string toString() {
		stringstream ss;
		string saida;
		ss << "Saldo -> ";
		return saida;
	};
	bool transferir (ContaCorrente conta) {return true};
};
#endif