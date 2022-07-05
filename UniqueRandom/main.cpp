#include<iostream>
#include<Windows.h>
using namespace std;

#define tab "\t"

void main()
{
	setlocale (LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;	
	cout << "??????? ?????????? ???????: "; cin >> number_of_shifts;

	char direction;
	cout << "??????? ??????????? ?????? (l - left, r - right): "; cin >> direction;
	if (direction == 'r')number_of_shifts = n - number_of_shifts;

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}