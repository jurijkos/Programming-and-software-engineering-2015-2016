#include <stdio.h>

int main(void) {
	int minute, sekunde;
	scanf("%d", &minute);
	scanf("%d", &sekunde);
	if (sekunde > 59) {
		printf("Neispravan broj sekundi.\n");
	}
	else {
		printf("sekunde: %d; sati: %.3lf\n", minute * 60 + sekunde, minute / 60.0 + sekunde /3600);
	}
	return 0;
}
