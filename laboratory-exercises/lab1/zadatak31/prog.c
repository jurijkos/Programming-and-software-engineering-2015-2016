#include <stdio.h>
#include <math.h>
int main(void) {
	int a = 0, b = 0;
	printf("Unesi prvi broj\n");
	scanf("%d", &a);
	printf("Unesi drugi broj\n");
	scanf("%d", &b);
	if (a + b > 0) {
		printf("Aritmeticka sredina brojeva %d i %d je %.3lf\n", a, b, (a + b) /2.0);
	} 
	else {
		printf("Izracunata vrijednost: %.3lf\n", fabs(1.0 / (double)a + 1.0 / (double)b));
	}
	
	return 0;
}
