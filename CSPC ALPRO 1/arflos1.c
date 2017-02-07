#include <stdio.h>

int main () {
	int n;
	float flo[100];
	int flos[100];
	int dpn[100];
	int blkg[100];
	int i,a=0;
	scanf("%d", &n);

	for (i=1;i<=n;i++) {
		scanf("%f",&flo[i]);
		dpn[i]=flo[i];
		flos[i]=flo[i]*1000;
		
		if (flos[i]%2==1) {
			flos[i]++;
			
			flos[i]=flos[i]/10;

		} else {
			flos[i]=flos[i]/10;
		}
		blkg[i]=flos[i]-dpn[i]*100;
		
		if (dpn[i]%blkg[i]==0) {
			a++;
		}
	}
	if (a>=3) {
		printf("yes\n");
	} else {
		printf("no\n");
	}
	return 0;
}

/*Buatlah program yang memproses array of float periksa apakah ada 3 buah bilangan yang jika angka di depan koma dibagi angka di belakang koma merupakan bilangan bulat.

Format Masukan:


n, 0 < n <= 100 merupakan jumlah elemen array
n baris float 

Format Keluaran:


yes atau no 

Contoh Masukan

3
12.12
24.12
36.12


Contoh Keluaran

yes

*/