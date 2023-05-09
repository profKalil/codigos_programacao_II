#include "cartoon.hpp"

int main()
{
    Box b1;
    Box b2(10,20,30);
    Cartoon b3;
    Cartoon b4(5,5,20,200);

    b1.Show();
    b2.Show();
    b3.Show();
    b4.Show();

    return 0;
};
