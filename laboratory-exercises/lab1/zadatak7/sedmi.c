#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n % 2 == 0) {
		if (n % 3 == 0) {
			printf("Broj %d je djeljiv sa 6.\n", n);
		}
		else {
			printf("Broj %d nije djeljiv sa 6 jer nije djeljiv s 3.\n", n);
		}
	}
	else {
		if (n % 3 == 0) {
			printf("Broj %d nije djeljiv sa 6 jer nije djeljiv s 2.\n", n);
		}
		else {
			printf("Broj %d nije djeljiv s 6 jer nije djeljiv ni s 2 ni s 3.\n", n);
		}
	}
	return 0;
}
