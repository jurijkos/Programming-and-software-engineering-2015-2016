#include <stdio.h>

int main(void) {
	double x, y;
	scanf("%lf", &x);
	if (x < 0.0) {
		y = 3 * x;
	}
	else if ( x < 1) {
		y = x * x +  3;
	}
	else {
		y = 3 / 4.0 * x+ 1;
	}
	printf("x = %.2lf y = %.2lf\n", x, y);
	return 0;
}
