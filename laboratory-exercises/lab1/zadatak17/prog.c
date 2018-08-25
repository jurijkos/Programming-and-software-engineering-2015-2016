#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double cijena;
	int postotak;
	printf("Unesi cijenu proizvoda: ");
	scanf("%lf", &cijena);
	printf("Unesi koliko posto je snizen proizvod: ");
	scanf("%d", &postotak);
	if (cijena < 0.0) {
		printf("Cijena mora biti pozitivni broj.\n");
		exit(1);
	}
	if (postotak <= 0) {
		printf("Postotak snizenja mora biti prirodan broj.\n");
		exit(1);
	}
	printf("Cijena %.2lf umanjena za %d posto iznosi %.2lf.\n", cijena, postotak, cijena * (1.0 - postotak / 100.0));
	return 0;
}
	
	
	
