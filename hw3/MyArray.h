#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>

class MyArray
{
private:
	int* p;       
	int N;        

public:

	MyArray();                          
	MyArray(int size);                  
	MyArray(const MyArray& other);      

	
	~MyArray();                        

	
	MyArray merge(const MyArray& other) const; 

	
	MyArray add(const MyArray& other) const;     
	MyArray subtract(const MyArray& other) const;
	MyArray multiply(const MyArray& other) const;
	MyArray divide(const MyArray& other) const;  
	
	int getSize() const { return N; }
	int* getPtr() const { return p; }
};

#endif