#include <stdio.h>

#define PI 3.14159

int main(void) {
	double r = 0.0f;
	scanf("%lf", &r);
	if ( r < 0.0) {
		printf("Duljina stranice mora biti pozitivan broj.\n");
		return -1;
	}
	printf("Povrsina trokuta: %.2lf\n", r * r / 2.0);
	printf("Povrsina kruga: %.2lf\n", r * r * PI);	
	return 0;
}
