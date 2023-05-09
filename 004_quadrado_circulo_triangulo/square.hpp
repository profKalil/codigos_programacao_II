//square.hpp

#include <iostream>

using namespace std;

class Square
{
//atributos
private:
    float edge; //lado do quadrado

//metodos
public:
    //getters and setters
    void SetEdge(float value);
    float GetEdge();
    float CalcArea();
};

