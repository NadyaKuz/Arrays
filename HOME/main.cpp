#include<iostream>
using namespace std;

#define  tab "\t"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int c;
	cout << "¬ведите количество сдвигов: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		int a = arr[n - 1];

		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = a;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}