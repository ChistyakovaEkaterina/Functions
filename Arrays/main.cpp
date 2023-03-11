#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sort.h"
#include "Statistics.h"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand=200, maxRand=300;


	cout << "int: " << endl<< endl;
	UniqueRand(arr, n); 
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n)<<endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << endl << endl;
    Sort(arr, n);
	Print(arr, n);
	//shiftRight(arr, n);
	Print(arr, n);
	cout << endl << endl << endl;

	cout << "double: " << endl<< endl;
	const int size = 8;
	double brr[size];
	/*cout << "Введите минимальное и максимальное случайное число: "; cin >> minRand >> maxRand;
	if (minRand >= maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}*/
	FillRand(brr, size, minRand, maxRand);
	Print(brr, size);
	cout << "Сумма элементов массива: " << Sum(brr, size) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(brr, size) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, size) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, size) << endl << endl;
	Sort(brr, size);
	//Print(brr, size);
	/*shiftLeft(brr, size);
	Print(brr, size);*/
	cout << endl << endl << endl;

	//cout << "char: " << endl<< endl;
	//const int s = 8;
	//char crr[s];
	//setlocale(LC_ALL, 0);
	//FillRand(crr, s);
	//Print(crr, s);
	//setlocale(LC_ALL, "");
	//cout << "Сумма элементов массива: " << Sum(crr, s) << endl;
	//cout << "Среднее-арифмитическое элементов массива: " << Avg(crr, s) << endl;
	//cout << "Минимальное значение в массиве: " << minValueIn(crr, s) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(crr, s) << endl << endl;
	//Sort(crr, s);
	//Print(crr, s);
	//cout << endl << endl << endl;
	/*shiftLeft(crr, s);
	Print(crr, s);*/
	//UniqueRand(crr, s);
	//Print(crr, s);


	cout << "int i_arr_2: " << endl << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}



 
		
		
	




	