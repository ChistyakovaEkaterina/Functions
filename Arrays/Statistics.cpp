#include "Statistics.h"
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
	return (double)Sum(arr, n) / n;

}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;

}
double Avg(char arr[], const int n)
{
	return(double)Sum(arr, n) / n;

}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}


int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
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
	cout << "¬ведите количество сдвигов влево: "; cin >> number_shifts;
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
	cout << "¬ведите количество сдвигов влево: "; cin >> number_shifts;
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
	cout << "¬ведите количество сдвигов влево: "; cin >> number_shifts;
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
	cout << "¬ведите количество сдвигов вправо: "; cin >> number_shifts;
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
	cout << "¬ведите количество сдвигов вправо: "; cin >> number_shifts;
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
	cout << "¬ведите количество сдвигов вправо: "; cin >> number_shifts;
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