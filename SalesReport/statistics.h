#ifndef Statistics_H
#define Statistics_H

float Average(float values[], int length);
float Min(float values[], int size);
float Max(float values[], int size);
int MinIndex(float values[], int size);
int MaxIndex(float values[], int size);
void Slice(float originalArray[], float* copyTo, int start, int end);
void SortedPositions(float toSort[], int* copyResultsTo, int size);
void SwapFlt(float* value1, float *value2);
void SwapInt(int* value1, int* value2);

#endif