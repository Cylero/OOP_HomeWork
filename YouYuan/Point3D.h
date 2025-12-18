#pragma once
#include "Point2D.h"
class Point3D : public Point2D
{
private:
	double x;
	double y;
	double z;
public:
	Point3D() {}
	Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
	~Point3D();

	double getZ();

	void setZ(double z);

	Point3D& move(double dx, double dy, double dz);
	
	void show() const;
	friend double distance(const Point3D& p1, const Point3D& p2);
};

