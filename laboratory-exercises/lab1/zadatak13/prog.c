#include <stdio.h>

int main(void) {
	int n, m, temp;
	scanf("%d", &n);
	scanf("%d", &m);
	if (n >= m) {
		printf("Brojevi nisu dobro zadani.\n");
	}
	else {
		temp = n;
		n = m;
		m = temp;
		printf("x = %d y = %d\n", n, m);
	}
	return 0;
}
