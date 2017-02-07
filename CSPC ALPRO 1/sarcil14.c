#include <stdio.h>

int main () {
	int intbes[3];
	int intkec[3];
	int i,j;

	for (i=1;i<=3;i++) {
		scanf("%d",&intbes[i]);
	}
	for (i=1;i<=3;i++) {
		scanf("%d",&intkec[i]);
	}

	int a=0;
	for (i=1;i<=3;i++) {
		if ((intbes[i] % intkec[1]==0) || (intbes[i] % intkec[2]==0) || (intbes[i] % intkec[3]==0)) {
			a=a+1;
		}
	}

	if (a >= 2 ) {
		printf("valid\n");
	} else {
		printf("tidak valid\n");
	}
	return 0;
}

/*Diberikan 3 buah integer besar dan 3 buah integer kecil. Periksa apakah ada 2 bilangan integer besar yang menjadi kelipatan dari sebuah integer kecil.

Format Masukan:

3 integer besar
3 integer kecil

Format Keluaran:

valid atau tidak valid

Contoh Masukan

12
24
11
2
3
5


Contoh Keluaran

valid

Contoh Masukan 2

33
52
72
9
7
8


Contoh Keluaran 2

tidak valid

*/