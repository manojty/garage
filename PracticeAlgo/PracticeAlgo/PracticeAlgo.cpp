// PracticeAlgo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PracticeAlgo.h"

using namespace std;


void quickSort(int a[10], int s, int e)
{
	if (s == e || s > e) return;

	int pivot = a[s];
	int i = s; int j = e;

	while (i < j)
	{
		while (a[i] <= pivot && i<=j) { i++; }
		while (a[j] >= pivot && i <= j) { j--; }
		if (i > j) { i--; }
		if (j < i) { j++; }
		if (i < j) { int tmp = a[i]; a[i] = a[j]; a[j] = tmp; }
		if (i == j) { a[s] = a[i];  a[i] = pivot; quickSort(a, s, i - 1); quickSort(a, i + 1, e); }
	}

}

void arrayAlgo()
{

	int i;
	/*int spiral[SIZE_ROWS][SIZE_COLS] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} }; */
	int spiral[SIZE_ROWS][SIZE_COLS] = { { 1,2,3,4 } };
	printSpiral(spiral, SIZE_ROWS, SIZE_COLS);
	cin >> i;
}

void printSpiral(int a[SIZE_ROWS][SIZE_COLS], int rows, int cols)
{
	int rowCount = 0; int colCount = 0;
	int startColCounter = 0; int startRowCounter = 0; int endRowCounter = 0; int endColCounter = 0;
	int i = -1, j = -1;
	while (rowCount != SIZE_ROWS && colCount != SIZE_COLS)
	{
		//left to right across columns
		startRowCounter = ++j;
		startColCounter = ++i;
		endColCounter = startColCounter + (cols - colCount);

		for (i = startColCounter, j = startRowCounter; i <endColCounter; i++)
		{
			cout << a[j][i] << " ";

		}

		//Top to down across rows
		startRowCounter = ++j;
		rowCount++;
		startColCounter = --i;
		endRowCounter = startRowCounter + (rows - rowCount);

		for (i = startColCounter, j = startRowCounter; j < endRowCounter; j++)
		{
			cout << a[j][i] << " ";

		}

		//Right to left across columns 
		colCount++;
		startColCounter = --i;
		endColCounter = startColCounter - (cols - colCount);
		startRowCounter = --j;

		for (i = startColCounter, j = startRowCounter; i > endColCounter; i--)
		{
			cout << a[j][i] << " ";

		}

		//Bottom to top acorss rows
		rowCount++;
		startRowCounter = --j;
		endRowCounter = startRowCounter - (rows - rowCount);
		startColCounter = ++i;

		for (i = startColCounter, j = startRowCounter; j > endRowCounter; j--)
		{
			cout << a[j][i] << " ";

		}

		colCount++;

	}

}

int main()
{
	//arrayAlgo();
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	quickSort(a, 0, 9);
	return 0;
}