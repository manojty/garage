// PracticeAlgo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PracticeAlgo.h"


int main()
{
	arrayAlgo();
	return 0;
}


void arrayAlgo()
{

	int spiral[SIZE_ROWS][SIZE_COLS] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
	printSpiral(spiral, 4, 4);
}

void printSpiral(int a[SIZE_ROWS][SIZE_COLS], int rows, int cols)
{

}
