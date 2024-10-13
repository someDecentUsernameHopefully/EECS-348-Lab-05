#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

float Average(float values[], int size) {
	float toReturn = 0;
	for (int i = 0; i < size; i++) {
		toReturn += values[i];
	}
	return toReturn / (float)size;
}

float Min(float values[], int size) {
	return values[MinIndex(values, size)];
}

float Max(float values[], int size) {
	return values[MaxIndex(values, size)];
}

int MinIndex(float values[], int size) {
	int min = 0;
	for (int i = 1; i < size; i++) {
		if (values[min] > values[i]) {
			min = i;
		}
	}
	return min;
}

int MaxIndex(float values[], int size) {
	int max = 0;
	for (int i = 1; i < size; i++) {
		if (values[max] < values[i]) {
			max = i;
		}
	}
	return max;
}

void Slice(float originalArray[], float* copyTo, int start, int end) {
	for (int i = start; i < end; i++) {
		*(copyTo + i - start) = originalArray[i];
	}
}

void SortedPositions(float toSort[], int* copyResultsTo, int size) {
	float* toSortCopy = malloc(size * sizeof(float));

	// Gives the positions of values in a sorted list compared to the original at copyResultsTo
	for (int i = 0; i < size; i++) {
		copyResultsTo[i] = i;
		*(toSortCopy + i) = *(toSort + i);
	}

	// Selection Sort, I confused this with Insertion sort for a moment.
	for (int i = 0; i < size - 1; i++) {
		float* unsorted = malloc((size - i) * sizeof(float));
		Slice(toSortCopy, unsorted, i, size);
		int minIndex = MinIndex(unsorted, size - i);
		SwapFlt(toSortCopy + i, toSortCopy + (minIndex + i));
		SwapInt(copyResultsTo + i, copyResultsTo + (minIndex + i));
		free(unsorted);
	}

	free(toSortCopy);
	
}

void SwapFlt(float* value1, float* value2) {
	float temp = *value2;
	*value2 = *value1;
	*value1 = temp;
}

void SwapInt(int* value1, int* value2) {
	int temp = *value2;
	*value2 = *value1;
	*value1 = temp;
}