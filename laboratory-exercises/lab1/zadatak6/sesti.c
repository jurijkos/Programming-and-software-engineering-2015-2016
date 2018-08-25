#include <stdio.h>
 int main(void) {
 	int n, m;
 	scanf("%d", &n);
 	scanf("%d", &m);
 	if (n % 10 + n / 10 > m % 10 + m / 10) {
 		printf("Broj %d ima vecu sumu znamenaka od broja %d.\n", n, m);
 	}
 	else if (n % 10 + n / 10 == m % 10 + m / 10) {
 		printf("Brojevi %d i %d imaju jednaku sumu znamenaka.\n", n, m);
 	}
 	else {
 		printf("Broj %d ima vecu sumu znamenaka od broja %d.\n", m, n);
 	}
 	return 0;
 } 
