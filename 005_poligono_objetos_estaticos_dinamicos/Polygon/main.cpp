#include "point2D.hpp"

int main()
{
    Point2D p1;
    Point2D p2(10,20);

    Point2D *p3 = new Point2D();
    Point2D *p4 = new Point2D(30,20);

    //checagem de memoria:
    //valgrind --leak-check=full ./out
    delete p3;
    delete p4;

    return 0;
}

