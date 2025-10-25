#include <iostream>
using namespace std;
int countVowels(const char* p);

int main()
{
	string t;
	cin >> t;
	const char* p = &t[0];
	countVowels(p);

}

int countVowels(const char* p)
{
	int num = 0;;
	while (*p != '\0')
	{
		if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
			num++;
		*p++;
	}
	cout << "Number of vowels: " << num << endl;
	return 0;
}