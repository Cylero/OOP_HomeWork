#include "Point2D.h"
#include <iostream>
#include <cmath>

double Point2D::getX(){return x;}
double Point2D::getY() { return y; }
void Point2D::setX(double x) { this->x = x; }
void Point2D::setY(double y) { this->y = y; }

Point2D::~Point2D(){}

Point2D& Point2D::move(double dx, double dy)
{
	x = dx;
	y = dy;
	return *this;
}

void Point2D::show() const
{
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

double distance(const Point2D& p1, const Point2D& p2)
{
	double res= sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	std::cout << "这两点距离为：" << res << std::endl;
	return res;
}