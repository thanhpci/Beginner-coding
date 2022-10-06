#include <iostream>

#include <cmath>


using namespace std;
struct Point
{
    double x, y;
    Point();
    Point(double, double);
    Point(const Point&);
};

class Triangle
{
    Point p1, p2, p3;
public:
    Triangle(const Point& , const Point& ,  const Point &);
    double getPerimeter() const;
    double getArea() const;
};

Point::Point() {} ;

Point::Point(double _x, double _y) {

    x = _x;
    y = _y;
};

Point::Point(const Point& other) {
    x = other.x;
    y = other.y;
}

Triangle::Triangle(const Point& _p1, const Point& _p2,  const Point &_p3) {
    p1 = _p1;
    p2 = _p2;
    p3 = _p3;
}
double Triangle::getPerimeter() const {

    double a = (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y);
    double b = (p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y);
    double c = (p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y);
    a = sqrt(a);
    b = sqrt(b);
    c = sqrt(c);

    double peri = a+b+c;
    return peri;

}

double Triangle::getArea() const {
    double a = (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y);
    double b = (p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y);
    double c = (p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y);
    a = sqrt(a);
    b = sqrt(b);
    c = sqrt(c);
    double peri = a+b+c;

    double s = peri*(peri-a)*(peri-b)*(peri-c);
    s = sqrt(s);
    return s;
};





int main()
{
    Point a;


    return 0;
}
