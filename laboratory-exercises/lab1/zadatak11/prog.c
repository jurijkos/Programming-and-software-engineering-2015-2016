#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n % 10 == n / 100) {
		printf("Broj %d je palindrom.\n", n);
	}
	else {
		printf("Broj %d nije palindom.\n", n);
	}
	return 0;
}
