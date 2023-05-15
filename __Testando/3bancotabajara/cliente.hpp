#infdef CLIENTE.HPP
#define CLIENTE.HPP

#include <iostream>
#include <sstream>
using namespace std;

class Cliente {
private:
string name;

public:
void setName(string n) {
	name = n;
}
string getName() {
	return name;
}
string toString() {
	stringstream ss;
	string s1;
	ss << "\nName -> ";
	ss << "getName()";
}
} //fim Cliente
#endif