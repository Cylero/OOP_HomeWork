#include "MyArray.h"
#include <iostream>

void printArray(const MyArray& arr, const std::string& name)
{
        std::cout << name << " (´óÐ¡: " << arr.getSize() << "): ";
        int* p = arr.getPtr();
        for (int i = 0; i < arr.getSize(); ++i)
        {
                std::cout << p[i] << " ";
        }
        std::cout << std::endl;
}

int main()
{

        MyArray arr1(3);  
        int* p1 = arr1.getPtr();
        p1[0] = 1; p1[1] = 2; p1[2] = 3;  
        printArray(arr1, "arr1");

        MyArray arr2(2);  
        int* p2 = arr2.getPtr();
        p2[0] = 10; p2[1] = 20;  
        printArray(arr2, "arr2");


        MyArray arr3(arr1);  
        printArray(arr3, "arr3 (¿½±´arr1)");

        MyArray merged = arr1.merge(arr2);
        printArray(merged, "merged (arr1+arr2)");

        MyArray added = arr1.add(arr2);
        printArray(added, "added (arr1+arr2)");

        MyArray subtracted = arr1.subtract(arr2);
        printArray(subtracted, "subtracted (arr1-arr2)");

        MyArray multiplied = arr1.multiply(arr2);
        printArray(multiplied, "multiplied (arr1*arr2)");

        MyArray divided = arr1.divide(arr2);
        printArray(divided, "divided (arr1/arr2)");


        MyArray arr4(1);
        arr4.getPtr()[0] = 5;
        printArray(arr4, "arr4");

        MyArray added2 = arr4.add(arr1);
        printArray(added2, "added2 (arr4+arr1)");

        return 0;
}