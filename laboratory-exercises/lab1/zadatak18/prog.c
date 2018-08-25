#include <stdio.h>

int main(void) {
	int a, b, c;
	printf("Unesi broj: ");
	scanf("%d", &a);
	printf("Unesi broj: ");
	scanf("%d", &b);
	printf("Unesi broj: ");
	scanf("%d", &c);
	if (a + b == c) {
		printf("%d + %d = %d\n", a, b, c);
	}
	else if (a + c == b) {
		printf("%d + %d = %d\n", a, c, b);
	}
	else if (b + c == a) {
		printf("%d + %d = %d\n", b, c, a);
	}
	else {
		printf("Niti jedan broj nije jednak zbroju preostalih brojeva\n");
	}
	return 0;
}
