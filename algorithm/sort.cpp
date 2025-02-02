#include "Sort.h"
#include <algorithm>
#include <iostream>


void bubbleSort(int list[], int n) 
{
	// i번 반복

	for (int i = n - 1; i > 0; i--) 
	{
		for (int j = 0; j < i; j++) 
		{
			if (list[j] > list[j + 1])
				std::swap(list[j], list[j + 1]);


		}


	}

	// for (int i =1; i < n; i++)  버블 정렬 구현


}



void bubbleSort2(int list[], int n) 
{
	// i번 반복

	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (list[j] > list[j + 1])
				std::swap(list[j], list[j + 1]);


		}


	}
}


void BubbleExample() 
{
	int list[] = { 7, 5, 3, 6, 9 };

	bubbleSort2(list, 5);

	for (int i = 0; i < 5; i++) 
	{
		std::cout << list[i] << " ";

	}

	std::cout << std::endl;

}


void selectionSort(int list[], int n) 
{
	// n사이클
	int least;

	for (int i = 0; i < n; i++) 
	{
		least = i;

		for (int j = i + 1; j < n; j++)
		{
			if (list[j] < list[least])
			{
				least = j;
			}
		}

		if (least != i)
		{
			std::swap(list[i], list[least]);

		}

	}

	//최소값을 찾아서, least 인덱스와 swap을 해라

}


void SelectionExample()
{

	int list[] = { 7, 5, 3, 6, 9 };

	selectionSort(list, 5);
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << list[i] << " ";
	}
	

}



void InsertionSort(int list[], int n)
{

	int j;

	for (int i = 0; i < n - 1; i++)
	{
		j = i;

		while (list[j] > list[j + 1] && j >= 0) // 오름차순
		{
			std::swap(list[j], list[j + 1]);
			j--;

		}

	}

	std::cout << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << list[i] << " ";

	}
}
void InsertSortExample()
{
	int list[7] = { 1, 10, 5, 4, 7, 6, 3 };
	
	InsertionSort(list, 7);


}

void CountSort()
{
	int array[15] = { 3, 0 ,4 ,0, 2,
		              1, 2, 3, 4 ,4, 
		              2, 3, 1, 0, 2 };

	int count[5];

	for (int i = 0; i < 5; i++)
	{

		count[i] = 0;

	}

	for (int i = 0; i < 15; i++)
	{

		count[array[i]]++;
	}

	// count 인덱스 번호 숫자, 값 크가

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				std::cout << i << " ";

			}

		}


	}


}
