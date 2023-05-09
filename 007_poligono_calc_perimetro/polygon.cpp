#include "polygon.hpp"

Polygon::Polygon()
{
}

Polygon::Polygon(vector< Point2D > listaPontos)
{
    m_listDePontos = listaPontos;
}

void Polygon::UpdatePoints(vector< Point2D > listaPontos)
{
    m_listDePontos = listaPontos;
}

void Polygon::AddPoint(Point2D pt)
{
    m_listDePontos.push_back(pt);
}

void Polygon::ClearPolygon()
{
    m_listDePontos.clear();
}

float Polygon::CalcPerimeter()
{

    return 0;
}
