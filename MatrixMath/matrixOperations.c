#ifndef SIZE
#define SIZE 5
#endif
#include <stdio.h>
#include <stdlib.h>
#include "matrixOperations.h"

int AddMatrices(int m1Rows, int m1Col, int m2Rows, int m2Col, int m1[m1Rows][m1Col], int m2[m2Rows][m2Col], int* storeResult) {
	if (m1Col != m2Col || m1Rows != m2Rows) {
		// The default error behavior is to simply return 0.
		return 0;
	}

	for (int i = 0; i < m1Rows; i++) {
		for (int j = 0; j < m1Col; j++) {
			*(storeResult + m1Col * i + j) = m1[i][j] + m2[i][j];
		}
	}

	return 1;
}

int MultiplyMatrices(int m1Rows, int m1Col, int m2Rows, int m2Col, int m1[m1Rows][m1Col], int m2[m2Rows][m2Col], int* storeResult) {
	
	if (m1Col != m2Rows) {
		return 0;
	}
	
	for (int i = 0; i < m1Rows; i++) {
		for (int j = 0; j < m2Col; j++) {
			*(storeResult + m2Col * i + j) = 0;
			for (int k = 0; k < m1Col; k++) {
				*(storeResult + m2Col * i + j) += m1[i][k] * m2[k][j];
			}
		}
	}

	return 1;
}

int TransposeMatrix(int rows, int col, int matrix[rows][col], int* storeResult) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			*(storeResult + col * i + j) = matrix[j][i];
		}
	}

	return 1;
}

void PrintMatrix(int rows, int col, int matrix[rows][col]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d", matrix[i][j]);
			if (j + 1 < col) {
				printf("\t");
			}
		}
		printf("\n");
	}
}

