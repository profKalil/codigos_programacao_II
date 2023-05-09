#include "point2D.hpp"
#include <vector>

int main()
{
    Point2D p1(0,0);
    Point2D p2(10,20);
    Point2D p3(20,30);
    Point2D p4(30,0);
    Point2D p5(15,10);

    vector< Point2D > pointList;
    pointList.push_back(p1);
    pointList.push_back(p2);
    pointList.push_back(p3);
    pointList.push_back(p4);
    pointList.push_back(p5);

    for(size_t i=0; i<pointList.size(); i++)
    {
        cout << " Ponto id#: " << i << " x: " << pointList.at(i).GetX() << " y: " << pointList.at(i).GetY() << endl;
    }

    //criar uma classa poligono que recebera: ou o vetor de pontos 2D. ou chamadas sucessivas de pontos 2D individuais (AddPoint(), IncludePoint() )
    //Objetivo: calcular o perimetro

    return 0;
}

