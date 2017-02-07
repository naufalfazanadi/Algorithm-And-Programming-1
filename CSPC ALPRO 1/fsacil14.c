#include <stdio.h>

int main () {
	float flobes[3];
	int intbes[3];
	int intkec[3];
	int flodpn[3];
	int floblkg[3];
	int i,j;

	for (i=1;i<=3;i++) {
		scanf("%f", &flobes[i]);
		flodpn[i] = flobes[i];
		intbes[i] = flobes[i]*1000;
		if ((intbes[i]%2)==1) {
			intbes[i]++;
			intbes[i]=intbes[i]/10;
		} else {
			intbes[i]=intbes[i]/10;
		}
		
		floblkg[i]=(intbes[i]-(flodpn[i]*100));
	}
	
	for (i=1;i<=3;i++) {
		scanf("%d",&intkec[i]);
	}

	int a=0;
	for (i=1;i<=3;i++) {
		if (((flodpn[i] % intkec[1]==0)&&(floblkg[i] % intkec[1]==0)) || 
			((flodpn[i] % intkec[2]==0)&&(floblkg[i] % intkec[2]==0)) ||
			((flodpn[i] % intkec[3]==0)&&(floblkg[i] % intkec[3]==0))) {
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

/*
Diberikan 3 buah float besar dan 3 buah integer kecil. Periksa apakah ada 2 bilangan float besar yang angka di depan koma dan di belakang koma menjadi kelipatan dari sebuah angka integer besar.

Format Masukan:

3 float besar
3 integer kecil

Format Keluaran:

valid atau tidak valid

Contoh Masukan

33.22
44.55
23.23
11
12
13


Contoh Keluaran

valid

Contoh Masukan 2

33.23
44.55
23.23
11
12
13


Contoh Keluaran 2

tidak valid

*/