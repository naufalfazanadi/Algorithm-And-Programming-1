#include <stdio.h>
#define LIMIT 5 //jangan pake ; // konstan


int main () {

	// bracket []
	// disebut misal isi sub 2
	int indeks;
	int isi[LIMIT];

	// mengisi isi array dengan mengkali 2 kan indeks
	for (indeks=0;indeks < LIMIT;indeks+=1) {
		isi[indeks] = 2 * indeks;
	}

	// mendisplay kan si indeks dan isi array
	for (indeks=0;indeks<LIMIT;indeks+=1) {
		printf("nomor %d, isi %d\n", indeks ,isi[indeks]);
	}

	return 0;
}