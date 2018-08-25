#include <stdio.h>
#include <math.h>

int main(void) {
	double x1 = 0, x2 = 0, rezultat = 0.0;
	printf("Unesi prvi broj:\n");
	scanf("%lf", &x1);
	printf("Unesi drugi broj:\n");
	scanf("%lf", &x2);
	if (x1 > x2) {
		rezultat = fabs(x1);
	}
	else {
		rezultat = pow(x1, 2) > pow(x2, 2) ? pow(x1, 2) : pow(x2, 2);
	}
	printf("x1 = %.2lf, x2 = %.2lf, y = %.2lf\n", x1, x2, rezultat);
	return 0;
}
