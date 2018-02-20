#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;

#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>

using namespace std;

int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			int m[5], max = 0;
			create(m, 5, 1, 20, positive);
			print_arr(m, 5);
			rmax(m, 4, &max);
			cout << max << " - максимальный элемент массива\n\n";
		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
		{
			cout << "ошибка" << endl;
		}
		}
	} while (nz > 0);


}



/*void main()
{
	//создание указателя
	int(*myRef)(int, int) = diff;

	int result = myRef(10,20);
	cout << result << endl;

}

void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			int mes[2][2];

			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					mes[i][j] = 9 + 1;
					cout << mes[i][j] << "\t";
				}
				cout << endl;
			}


			cout << mes << endl;
			cout << mes[0] << endl;
			cout << *mes << endl;
			cout << mes + 1 << endl;
			cout << *mes + 1 << endl;
			cout << *(mes + 1) << endl;


			int *x = &mes[0][0];
			int *y = x;
			cout << *y << endl;

		}break;
		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
		{
			cout << "ошибка" << endl;
		}
		}
	} while (nz > 0);


}*/

