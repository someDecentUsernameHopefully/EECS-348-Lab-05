#ifndef MatrixMath_H
#define MatrixMath_H

int AddMatrices(int m1Rows, int m1Col, int m2Rows, int m2Col, int m1[m1Rows][m1Col], int m2[m2Rows][m2Col], int* storeResult);
int MultiplyMatrices(int m1Rows, int m1Col, int m2Rows, int m2Col, int m1[m1Rows][m1Col], int m2[m2Rows][m2Col], int* storeResult);
int TransposeMatrix(int rows, int col, int matrix[rows][col], int* storeResult);
void PrintMatrix(int rows, int col, int matrix[rows][col]);

#endif // !MatrixMath

