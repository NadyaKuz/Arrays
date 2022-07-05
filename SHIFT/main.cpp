#include<iostream>
#include<Windows.h>
using namespace std;

#define  tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //Ввывод исходного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сдвиг массива:
	int shift;
	cout << "Введите количество сдвигов: "; cin >> shift;
	/*for (int i = 0; i < shift; i++)
	{
	    int buffer = arr[0];
	    for (int i = 0; i < n; i++)
	    {
		    arr[i] = arr[i + 1];
	    }
	    arr[n - 1] = buffer;
	}*/
	for (int i = 0; i > shift; i--)
	{
		int buffer = arr[n];
		for (int i = 0; i > n; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[n] = buffer;
	}

    //Вывод сдвинутого массива на экран
	system("CLS");
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	Sleep(1000);

}