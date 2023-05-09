#include "box.hpp"

using namespace std;

class Cartoon : public Box
{
private:
    int m_peso;
public:
    Cartoon() : Box(), m_peso(0) {
        cout << "Construtor default sub chamado" << endl;
    };
    Cartoon(int c, int p, int a, int peso) : Box(c, p, a), m_peso(peso) {
        cout << "Construtor sobrecarga sub chamado" << endl;
    };
    ~Cartoon() { cout << "Destrutor chamado" << endl; };

    void Show() { cout << "C:" << m_comp << " P:" << m_prof << " H:" << m_alt << " Peso:" << m_peso << endl; };
};

