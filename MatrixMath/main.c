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
		// Code blocks make int result and success local.
		int result[SIZE][SIZE];
		int success = AddMatrices(SIZE, SIZE, SIZE, SIZE, m1, m2, result[0]);
		if (success) {
			printf("The two matrices on the instructions added are:\n\n");
			PrintMatrix(SIZE, SIZE, result);
		}
		else {
			printf("m1 and m2 cannot be added.");
		}
	}
	
	{
		int result[SIZE][SIZE];
		int success = MultiplyMatrices(SIZE, SIZE, SIZE, SIZE, m1, m2, result[0]);
		if (success) {
			printf("\n\nm1 * m2 is:\n\n");
			PrintMatrix(SIZE, SIZE, result);
		}
		else {
			printf("m1 and m2 cannot be multiplied in that order.");
		}
	}

	{
		int result[SIZE][SIZE];
		int success = MultiplyMatrices(SIZE, SIZE, SIZE, SIZE, m2, m1, result[0]);
		if (success) {
			printf("\n\nm2 * m1 is:\n\n");
			PrintMatrix(SIZE, SIZE, result);
		}
		else {
			printf("m2 and m1 cannot be multiplied in that order.");
		}
	}

	{
		int result[SIZE][SIZE];
		int success = TransposeMatrix(SIZE, SIZE, m1, result[0]);
		if (success) {
			printf("\n\nThe first matrix transposed is:\n\n");
			PrintMatrix(SIZE, SIZE, result);
		}
		else {
			printf("m1 cannot be transposed.");
		}
	}

	{
		int result[SIZE][SIZE];
		int success = TransposeMatrix(SIZE, SIZE, m2, result[0]);
		if (success) {
			printf("\n\nThe second matrix transposed is:\n\n");
			PrintMatrix(SIZE, SIZE, result);
		}
		else {
			printf("m2 cannot be transposed.");
		}
	}

	return 1;

}