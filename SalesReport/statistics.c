#include "statistics.h"

float Average(float values[]) {
	int size = sizeof(values) / sizeof(values[0]);
	float toReturn = 0;
	for (int i = 0; i < size; i++) {
		toReturn += values[i];
	}
	return toReturn / (float)size;
}

float Min(float values[]) {
	return values[MinIndex(values)];
}

float Max(float values[]) {
	return values[MaxIndex(values)];
}

int MinIndex(float values[]) {
	int size = sizeof(values) / sizeof(values[0]);
	int min = 0;
	for (int i = 1; i < size; i++) {
		if (values[min] > values[i]) {
			min = i;
		}
	}
	return min;
}

int MaxIndex(float values[]) {
	int size = sizeof(values) / sizeof(values[0]);
	int max = 0;
	for (int i = 1; i < size; i++) {
		if (values[max] < values[i]) {
			max = i;
		}
	}
	return max;
}