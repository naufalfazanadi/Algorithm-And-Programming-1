#include <stdio.h>

int main () {
	//array untuk pemasukan dan pengkondisian
	int n[6];
	int ribuan[6];

	//var untuk perulangan
	int i,j;

	//var untuk sebuah if
	int a = 0;
	
	//perulangan untuk penginputan
	for (i=1;i<=6;i++) {
		scanf("%d", &n[i]);
	}

	//perulangan untuk membaca apakah ada ribuan
	for (j=1;j<=6;j++) {
		ribuan[j] = n[j] / 1000;
		if (ribuan[j] > 0) {
			a=a+1;
		}
	}

	//pengoutputan
	if (a >= 3) {
		printf("ribuan 3 atau lebih\n");
	}
	else {
		printf("tidak valid\n");
	}

	return 0;
}

/*Diberikan 6 buah angka berupa integer. Periksa apakah ada minimal 3 buah angka ribuan dari keenam angka masukan.


Format Masukan:

6 buah masukan berupa integer

Format Keluaran:

kata-kata ribuan 3 atau lebih atau tidak valid

Contoh Masukan

1000
2567
700
3899
707
598


Contoh Keluaran

ribuan 3 atau lebih
*/