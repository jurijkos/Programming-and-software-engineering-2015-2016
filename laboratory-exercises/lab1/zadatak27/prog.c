#include <stdio.h>

int main(void) {
	int a, b;
	printf("Unesi prvi jednoznamenkasti broj\n");
	scanf("%d", &a);
	printf("Unesi drugi jednoznamenkasti broj\n");
	scanf("%d", &b);
	if (a % 2 == 0 && b % 2 == 0) {
		printf("Parni brojevi kreirani od parnih znamenki %d i %d: %d %d\n", a, b, 10 * a + b, 10 * b + a);
	}
	else if (a % 2 == 0) {
		printf("Parni brojevi kreirani od parnih znamenki %d i %d: %d \n", a, b, 10 * b + a);
	}
	else if (b % 2 == 0) {
		printf("Parni brojevi kreirani od parnih znamenki %d i %d: %d\n", a, b, 10 * a + b);
	}
	else {
		printf("Parni brojevi kreirani od parnih znamenki %d i %d: -\n", a, b);
	}
	
	return 0;
}
