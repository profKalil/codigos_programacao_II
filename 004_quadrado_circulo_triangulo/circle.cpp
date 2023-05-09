//circle.cpp

#include "circle.hpp"

void Circle::SetRatio(float value)
{
    ratio = value;
}

float Circle::GetRatio()
{
    return ratio;
}

float Circle::CalcArea()
{
    return 3.14159 * ratio * ratio;
}
