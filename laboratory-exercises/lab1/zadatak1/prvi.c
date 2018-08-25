#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if (n % 10 < 5) {
		printf("Zadnja znamenka broja %d je %d.\n", n, n % 10);
	}
	else {
		printf("Zadnje dvije znamenke broja %d su %d.\n", n, n % 100);
	}
	return 0;
}	
