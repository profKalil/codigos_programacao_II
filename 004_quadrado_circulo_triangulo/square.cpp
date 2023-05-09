//square.cpp

#include "square.hpp"

void Square::SetEdge(float value)
{
    edge = value;
}

float Square::GetEdge()
{
    return edge;
}

float Square::CalcArea()
{
    return edge*edge;
}
