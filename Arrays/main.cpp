#include <iostream>
using namespace std;
	const int ROWS = 5; //количество строк
	const int COLS = 8; // количество элементов строки, (столбцы)


void FillRand(int arr[], const int n,int minRand=0,int maxRand=100);
void FillRand(double arr[], const int n,int minRand=0,int maxRand=100);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);


void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);


void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
int Sum (int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);


int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);


void shiftLeft(int arr[], const int n);
void shiftLeft(double arr[], const int n);
void shiftLeft(char arr[], const int n);

void shiftRight(int arr[], const int n);
void shiftRight(double arr[], const int n);
void shiftRight(char arr[], const int n);


void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);


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
	Print(brr, size);
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
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()% (maxRand- minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100; maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()% (maxRand- minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
	
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
} 
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
} 
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
} 
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
}


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = k==i?j+1:0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
}
 
		
		
	



int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;

}



double Avg(int arr[], const int n)
{
	return (double) Sum(arr, n)/ n;
	
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n)/ n;
	
}
double Avg(char arr[], const int n)
{
	return(double)Sum(arr, n)/ n;
	
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}


int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i]<min) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i]<min) min = arr[i];
	}
	return min;
}
int minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i]<min) min = arr[i];
	}
	return min;
}
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
		return min;
	}
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
	{

		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 1; i < n; i++)
	{

		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int maxValueIn(char arr[], const int n)
{
	double max = arr[0];

	for (int i = 1; i < n; i++)
	{

		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
		return max;
	}
}

void shiftLeft(int arr[], const int n)
{
	int number_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n)
{
	int number_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n)
{
	int number_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}


void shiftRight(int arr[], const int n)
{
	int number_shifts;
	cout << "Введите количество сдвигов вправо: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(double arr[], const int n)
{
	int number_shifts;
	cout << "Введите количество сдвигов вправо: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int n)
{
	int number_shifts;
	cout << "Введите количество сдвигов вправо: "; cin >> number_shifts;
	for (int i = 0; i < number_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique; //Флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true; //предполагаем, что случ число уникально, НО это нужно проверить
			for (int j = 0; j < i; j++) // Проверка уникальности
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break; //Ключевое слово прерывает текущую итерацию и все последующие
				}
			}

		} while (!unique);
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique; //Флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true; //предполагаем, что случ число уникально, НО это нужно проверить
			for (int j = 0; j < i; j++) // Проверка уникальности
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break; //Ключевое слово прерывает текущую итерацию и все последующие
				}
			}

		} while (!unique);
	}
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique; //Флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true; //предполагаем, что случ число уникально, НО это нужно проверить
			for (int j = 0; j < i; j++) // Проверка уникальности
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break; //Ключевое слово прерывает текущую итерацию и все последующие
				}
			}

		} while (!unique);
	}
}

	