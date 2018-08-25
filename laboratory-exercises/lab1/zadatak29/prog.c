#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void) {
	double p_kruga = 0.0, p_kvadrata = 0.0, r = 0.0, a = 0.0;
	printf("Unesi provrsinu kruga:\n");
	scanf("%lf", &p_kruga);
	printf("Unesi provrsinu kvadrata:\n");
	scanf("%lf", &p_kvadrata);
	r =  sqrt(p_kruga / PI);
	a = sqrt(p_kvadrata);
	printf("Polumjer kruga = %.3lf\n", r);
	printf("Stranica kvadrata = %.3lf\n", a);
	if ((2 * r) < a) {
		printf("Krug je moguce smjestiti unutar kvadrata\n");
	}
	else {
		printf("Krug nije moguce smjestiti unutar kvadrata\n");
	}
	return 0;
}
