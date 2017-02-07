#include <stdio.h>
#include <string.h>

int main () {
	char str[27]="abcdefghijklmnopqrstuvwxyz ";

	int i,j,n=0,sum=0;
	int biner[8];
	biner[7] = 1;
	biner[6] = 2;
	biner[5] = 4;
	biner[4] = 8;
	biner[3] = 16;
	biner[2] = 32;
	biner[1] = 64;
	biner[0] = 128;

	char bin[100];

	scanf("%s", &bin);

	for (i = 0 ; i < strlen(bin) ; i++) {
		if (bin[i] == '1') {
			sum = sum + biner[n];
		} else {
			sum = sum;
		}
		n++;
		if (n % 8 == 0) {
			printf("%c", str[sum-1]);
			sum=0;
			n=0;
		}
	}

	printf("\n");

	return 0;
}

/*
SuperCepot menerima pesan sandi dari SuperDawala. SuperDawala menggunakan sandi biner untuk menulis pesannya. Misalkan untuk huruf pertama yaitu a akan ditulis dalam 8 dijit biner 00000001. Sehingga jika SuperDawala ingin menulis aku maka akan menulis dalam desimal 1 untuk a, 11 untuk k, dan 21 untuk u maka kode biner yang ditulis SuperDawala adalah

000000010000101100010101

Urutan huruf adalah a-z kemudian diikuti dengan spasi (dianggap karakter ke 27) (huruf yang dipakai hanya huruf kecil)

SuperCepot butuh melakukan dekripsi pesan yang dikirim SuperDawala

Format Masukan


enkripsi biner dawala 

Format Keluaran


hasil dekripsi biner dawala 

Contoh Masukan

000000010000101100010101


Contoh Keluaran

aku

 */