#ifndef SIZE
#define SIZE 5
#endif

#ifndef MatrixMath_H
#define MatrixMath_H

void AddMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int* storeResult);
void MultiplyMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE], int* storeResult);
void TransposeMatrix(int m1[SIZE][SIZE], int* storeResult);
void PrintMatrix(int matrix[SIZE][SIZE]);

#endif // !MatrixMath

