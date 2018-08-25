#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	if (m % 10 == 0) {
		printf("Djeljenje nije moguce.\n");
	}
	else {
		printf("%d / %d = %.2lf\n", n, m, n / (double)m);
	}
	return 0;
}
