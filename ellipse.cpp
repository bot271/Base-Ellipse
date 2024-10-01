//
//  ellipse.cpp
//  elllipse
//
//  Created by Mingze Lee on 2024/10/1.
//

#include "ellipse.h"
#include <cmath>

BaseEllipse::BaseEllipse(double x0, double y0)
{
    x = x0;
    y = y0;
}

void BaseEllipse::Move(double dx, double dy)
{
    x += dx;
    y += dy;
}

Circle::Circle(double x0, double y0, double r) : BaseEllipse(x0, y0)
{
    radius = r;
}

void Circle::Scale(double r)
{
    radius *= r;
}

double Circle::Area() const
{
    return M_PI * radius * radius;
}

Ellipse::Ellipse(double x0, double y0, double a0, double b0) : BaseEllipse(x0, y0)
{
    a = a0;
    b = b0;
}

void Ellipse::Rotate(double nang)
{
    angle += nang;
}

void Ellipse::Scale(double na, double nb)
{
    a *= na;
    b *= nb;
}

double Ellipse::Area() const
{
    return M_PI * a * b;
}
