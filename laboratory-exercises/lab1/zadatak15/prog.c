#include <stdio.h>

int main(void) {
	int n, m, sati, minute, sekunde;
	scanf("%d", &n);
	m = n;
	sati = n / 3600;
	n = n - sati * 3600;
	minute = n / 60;
	n = n - minute * 60;
	sekunde = n;
	printf("sekudne: %d, sati-minute-sekunde: %d-%d-%d\n", m, sati, minute, sekunde);
	return 0;
} 
