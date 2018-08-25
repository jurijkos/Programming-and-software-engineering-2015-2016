#include <stdio.h>

int main(void) {
	int a = 0, b = 0, min_paran = 0;
	printf("Unesi prvi broj\n");
	scanf("%d", &a);
	printf("Unesi drugi broj\n");
	scanf("%d", &b);
	if (a % 2 == 0 && b % 2 == 0) {
		min_paran = a < b ? a : b;
	}
	else if (a % 2 == 0) {
		min_paran = a;
	}
	else if (b % 2 == 0) {
		min_paran = b;
	}
	else {
		printf("Niti jedan broj nije paran.\n");
		return 0;
	}
	printf("Manji paran broj je %d\n", min_paran);
	
	return 0;
}
