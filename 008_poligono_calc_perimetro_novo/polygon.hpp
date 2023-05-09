#include "point2D.hpp"
#include <vector>

class Polygon
{
private:
    vector< Point2D > m_listDePontos;

public:
    Polygon();
    Polygon(vector< Point2D > listaPontos);

    float CalcPerimeter();
    void UpdatePoints(vector< Point2D > listaPontos);

    void AddPoint(Point2D pt);
    void ClearPolygon();
};
