#include <iostream>
#include <cmath>
using namespace std;

bool static ifTriangle(double a, double b, double c)
{
	if (a<=0 || b<=0|| c<=0)
		return false;
	else if (a + b > c && a + c > b && b + c > a)
		return true;
	else
		return false;
}

int main()
{
	class Date
	{
		int year;
		int month;
		int day;

		int Year() {return year;}

		void setYear(int year) {this->year = year;}

		int getMonth()
		{
			return month;
		}

		void setMonth(int month)
		{
			this->month = month;
		}

		int getDay()
		{
			return day;
		}

		void setDay(int day)
		{
			this->day = day;
		}

		Date() {}
		Date(int year, int month, int day)
		{
			this->year = year;
		}

		void display()
		{
			cout << year << "-" << month << "-" << day << endl;
		}

		int calWeekday()
		{
			int y = year;
			int m = month;
			if (m == 1 || m == 2)
			{
				m += 12;
				y -= 1;
			}
			int h = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400 + 1) % 7;
			switch (h)
			{
				case 0:
					cout << "Monday" << endl;
					break;
				case 1:
					cout << "Tuesday" << endl;
					break;
				case 2:
					cout << "Wednesday" << endl;
					break;
				case 3:
					cout << "Thursday" << endl;
					break;
				case 4:
					cout << "Friday" << endl;
					break;
				case 5:
					cout << "Saturday" << endl;
					break;
				case 6:
					cout << "Sunday" << endl;
					break;
			}
			return h;
		}
	};

	class  Triangle
	{
		private:
			double a;
			double b;
			double c;
		public:
			Triangle() {}
			Triangle(double a, double b, double c)
			{
				if ( ifTriangle(a,b,c))
				{
					this->a = a;
					this->b = b;
					this->c = c;
				}
				else
				{
					cout << "Not a valid triangle!" << endl;
				}
			}

			double getSideLengthA() {return a;}
			double getSideLengthB() {return b;}
			double getSideLengthC() {return c;}

			void setSideLength(double a, double b, double c)
			{
				if (ifTriangle(a, b, c))
				{
					this->a = a;
					this->b = b;
					this->c = c;
				}
				else
				{
					cout << "Not a valid triangle!" << endl;
				}
			}

			double getPerimeter()
			{
				return a + b + c;
			}

			void RightTriangle()
			{
				if (c>a && c>b)
				{
					if (c * c == a * a + b * b)
					{
						cout << "Right Triangle" << endl;
					}
					if (c * c < a * a + b * b)
					{
						cout << "Acute Triangle" << endl;
					}
					if (c * c > a * a + b * b)
					{
						cout << "Obtuse Triangle" << endl;
					}
				}
				else if (b > a && b > c)
				{
					if (b * b == a * a + c * c)
					{
						cout << "Right Triangle" << endl;
					}
					if (b * b < a * a + c * c)
					{
						cout << "Acute Triangle" << endl;
					}
					if (b * b > a * a + c * c)
					{
						cout << "Obtuse Triangle" << endl;
					}
				}
				else if (a > b && a > c)
				{
					if (a * a == b * b + c * c)
					{
						cout << "Right Triangle" << endl;
					}
					if (a * a < b * b + c * c)
					{
						cout << "Acute Triangle" << endl;
					}
					if (a * a > b * b + c * c)
					{
						cout << "Obtuse Triangle" << endl;
					}
				}
			}

			void findAddress()
			{
				cout << "a:" << &a << ",b:" << &b << ",c:" << &c << endl;
			}

			void findArea()
			{
				double s = (a + b + c) / 2;
				double area = sqrt(s*(s-a)*(s-b)*(s-c));
				cout << area << endl;
			}

			void findCST()
			{
				double cosA = (b * b + c * c - a * a) / (2 * b * c);
				double cosB = (a * a + c * c - b * b) / (2 * a * c);
				double cosC = (a * a + b * b - c * c) / (2 * a * b);
				cout << "cosA: " << cosA << ", cosB: " << cosB << ", cosC: " << cosC << endl;

				double sinA = sqrt(1 - cosA * cosA);
				double sinB = sinA * b / a;
				double sinC = sinA * c / a;
				cout << "sinA: " << sinA << ", sinB: " << sinB << ", sinC: " << sinC << endl;

				double tanA = sinA / cosA;
				double tanB = sinB / cosB;
				double tanC = sinC / cosC;
				cout << "tanA: " << tanA << ", tanB: " << tanB << ", tanC: " << tanC << endl;
			}
	};

	Triangle ccb(3,4,5) ;
	cout<<ccb.getPerimeter();
	ccb.RightTriangle();
	ccb.findCST();
	ccb.findArea();
	ccb.findAddress();
}