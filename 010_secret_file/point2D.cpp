#include "point2D.hpp"

Point2D::Point2D()
{
    m_x=m_y=NULL;
}

Point2D::Point2D(int x, int y)
{
    m_x = new int;
    m_y = new int;
   *m_x=x;
   *m_y=y;

    //m_x = new int(x);
    //m_y = new int(y);
}

Point2D::~Point2D()
{
    if(m_x != NULL) delete m_x;
    if(m_x != NULL) delete m_y;
}

void Point2D::SetXY(int x, int y)
{
    if(m_x==NULL) m_x = new int;
    if(m_y==NULL) m_y = new int;
   *m_x=x;
   *m_y=y;
}

int Point2D::GetX()
{
    return *m_x;
}

int Point2D::GetY()
{
    return *m_y;
}


