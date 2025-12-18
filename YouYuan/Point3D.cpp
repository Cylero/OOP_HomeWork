#include "Point3D.h"
#include <iostream>

void Point3D::setZ(double z) { this->z = z; }

double Point3D::getZ() { return z; }

Point3D& Point3D::move(double dx, double dy, double dz)
{
	x = dx;
	y = dy;
	z = dz;
	return *this;
}

Point3D::~Point3D() {}

void Point3D::show()const
{
	std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

double distance(const Point3D& p1, const Point3D& p2)
{
	double res = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y) + (p1.z - p2.z) * (p1.z - p2.z));
	std::cout << "这两点距离为：" << res << std::endl;
	return res;
}