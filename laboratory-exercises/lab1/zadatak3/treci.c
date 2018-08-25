#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	printf("Srednja znamenka broja %d je %d\n", n, (abs(n) / 10) % 10);
	return 0;
}
