#include <stdio.h>
#include "scanReset.h"
#include "statistics.h"

const char* MONTHS[12] = { "January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main() {
	float allSales[12];
	int valuesEntered = 0;
	printf("Enter 12 sales values; one for each month:\n");
	while (valuesEntered < 12) {
		float sales;
		int increment = scanf("%f", &sales);
		if (increment) {
			allSales[valuesEntered] = sales;
			valuesEntered++;
		}
		else {
			printf("That is not a valid value!");
			scanReset();
		}
	}

	printf("Monthly Sales Report for 2024:\n\nMonth\tSales\n");
	for (int i = 0; i < 12; i++) {
		printf("%s\t$%f\n", MONTHS[i], allSales[i]);
	}
	printf("\n\nSales Summary Report:\n\nMinimum Sales: $%f (%s)\nMaximum Sales: $%f (%s)\nAverage Sales: $%f\n",
			Min(allSales),
			MONTHS[MinIndex(allSales)],
			Max(allSales),
			MONTHS[MaxIndex(allSales)],
			Average(allSales));

	return 1;
}