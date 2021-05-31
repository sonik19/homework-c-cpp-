#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	unsigned n(0);

	cout << "n = ";
	cin >> n;

	int** arr = new int* [n];
	srand((int)time(nullptr));

	int to = 50;
	int delta = 0;

	cout << endl;
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		for (size_t j = 0; j < n; j++)
		{
			arr[i][j] = delta + rand() % to;
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	cout << endl;

	int minPositive(999);
	unsigned I(0), J(0);		
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (arr[i][j] >= 0 && minPositive > arr[i][j])
			{
				minPositive = arr[i][j];
				I = i;
				J = j;
			}
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		int temp = arr[i][J];
		arr[i][J] = arr[I][i];
		arr[I][i] = temp;
	}

	cout << endl;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "\nSwapped row #" << I + 1 << " and column #" << J + 1 << ".\n\n";

	for (size_t i = 0; i < n; i++)
		delete[] arr[i];
	delete[] arr;
	return 0;
}
