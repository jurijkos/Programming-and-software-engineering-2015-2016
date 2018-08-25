#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	if (n % 3 == 0) {
		if (n % 10 == 8) {
			printf("Broj %d je djeljiv s 3 i zadnja znamenka mu je 8.\n", n);
		}
		else {
			printf("Broj %d je djeljiv s 3 i zadnja znamenka mu nije 8.\n", n);
		} 	
	}
	else {
		if (n % 10 == 8) {
			printf("Broj %d nije djeljiv s 3 i zadnja znamenka mu je 8.\n", n);
		}
		else {
			printf("Broj %d nije djeljiv s 3 i zadnja znamenka mu nije 8.\n", n);
		}
	}
	return 0;
} 
