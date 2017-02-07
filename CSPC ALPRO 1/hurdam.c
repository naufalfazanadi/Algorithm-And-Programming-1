#include <stdio.h>
#include <string.h>

int main () {
	char str[26]="abcdefghijklmnopqrstuvwxyz";
	
	// untuk loop
	int i,j,n;
	// untuk cari char max
	char hurma[26];
	// untuk tampung max
	int tampung[26];
	for (i = 0 ; i < 26 ; i++) {
		tampung[i] = 0;
	}

	// inputan string
	char input[100];

	// input
	scanf("%d", &n);
	scanf("%s", &input);

	// untuk menampung yang paling banyak
	for (i = 0 ; i < strlen(input) ; i++) {
		for (j = 0 ; j < 26 ; j++) {
			if (input[i] == str[j]) {
				tampung[j]++;
			}
		}
	}

	// var max untuk mengurutkan
	int max [100];
	for (i = 0 ; i < 100 ; i++) {
		max[i]=0;
	}
	max[0] = 999;

	// bagian untuk mengurutkan
	for (i = 1 ; i <= n ; i++) {
		for (j = 0 ; j < 26 ; j++) {
			//======================================== 
			if ((max[i] < tampung[j]) && (tampung[j] < max[i-1])) {
				max[i] = tampung[j];
				hurma[i] = str[j];
			}
			// ==============================================
		}
	}
	
	// output braayyy
	for (i = 1 ; i <= n ; i++) {
		printf("%c %d\n", hurma[i], max[i]);
	}

	return 0;
}

/*
Kang Damang memiliki deretan huruf. Kang Damang ingin tahu n huruf terbanyak yang ada di deretan huruf miliknya. Misalnya deretan huruf Kang Damang


padepokandombagarutpasirhalang

maka jika n = 2 akan menampilkan 2 huruf terbanyak dari deretan huruf Kang Damang, jika ada huruf dengan jumlah sama maka didahulukan sesuai urutan alpabet, jadi hasilnya adalah


a 7
p 3

Format Masukan:


n, 0 < n <= 100
deretan huruf Kang Damang, maksimal 100 huruf

Format Keluaran:


n baris huruf dan jumlah huruf dalam deretan huruf Kang Damang dipisahkan dengan spasi.

Contoh Masukan

2
padepokandombagarutpasirhalang


Contoh Keluaran

a 7
p 3
 */
