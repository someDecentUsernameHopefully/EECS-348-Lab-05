#ifndef SIZE
#define SIZE 5
#endif
#include <stdio.h>
#include "matrixOperations.h"

int main() {

	int m1[SIZE][SIZE] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};

	int m2[SIZE][SIZE] = {
		{25, 24, 23, 22, 21},
		{20, 19, 18, 17, 16},
		{15, 14, 13, 12, 11},
		{10, 9, 8, 7, 6},
		{5, 4, 3, 2, 1}
	};

	{
		// Code blocks make int result local.
		printf("The two matrices on the instructions added are:\n\n");

		int result[SIZE][SIZE];
		AddMatrices(m1, m2, result[0]);
		PrintMatrix(result);
	}
	
	{
		printf("\n\nm1 * m2 is:\n\n");

		int result[SIZE][SIZE];
		MultiplyMatrices(m1, m2, result[0]);
		PrintMatrix(result);
	}

	{
		printf("\n\nm2 * m1 is:\n\n");

		int result[SIZE][SIZE];
		MultiplyMatrices(m2, m1, result[0]);
		PrintMatrix(result);
	}

	{
		printf("\n\nThe first matrix transposed is:\n\n");

		int result[SIZE][SIZE];
		TransposeMatrix(m1, result[0]);
		PrintMatrix(result);
	}

	{
		printf("\n\nThe second matrix transposed is:\n\n");

		int result[SIZE][SIZE];
		TransposeMatrix(m2, result[0]);
		PrintMatrix(result);
	}

	return 1;

}