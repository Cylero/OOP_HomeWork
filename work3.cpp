#include <iostream>
using namespace std;

inline double square(double x)
{
    return x*x;
}

double power(double base,int exponent =2)
{
    return base*base;
}

double calc(double a,double b,char op)
{
    if(op=='+')
        return a+b;
    if(op=='-')
        return a-b;
    if(op=='*')
        return a*b;
    if(op=='/')
        return a/b;
}

double cale(int a,int b,char op)
{
     if(op=='+')
        return a+b;
    if(op=='-')
        return a-b;
    if(op=='*')
        return a*b;
    if(op=='/')
        return a/b;
}

int main()
{
    double a,b;
    char c;
    cin>>a>>b>>c;
    cout<<square(a)<<endl;
    cout<<square(b)<<endl;
    cout<<power(a)<<endl;
    cout<<calc(a,b,c)<<endl;
}