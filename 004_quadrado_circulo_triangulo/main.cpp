//main.cpp

#include "square.hpp"
#include "circle.hpp"
#include "triangle.hpp"

int main()
{
    Square sq1;
    sq1.SetEdge(10);
    cout << "Square 1 -> e: " << sq1.GetEdge() << " - A: "  << sq1.CalcArea() << endl;

    Square sq2;
    sq2.SetEdge(20);
    cout << "Square 2 -> e: " << sq2.GetEdge() << " - A: "  << sq2.CalcArea() << endl;

    Square sq3;
    sq3.SetEdge(30);
    cout << "Square 3 -> e: " << sq3.GetEdge() << " - A: "  << sq3.CalcArea() << endl;

    Circle ci1;
    ci1.SetRatio(2);
    cout << "Circle 2 -> e: " << ci1.GetRatio() << " - A: "  << ci1.CalcArea() << endl;

    Triangle tr1;
    tr1.SetEdges(10,10,14.142);
    cout << "Triangle 1 -> A: "  << tr1.CalcArea() << endl;

    return 0;
}
