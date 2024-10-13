#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

const char* MONTHS[12] = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main() {
	float allSales[12];
	char filename[32];
	printf("Enter the name of an input file:\n");
	// Get input file, open it, read values
	scanf("%s", filename);
	FILE *f = fopen(filename, "r");
	for (int i = 0; i < 12; i++) {
		char data[32];
		fgets(data, 32, f);
		allSales[i] = strtof(data, NULL);
	}

	printf("Monthly Sales Report for 2024:\n\nMonth\tSales\n");
	for (int i = 0; i < 12; i++) {
		printf("%s\t$%.2f\n", MONTHS[i], allSales[i]);
	}
	printf("\n\nSales Summary Report:\n\nMinimum Sales: $%.2f (%s)\nMaximum Sales: $%.2f (%s)\nAverage Sales: $%.2f\n\n",
			Min(allSales, 12),
			MONTHS[MinIndex(allSales, 12)],
			Max(allSales, 12),
			MONTHS[MaxIndex(allSales, 12)],
			Average(allSales, 12));	
	printf("Six-Month Moving Average Report:\n\n");
	for (int j = 0; j < 7; j++) {
		float* ptr = malloc(6*sizeof(float));
		int n = j;
		Slice(allSales, ptr, n, n + 6);
		printf("%s-%s\t%.2f\n", MONTHS[j], MONTHS[j + 5], Average(ptr, 6));
		free(ptr);
	}

	printf("\n\nSales report (highest to lowest):\n\nMonth\tSales\n");

	int* sortedIndexes = malloc(sizeof(int) * 12);
	SortedPositions(allSales, sortedIndexes, 12);
	for (int i = 11; i >= 0; i--) {
		printf("%s\t%.2f\n", MONTHS[sortedIndexes[i]], allSales[sortedIndexes[i]]);
	}

	return 1;
}