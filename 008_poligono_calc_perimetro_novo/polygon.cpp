#include "polygon.hpp"
#include <cmath>

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
    float perim=0;
    for(size_t i=0; i<m_listDePontos.size()-1; i++)
    {
        Point2D pt1 = m_listDePontos.at(i);
        Point2D pt2 = m_listDePontos.at(i+1);

        perim += sqrt(
            (pt1.GetX()-pt2.GetX()) * (pt1.GetX()-pt2.GetX())   +
            (pt1.GetY()-pt2.GetY()) * (pt1.GetY()-pt2.GetY())
        );
    }

    Point2D pt1 = m_listDePontos.at(0);
    Point2D pt2 = m_listDePontos.at(m_listDePontos.size()-1);

    perim += sqrt(
            (pt1.GetX()-pt2.GetX()) * (pt1.GetX()-pt2.GetX())   +
            (pt1.GetY()-pt2.GetY()) * (pt1.GetY()-pt2.GetY())
    );

    return perim;
}








