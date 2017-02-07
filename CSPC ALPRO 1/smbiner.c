#include <stdio.h>
#include <string.h>

int main () {
	int i,j,input,sum=0,bol;
	char bin[100][100];
	int biner[8];
	biner[7] = 1;
	biner[6] = 2;
	biner[5] = 4;
	biner[4] = 8;
	biner[3] = 16;
	biner[2] = 32;
	biner[1] = 64;
	biner[0] = 128;
	
	// berapa kali input
	scanf("%d", &input);
		
	for (i = 0 ; i < input ; i++) {
		// input biner
		scanf("%s", &bin[i]);
		// untuk si pengisi array
		bol=7;
		
		for (j = strlen(bin[i])-1 ; j >= 0 ; j--) {
			//ubah dari string ke integer
			if (bin[i][j]=='1') {
				sum = sum + biner[bol];
				bol--;
			} else {
				bol--;
			}
		}
	}
	
	// ouput
	printf("%d\n",sum);
	return 0;
}

/*
Tambahkan n bilangan biner menjadi desimal (bilangan berbasis 10). Bilangan biner maksimal bernilai 8 dijit

Format Masukan

n, 0 < n < 100
n baris bilangan biner

Format Keluaran

jumlah bilangan biner dalam desimal (bilangan berbasis 10)

Contoh Masukan

2
100
10


Contoh Keluaran

6


 */