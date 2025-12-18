#pragma once
class Point2D
{	
private:
	double x;
	double y;
public:
	Point2D() {}
	Point2D(double x, double y) : x(x), y(y) {}

	~Point2D();
	double getX();
	double getY();
	void setX(double x);
	void setY(double y);

	Point2D& move(double dx, double dy);

	void show() const;

	friend double distance(const Point2D& p1, const Point2D& p2);
};

