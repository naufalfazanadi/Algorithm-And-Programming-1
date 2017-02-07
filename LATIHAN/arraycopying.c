#include <stdio.h>
#define LIMIT 6

int main () {
	int indeks;
	int isi1[LIMIT];
	int isi2[LIMIT];

	// copy array
	for (indeks=0;indeks<LIMIT;indeks+=1) {
		isi1[indeks]=2*indeks;
		isi2[indeks]=isi1[indeks];
		printf("%d\n",isi2[indeks]);
	}
	printf("=================\n");
	// copy array terbalik
	for (indeks=0;indeks<LIMIT;indeks+=1) {
		isi1[indeks]=indeks;
	}
	for (indeks=0;indeks<LIMIT;indeks+=1) {
		// membalikan misal LIMIT = 6, indeks = 0
		// maka si arraynya ke array 5, lalu LIMIT = 6 , indeks=1
		// maka si arraynya ke array 4
		isi2[LIMIT-indeks-1]=isi1[indeks];
	}
	for (indeks=0;indeks<LIMIT;indeks+=1) {
		printf("%d\n",isi2[indeks]);
	}
	return 0;
}