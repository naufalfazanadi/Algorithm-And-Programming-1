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
		
		if ((dpn[i]%2==0)&&(blkg[i]%2==1)) {
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

/*Buatlah program yang memproses array of float periksa apakah ada 3 buah bilangan yang memiliki angka di depan koma berupa bilangan genap dan angka di belakang koma ganjil.

Format Masukan:


n, 0 < n <= 100 merupakan jumlah elemen array
n baris float 

Format Keluaran:


yes atau no 

Contoh Masukan

3
12.13
12.15
12.67


Contoh Keluaran

yes

*/