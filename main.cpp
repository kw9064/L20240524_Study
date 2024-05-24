#include <iostream>
#include <memory>
using namespace std;



int main()
{
	int* Numbers = new int[10];
	for (int i = 0; i < 10; ++i)
	{
		Numbers[1] = i + 1;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << Numbers[1] << ",";
	}

	delete[] Numbers;

	return 0;
}
