#ifndef SIZE
#define SIZE 5
#endif
#include <stdio.h>
#include <stdlib.h>
#include "matrixOperations.h"

void AddMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int* storeResult) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			*(storeResult + SIZE * i + j) = m1[i][j] + m2[i][j];
		}
	}
}

void MultiplyMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int* storeResult) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			*(storeResult + SIZE * i + j) = 0;
			for (int k = 0; k < SIZE; k++) {
				*(storeResult + SIZE * i + j) += m1[i][k] * m2[k][j];
			}
		}
	}
}

void TransposeMatrix(int matrix[SIZE][SIZE], int* storeResult) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			*(storeResult + SIZE * i + j) = matrix[j][i];
		}
	}
}

void PrintMatrix(int matrix[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%d", matrix[i][j]);
			if (j + 1 < SIZE) {
				printf("\t");
			}
		}
		printf("\n");
	}
}