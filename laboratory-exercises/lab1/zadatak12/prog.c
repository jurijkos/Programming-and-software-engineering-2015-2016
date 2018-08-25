#include <stdio.h>

int main(void) {
	int n, m, operacija;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &operacija);
	if (operacija == 1) {
		printf("%d + %d = %d\n", n, m, n + m);
	}
	else {
		printf("%d - %d = %d\n", n, m, n - m);
	}
	return 0;
}
