#include <iostream>
#include <memory>
using namespace std;



int main()
{
	int Size = 10;
	int* Numbers = new int[Size];
	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;
	}

	int* Temp = new int[Size + 1];

	for (int i = 0; i < Size; ++i)
	{
		cout << Numbers[i] << ",";
	}
	Temp[Size] = Size + 1;

	delete[] Numbers;
	Numbers = Temp;

	return 0;
}
