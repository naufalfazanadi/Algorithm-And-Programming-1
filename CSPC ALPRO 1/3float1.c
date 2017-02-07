/////////////////////////////////////////////////////////
///         [Alpro1] Lat. Online Judge CSPC          ////
///     3FLOAT1.C (FLOAT ANGKA BLKG KOMA LIPAT 3)    ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
	//array untuk pemasukan dan pengkondisian
	float n[6];
	int m[6];
	int belakang[6];

	//var untuk perulangan
	int i,j,k;

	//var untuk sebuah if
	int x=0;
	
	//perulangan untuk penginputan
	for (i=1;i<=6;i++) {
		scanf("%f", &n[i]);
		printf("%f\n", n[i]);
		m[i]=n[i]*10;
	}

	//perulangan untuk if saat satu angka dibelakang koma 3 atau 6 atau 9
	for (j=1;j<=6;j++) {
		belakang[j] = m[j] % 10;
	}

	x=0;
	for (k=1;k<=6;k++) {
		if ((belakang[k] == 3) || (belakang[k] == 6) || (belakang[k] == 9)) {
			x=x+1;
		}
		
	}

	//pengoutputan
	if (x >= 3) {
		printf("valid\n");
	}
	else {
		printf("tidak valid\n");
	}

	return 0;
}

/*Diberikan 6 buah angka berupa float. Periksa apakah ada minimal 3 buah angka float yang memiliki angka awal koma kelipatan 3.


Format Masukan:

6 buah masukan berupa float

Format Keluaran:

kata-kata valid atau tidak valid

Pada contoh jawaban ada 3 buah angka float yang angka pertama di belakang koma adalah 3, 6, 9 yang merupakan kelipatan 3, yaitu 34.36, 44.66, 22.99

Contoh Masukan

34.36
33.56
44.66
22.99
11.11
10.10


Contoh Keluaran

valid

*/
