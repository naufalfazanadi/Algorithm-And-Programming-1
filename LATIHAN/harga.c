#include <stdio.h>

int main () {

	int harga,total,hargadiskon;
	float diskon;
	
	scanf ("%d", &harga);
	scanf ("%f", &diskon);

	hargadiskon = harga * (diskon / 100);
	total = harga - hargadiskon;

	printf ("Rp. %d", total);
	return 0;
}