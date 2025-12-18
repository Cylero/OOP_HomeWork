#include <iostream>

using namespace std;

class base
{
public:
	int a;                  
protected:
	int b;                  
private:
	int c;                 
	static int count;       
public:

	base(int a_, int b_, int c_) : a(a_), b(b_), c(c_)
	{
		count++;
	}

	~base()
	{
		count--;
	}

	void print() const
	{
		cout << "base: a=" << a << ", b=" << b << ", c=" << c << endl;
	}
	static int Manage()
	{
		return count;
	}
};

class derived1 : public base
{
public:
	derived1(int a_, int b_, int c_) : base(a_, b_, c_)
	{
		cout << "derived1 构造" << endl;
	}
	~derived1()
	{
		cout << "derived1 析构" << endl;
	}

	void show() const
	{
		cout << "derived1: a=" << a << ", b=" << b << endl;
	}
};

class derived2 : protected base
{
public:
	derived2(int a_, int b_, int c_) : base(a_, b_, c_)
	{
		cout << "derived2 构造" << endl;
	}
	~derived2()
	{
		cout << "derived2 析构" << endl;
	}

	void show() const
	{
		cout << "derived2: a=" << a << ", b=" << b << endl;
	}
};

class derived3 : private base
{
public:
	derived3(int a_, int b_, int c_) : base(a_, b_, c_)
	{
		cout << "derived3 构造" << endl;
	}
	~derived3()
	{
		cout << "derived3 析构" << endl;
	}

	void show() const
	{
		cout << "derived3: a=" << a << ", b=" << b << endl;
	}
};

int base::count = 0;

int main()
{
	base b(1, 2, 3);
	b.print();
	cout << "当前对象数：" << base::Manage() << endl;

	derived1 d1(10, 20, 30);
	d1.show();
	d1.print(); 
	cout << "当前对象数：" << base::Manage() << endl;


	derived2 d2(100, 200, 300);
	d2.show();

	derived3 d3(1000, 2000, 3000);
	d3.show();


	cout << "程序结束前对象数：" << base::Manage() << endl;
	return 0;
}