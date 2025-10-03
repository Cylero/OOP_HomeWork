#ifndef ELEPHANT_H
#define ELEPHANT_H
#include <string>

using namespace std;
class Elephant
{
	private:
		string name;
	public:
		Elephant(string na )
		{
			name = na;
		}
		string GetName()
		{
			return name;
		}
};

#endif
