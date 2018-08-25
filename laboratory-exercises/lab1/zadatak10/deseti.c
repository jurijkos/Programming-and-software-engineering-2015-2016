#include <stdio.h>
#include <math.h>

int main(void) {
	int n, armstrong;
	scanf("%d", &n);
	armstrong = pow(n % 10, 3) + pow(n / 10 % 10, 3) + pow(n / 100, 3);
	if (n == armstrong) {
		printf("Broj %d je Armstrongov broj.\n", n);
	}
	else {
		printf("Broj %d nije Armstrongov broj.\n", n);
	}
	return 0;
} 
