#include <stdio.h>

int main () {
	//pendefinisian semua variabel
	int nilai1, nilai2, tambah, kurang, kali, bagi, modulus;

	//input data
	printf("Masukan nilai ke 1 : ");
	scanf ("%d", &nilai1);
	printf("Masukan nilai ke 2 : ");
	scanf ("%d", &nilai2);

	//perhitungan aritmatika
	tambah = nilai1 + nilai2;
	kurang = nilai1 - nilai2;
	kali = nilai1 * nilai2;
	bagi = nilai1 / nilai2;
	modulus = nilai1 % nilai2;

	//output hasil perhitungan
	printf("\nTambah : %d", tambah);
	printf("\nKurang : %d", kurang);
	printf("\nKali : %d", kali);
	printf("\nBagi : %d", bagi);
	printf("\nModulus : %d\n", modulus);

	return 0;
}