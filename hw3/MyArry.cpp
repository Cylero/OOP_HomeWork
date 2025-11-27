#include "MyArray.h"
#include <cstdlib>

MyArray::MyArray() : p(nullptr), N(0) {}

MyArray::MyArray(int size) : N(size)
{
        if (size < 0)
        {
                std::cerr << "Error: 数组长度不能为负数！" << std::endl;
                N = 0;
                p = nullptr;
                return;
        }
        p = (N == 0) ? nullptr : new int[N]();  
}


MyArray::MyArray(const MyArray& other) : N(other.N)
{
        p = (N == 0) ? nullptr : new int[N];
        for (int i = 0; i < N; ++i)
        {
                p[i] = other.p[i]; 
        }
}


MyArray::~MyArray()
{
        delete[] p; 
        p = nullptr;
        N = 0;
}


MyArray MyArray::merge(const MyArray& other) const
{
        MyArray result(N + other.N);  

        for (int i = 0; i < N; ++i)
        {
                result.p[i] = p[i];
        }

        for (int i = 0; i < other.N; ++i)
        {
                result.p[N + i] = other.p[i];
        }
        return result;
}


MyArray MyArray::add(const MyArray& other) const
{
        int maxSize = (N > other.N) ? N : other.N;
        MyArray result(maxSize);
        for (int i = 0; i < maxSize; ++i)
        {
                int a = (i < N) ? p[i] : 0;       
                int b = (i < other.N) ? other.p[i] : 0;  
                result.p[i] = a + b;
        }
        return result;
}

MyArray MyArray::subtract(const MyArray& other) const
{
        int maxSize = (N > other.N) ? N : other.N;
        MyArray result(maxSize);
        for (int i = 0; i < maxSize; ++i)
        {
                int a = (i < N) ? p[i] : 0;
                int b = (i < other.N) ? other.p[i] : 0;
                result.p[i] = a - b;
        }
        return result;
}

MyArray MyArray::multiply(const MyArray& other) const
{
        int maxSize = (N > other.N) ? N : other.N;
        MyArray result(maxSize);
        for (int i = 0; i < maxSize; ++i)
        {
                int a = (i < N) ? p[i] : 0;
                int b = (i < other.N) ? other.p[i] : 0;
                result.p[i] = a * b;
        }
        return result;
}


MyArray MyArray::divide(const MyArray& other) const
{
        int maxSize = (N > other.N) ? N : other.N;
        MyArray result(maxSize);
        for (int i = 0; i < maxSize; ++i)
        {
                int a = (i < N) ? p[i] : 0;
                int b = (i < other.N) ? other.p[i] : 0;

                if (b == 0)
                {
                        std::cerr << "Error: 除数为0，第" << i << "个元素结果设为0！" << std::endl;
                        result.p[i] = 0;
                }
                else
                {
                        result.p[i] = a / b;  
                }
        }
        return result;
}