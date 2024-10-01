//
//  ellipse.h
//  elllipse
//
//  Created by Mingze Lee on 2024/10/1.
//

#ifndef ELLIPSE_H_
#define ELLIPSE_H_

class BaseEllipse
{
private:
    double x;
    double y;
public:
    BaseEllipse(double x0 = 0, double y0 = 0);
    virtual ~BaseEllipse() { };
    void Move(double dx = 0, double dy = 0);
    virtual double Area() const = 0;
};

class Circle : public BaseEllipse
{
private:
    double radius;
public:
    Circle(double x0 = 0, double y0 = 0, double r = 1.0);
    void Scale(double r = 1.0);
    virtual double Area() const;
};

class Ellipse : public BaseEllipse
{
private:
    double a;
    double b;
    double angle;
public:
    Ellipse(double x0 = 0, double y0 = 0, double a0 = 1, double b0 = 1);
    void Rotate(double nang = 0.0);
    void Scale(double na = 1, double nb = 1);
    virtual double Area() const;
};

#endif
