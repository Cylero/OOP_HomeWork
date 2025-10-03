#ifndef REFRIGERATOR

#include <iostream>
#include "Elephant.h"
using namespace std;

class Refrigerator
{
	public:
		void OpenDoor(void)
		{
			cout << "Refrigerator door opened." << endl;
		}

		void PutIn(Elephant& ele)
		{
			cout << "The elephant " << ele.GetName()<<" has been put into the refrigerator."<<endl;
		}

		void CloseDoor(void)
		{
			cout << "Refrigerator door closed." << endl;
		}
};

#endif 