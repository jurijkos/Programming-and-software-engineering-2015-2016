#include <stdio.h>
int main(void) {
	int a, b;
	printf("Unesi broj: ");
	scanf("%d", &a);
	printf("Unesi broj: ");
	scanf("%d", &b);
	if (a == b) {
		printf("Brojevi moraju biti razliciti\n");
	}
	else if (a % b == 0) {
		printf("Broj %d je visekratnik broja %d\n", a, b);
	}
	else if (b % a == 0) {
		printf("Broj %d je viskratnik broja %d\n", b, a);
	}
	else {
		printf("Niti jedan ucitani broj nije visekratnik drugoga\n"); 
	}
	return 0;
}
