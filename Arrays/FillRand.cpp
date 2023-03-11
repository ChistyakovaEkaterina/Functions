#include "FillRand.h"
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100; maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
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