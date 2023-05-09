#include <iostream>

using namespace std;

class Point2D
{
private: //atributos
    int m_x, m_y;

public: //metodos
    //constructors and destructor
    Point2D();
    Point2D(int x, int y);
    ~Point2D();

    //setters and getters
    void SetXY(int x, int y);
    int GetX();
    int GetY();
};

