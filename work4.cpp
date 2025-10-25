#include <iostream>
using namespace std;

void swap(int&x,int&y)
{
    int t = x;
    x=y;
    y=t;
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;

    printf("Before swap:x=%d, y=%d\n",a,b);
    swap(a,b);
    printf("Before swap:x=%d, y=%d\n",a,b);
}