#include <iostream>
#include <memory>
using namespace std;



int main()
{
	int* Numbers = new int[10];
	for (int i = 0; i < 10; ++i)
	{
		Numbers[i] = i + 1;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << Numbers[i] << ",";
	}

	delete[] Numbers;

	return 0;
}
