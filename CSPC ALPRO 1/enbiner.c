#include <stdio.h>
#include <string.h>

int main () {
	char str[27]="abcdefghijklmnopqrstuvwxyz ";
	char input[100];

	int n = 0;
	int outbin[100][8];
	int i,j,sum[100];
	for (i = 0 ; i < 100 ; i++) {
		for (j = 0 ; j < 8 ; j++) {
			outbin[i][j]=0;
		}
	}
	int biner[8];
	biner[7] = 1;
	biner[6] = 2;
	biner[5] = 4;
	biner[4] = 8;
	biner[3] = 16;
	biner[2] = 32;
	biner[1] = 64;
	biner[0] = 128;

	scanf("%s", &input);

	for (i = 0 ; i < strlen(input) ; i++) {
		for (j = 0 ; j < 27 ; j++) {
			if (input[i] == str[j]) {
				sum[i] = j+1;
			}
		}
	}
	// ========================================
	// for (i = 0 ; i < strlen(input) ; i++) {
		// printf("%d ", sum[i]);
	// }
	// ========================================
	for (i = 0 ; i < strlen(input) ; i++) {
		while (sum[i] != n) {
			n++;
			outbin[i][7]++;
			for (j = 7 ; j >= 0 ; j--) {
				if (outbin[i][j]==2) {
					outbin[i][j-1]++;
					outbin[i][j]=outbin[i][j]-2;
				}
			}	
		}
		n=0;
	}
	for (i = 0 ; i < strlen(input) ; i++) {
		for (j = 0 ; j < 8 ; j++) {
			printf("%d", outbin[i][j]);
		}
	}
	printf("\n");
	return 0;
}

/*
SuperDawala ingin mengirim pesan sandi ke temannya. SuperDawala menggunakan sandi biner untuk menulis pesannya. Misalkan untuk huruf pertama yaitu a akan ditulis dalam 8 dijit biner 00000001. Sehingga jika SuperDawala ingin menulis aku maka akan menulis dalam desimal 1 untuk a, 11 untuk k, dan 21 untuk u maka kode biner yang ditulis SuperDawala adalah

000000010000101100010101

Urutan huruf adalah a-z kemudian diikuti dengan spasi (dianggap karakter ke 27) (huruf yang dipakai hanya huruf kecil)

Format Masukan


sebuah string 

Format Keluaran


enkripsi biner dawala 

Contoh Masukan

aku


Contoh Keluaran

000000010000101100010101

 */
