#include <stdio.h>
#include <stdlib.h>
int main(void) {
	double x, y;
	printf("Unesi broj: ");
	scanf("%lf", &x);
	if(x < 0.0) {
		y = -x;
	}
	else {
		y = 2 * x / 3 + 3;
	}
	printf("x = %.2lf y = %.2lf\n", x, y);
	return 0;
}
