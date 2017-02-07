#include <stdio.h>

int main () {
	int nilai1, nilai2, tambah, kurang, kali, bagi, modulus;
	char simbol;

	printf("Masukan angka pertama, ");
	scanf ("%d", &nilai1);
	printf("Masukan angka kedua, ");
	scanf ("%d", &nilai2);
	printf("Masukan simbol terhadap kedua angka tersebut, ");
	scanf ("%c", &simbol);
	scanf ("%c", &simbol);

	tambah = nilai1 + nilai2;
	kurang = nilai1 - nilai2;
	kali = nilai1 * nilai2;
	bagi = nilai1 / nilai2;
	modulus = nilai1 % nilai2;

	if (simbol == '+') {
		printf("\nTambah : %d", tambah);
	}
	else if (simbol == '-') {
		printf("\nKurang : %d", kurang);
	}
	else if (simbol == '*') {
		printf("\nKali : %d", kali);
	}
	else if (simbol == '/') {
		printf("\nBagi : %d", bagi);
	}
	else if (simbol == '%') {
		printf("\nModulus : %d\n", modulus);
	}

	return 0;
}