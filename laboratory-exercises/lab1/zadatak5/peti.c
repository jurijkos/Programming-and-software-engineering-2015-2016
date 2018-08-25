#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int umnozak;
	scanf("%d", &n);
	umnozak = (n % 10) * ((n / 10) % 10) * (n / 100);
	printf("Umnozak znamenaka broja %d je %d.\n", n, abs(umnozak));
	return 0;
}
