#include <stdio.h>
#include <string.h>

int main () {
	char str1[1000], str2[1000];
	char temp1[1000], temp2[1000];
	char orary1[1000], orary2[1000];
	char gabung1[1000], gabung2[1000];
	int n1,n2;
	int i,j;
	int lon1,lon2;

	// input
	scanf("%s", &str1);
	scanf("%d", &n1);
	scanf("%s", &str2);
	scanf("%d", &n2);

	// menyimpan yang dipindahkan
	for (i = 0 ; i < n1 ; i++) {
		temp1[i] = str1[i];
	}
	for (i = strlen(str2)-n2 ; i < strlen(str2) ; i++) {
		temp2[i-(strlen(str2)-n2)] = str2[i];
	}

	// menyimpan sisa
	for (i = n1 ; i < strlen(str1) ; i++) {
		orary1[i-n1] = str1[i];
		gabung1[i-n1] = orary1[i-n1];
	}
	for (i = 0 ; i < strlen(str2)-n2 ; i++) {
		orary2[i+n2] = str2[i];
		gabung2[i+n2] = orary2[i+n2];
	}

	lon1 = strlen(gabung1);
	lon2 = strlen(gabung2);

	// menggabungkan
	for (i = 0 ; i < strlen(temp1) ; i++) {
		gabung1[lon1+i] = temp1[i];
	}
	
	if (n2%2==1) {
		for (i = 0 ; i < strlen(temp2) ; i++) {
			gabung2[i] = temp2[i];
		}
	} else {
		for (i = 0 ; i < strlen(temp2)-1 ; i++) {
			gabung2[i] = temp2[i];
		}
	}

	// ouput
	for (i = 0 ; i < strlen(str1) ; i++) {
		printf("%c", gabung1[i]);
		printf("%c", gabung2[i]);	
	}
	printf("\n");
	return 0;
}

/*
Si Dawala memiliki dua buah puzzle huruf dengan jumlah huruf yang sama. Huruf pada puzzle pertama akan diputar sebanyak n huruf ke arah depan, dan puzzle kedua akan diputar sebanyak m ke arah belakang. Setelah kedua puzzle diputar maka puzzle digabungkan dengan puzzle pertama sebagai huruf ganjil dan puzzle kedua sebagai huruf genap.

Misalkan

puzzle pertama berisi

senidombagarut

dan n = 5 maka puzzle pertama diputar sebanyak 5 kali ke depan

putaran pertama menghasilkan enidombagaruts
putaran kedua menghasilkan nidombagarutse
putaran ketiga menghasilkan idombagarutsen
putaran keempat menghasilkan dombagarutseni
putaran kelima menghasilkan ombagarutsenid

puzzle kedua berisi

senitangkasdgr

dan m = 3 maka puzzle kedua diputar sebanyak 3 kali ke belakang

putaran pertama menghasilkan rsenitangkasdg
putaran kedua menghasilkan grsenitangkasd
putaran ketiga menghasilkan dgrsenitangkas



hasil perputaran akan digabungkan menjadi

odmgbrasgeanriuttasnegnkiads

Format Masukan:


puzzle pertama
n, 0 < n <= 1000
puzzle kedua
m, 0 < m <= 1000

Format Keluaran:


sebuah puzzle huruf hasil penggabungan 

Contoh Masukan

senidombagarut
5
senitangkasdgr
3


Contoh Keluaran

odmgbrasgeanriuttasnegnkiads

 */
