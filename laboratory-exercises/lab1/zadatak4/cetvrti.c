#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	if (n < 1) {
		printf("Nesipravan broj.\n");
	}
	else {
		if (n % 2 == 0) {
			printf("Paran broj.\n");
		}
		else {
			printf("Neparan broj.\n");
		}
	}
	return 0;
}
	
