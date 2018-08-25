#include <stdio.h>

int main(void) {
	double a[3];
	printf("Unesi broj: ");
	scanf("%lf", &a[0]);
	printf("Unesi broj: ");
	scanf("%lf", &a[1]);
	printf("Unesi broj: ");
	scanf("%lf", &a[2]);
	double min = a[0], max = a[0];
	for (int i = 0; i < 3; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("Broj %lf je najmanji, a %lf je najveci od ucitanih brojeva\n", min, max);
	return 0;
}
