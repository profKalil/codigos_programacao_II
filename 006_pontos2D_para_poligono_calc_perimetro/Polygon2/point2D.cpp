#include "point2D.hpp"

Point2D::Point2D()
{
    cout << "Chamando construtor default" << endl;
    m_x=m_y=0;
}
Point2D::Point2D(int x, int y)
{
    cout << "Chamando construtor de sobrecarga" << endl;
    m_x=x;
    m_y=y;
}
Point2D::~Point2D()
{
    cout << "Chamando destrutor" << endl;
}
//setters and getters
void Point2D::SetXY(int x, int y)
{
    m_x=x;
    m_y=y;
}
int Point2D::GetX()
{
    return m_x;
}
int Point2D::GetY()
{
    return m_y;
}
