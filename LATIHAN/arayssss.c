/**
 * saran mr raphael...
 * 1. i diganti dengan yang lebih jelas seperti indeks
 * 2. dalam loop lebih baik menggunakan <
 * 3. lebih baik pakai += bukan ++
 * 4. selalu gunakan braces {}
 * 5. setiap akhir braces gunakan komentar, good idea...
 * 6. dalam main juga lebih baik gunakan komen
 * 7. retun 0 untuk suskes
 */

#include <stdio.h>

int main () {
	// bracket []
	// disebut misal isi sub 2
	int indeks;
	int isi[10];

	// mengisi isi array dengan mengkali 2 kan indeks
	for (indeks=0;indeks<10;indeks+=1) {
		isi[indeks] = 2 * indeks;
	}

	// mendisplay kan si indeks dan isi array
	for (indeks=0;indeks<10;indeks+=1) {
		printf("nomor %d, isi %d\n", indeks ,isi[indeks]);
	}
	return 0;
}