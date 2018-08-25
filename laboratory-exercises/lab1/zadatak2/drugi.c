#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n / 10 == 5) {
		printf("Zadnja znamenka broja %d je %d\n", n, n % 10);
	}
	else {
		printf("Prva znamenka broja %d je %d\n", n, abs(n) / 10);
	}
	return 0;
}
