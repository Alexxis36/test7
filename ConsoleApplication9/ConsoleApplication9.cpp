#include <iostream>
#include <string>;
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int num[5][5], fun = 0, mult = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			num[i][j] = rand() % 100;
			cout << num[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\n1)влево\n2)вправо\n3)вверх\n4)вниз\nВведите операцию: "; cin >> fun;
	cout << "Введите кол-во раз: "; cin >> mult;

	if (fun == 1)//влево
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				swap(num[i][j], num[i][j + 1]);
			}
		}
	}
	else if (fun == 2)//вправо
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 4; j > 0; j--)
			{
				swap(num[i][j], num[i][j - 1]);
			}
		}
	}
	else if (fun == 3)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				swap(num[i][j], num[i + 1][j]);
			}
		}
	}
	else if (fun == 4)
	{
		for (int i = 4; i > 0; i--)
		{
			for (int j = 0; j < 5; j++)
			{
				swap(num[i][j], num[i - 1][j]);
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
}
