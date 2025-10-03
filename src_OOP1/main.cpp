#include "Elephant.h"
#include "Refrigerator.h"

using namespace std;


int main()
{
	Refrigerator R;
	string a;
	cout << "Please enter a string as the elephant's name:" << endl;
	cin >> a;
	Elephant e(a);
	R.OpenDoor();
	R.PutIn(e);
	R.CloseDoor();
	return 0;
}