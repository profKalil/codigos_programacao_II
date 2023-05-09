#include "polygon.hpp"


int main()
{
    //**** primeira forma de gerar poligono
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

    Polygon Shape1(pointList);
    cout << "Shape 1 -> perimetro: " << Shape1.CalcPerimeter() << endl;

    //**** segunda forma de construir poligono
    vector< Point2D > pointList2;
    pointList2.push_back(Point2D(0,0));
    pointList2.push_back(Point2D(0,10));
    pointList2.push_back(Point2D(10,10));
    pointList2.push_back(Point2D(10,0));

    Polygon Shape2;
    Shape2.UpdatePoints(pointList2);
    cout << "Shape 2 -> perimetro: " << Shape2.CalcPerimeter() << endl;

    //**** terceira forma de construir poligono
    Polygon Shape3;
    Shape3.AddPoint(Point2D(0,0));
    Shape3.AddPoint(Point2D(10,0));
    Shape3.AddPoint(Point2D(0,10));
    cout << "Shape 3 -> perimetro: " << Shape3.CalcPerimeter() << endl;

    //Shape3.ClearPolygon();

    return 0;
}

