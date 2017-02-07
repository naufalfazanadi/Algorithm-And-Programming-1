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
	int indeks;

	// loop tambah
	for ( indeks = 0;indeks < 10;indeks += 1 ){
		printf("%d\n",indeks);
	}

	// pembatas
	printf("===============================\n");
	// loop kurang
	for ( indeks = 9;indeks >= 0;indeks -= 1 ){
		printf("%d\n",indeks);
	}
 	return 0;
}