#include <stdio.h>

int main(void) {
	int a = 0, b = 0, c = 0;
	printf("Unesi prvi broj\n");
	scanf("%d", &a);
	printf("Unesi drugi broj\n");
	scanf("%d", &b);
	printf("Unesi treci broj\n");
	scanf("%d", &c);
	if (a < b && b < c) {
		if (c - b == b - a) {
			printf("Brojevi %d, %d, %d su poredni uzlazno(razlika izmedu susjednih brojeva iznosi %d)\n",a ,b, c, b - a);
		}
		else {
			printf("Brojevi %d, %d, %d su poredni uzlazno(razlika izmedu susjednih brojeva nije jednaka)\n",a ,b, c);
		}
	}
	else {
		printf("Brojevi %d, %d, %d nisu poredni uzlazno\n",a ,b, c);
	}
	return 0;
}
