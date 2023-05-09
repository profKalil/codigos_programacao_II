//triangle.cpp

#include "triangle.hpp"
#include <cmath>

void Triangle::SetEdges(float v1,float v2,float v3)
{
    e1=v1;
    e2=v2;
    e3=v3;
}

float Triangle::CalcArea()
{
    CalcSemiperimeter();

    float A = sqrt(sp*(sp-e1)*(sp-e2)*(sp-e3));
    return A;
}

void Triangle::CalcSemiperimeter()
{
    sp = (e1+e2+e3)/2;
}
