#include <iostream>

using namespace std;

class Box
{
protected:
    int m_comp, m_prof, m_alt;

public:
    //constructors and destructor
    Box() : m_comp(0), m_prof(0), m_alt(0) {
        cout << "Construtor default chamado" << endl;
    };
    Box(int c, int p, int a) : m_comp(c), m_prof(p), m_alt(a) {
        cout << "Construtor sobrecarga chamado" << endl;
    };
    ~Box() { cout << "Destrutor chamado" << endl; };

    void Show() { cout << "C:" << m_comp << " P:" << m_prof << " H:" << m_alt << endl; };
};

