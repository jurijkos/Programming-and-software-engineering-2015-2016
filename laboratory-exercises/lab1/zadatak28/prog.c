#include <stdio.h>

int main(void) {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	printf("Unesi x-kordinatu prve tocke\n");
	scanf("%d", &x1);
	printf("Unesi y-kordinatu prve tocke\n");
	scanf("%d", &y1);
	printf("Unesi x-kordinatu druge tocke\n");
	scanf("%d", &x2);
	printf("Unesi y-kordinatu druge tocke\n");
	scanf("%d", &y2);
	if (x1 == x2) {
		printf("Pravac koji prolazi tockama (%d, %d) i (%d, %d) je paralelan s y osi.\n", x1, y1, x2, y2);
	}
	else if (y1 == y2) {
		printf("Pravac koji prolazi tockama (%d, %d) i (%d, %d) je paralelan s x osi.\n", x1, y1, x2, y2);
	}
	else {
				printf("Pravac koji prolazi tockama (%d, %d) i (%d, %d) nije paralelan niti s jednom osi.\n", x1, y1, x2, y2);

	}		
}
