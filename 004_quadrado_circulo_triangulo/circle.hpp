//circle.hpp

#include <iostream>

using namespace std;

class Circle
{
//atributos
private:
    float ratio; //raio do quadrado

//metodos
public:
    //getters and setters
    void SetRatio(float value);
    float GetRatio();
    float CalcArea();
};



