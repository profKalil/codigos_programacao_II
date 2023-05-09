//triangle.hpp

#include <iostream>

using namespace std;

class Triangle
{
//atributos
private:
    float e1,e2,e3; //lados do triangulo
    float sp; //semiperimeter

//metodos
private:
    void CalcSemiperimeter();

public:
    //getters and setters
    void SetEdges(float v1, float v2, float v3);
    //float GetEdge();
    float CalcArea();

};

