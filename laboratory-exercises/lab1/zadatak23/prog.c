#include <stdio.h>
#include <math.h>

int main(void) {
	double x1 = 0, x2 = 0, rezultat = 0.0;
	printf("Unesi prvi broj:\n");
	scanf("%lf", &x1);
	printf("Unesi drugi broj:\n");
	scanf("%lf", &x2);
	if (fabs(x1 - x2) < 0.01) {
		rezultat = pow(x1, 2) - 3;
	}
	else if (x1 < x2) {
		rezultat = x1 / x2;
	}
	else {
		rezultat = 4 * x1 + 3 * x2;
	}
	printf("x1 = %.2lf, x2 = %.2lf, y = %.2lf\n", x1, x2, rezultat);
	return 0;
}
