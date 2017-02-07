#include <stdio.h>

int main () {
	int ar1[20];
	int ar2[20];
	int i,n,m,j=0;

	scanf("%d", &n);

	for (i=1;i<=n;i++) {
		scanf("%d", &ar1[i]);
	}

	scanf("%d", &m);

	for (i=1;i<=m;i++) {
		scanf("%d", &ar2[i]);
	}

	if (n>=m) {
		j=n;
	} else {
		j=m;
	}

	int a=0;
	for (i=1;i<=j;i++) {
		if ( ((ar1[i]%2)==(ar2[i]%2)) && ((ar1[i]!=0) || (ar2[i]!=0))) {
			a++;
		}
	}

	if (a==j) {
		printf("valid\n");
	} else {
		printf("tidak valid\n");
	}
	return 0;
}

/*Diberikan 2 buah array integer. Periksa apakah array pertama dan array kedua adalah array yang sama letak ganjil dan genapnya. Jika ya maka tampilkan valid, jika tidak maka tampilkan tidak valid.
Format Masukan:

n, 0 < n < 20, banyaknya bilangan di array pertama
n baris angka isi dari array pertama
m, 0 < m < 20, banyaknya bilangan di array kedua
m baris angka isi dari array kedua

Format Keluaran:

valid atau tidak valid

Contoh Masukan

3
1
2
3
3
5
6
7


Contoh Keluaran

valid

Contoh Masukan 2

3
1
2
4
4
1
2
3
4


Contoh Keluaran 2

tidak valid

       
Contoh Masukan 3

3
1
2
4
3
11
12
13


Contoh Keluaran 3

tidak valid

*/