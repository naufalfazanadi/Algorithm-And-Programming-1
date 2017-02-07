#include <stdio.h>

int main () {
	char n1,n2,n3,n4,n5,n6;
	int a,b,c;
	scanf("%c %c %c %c %c %c", n1, n2, n3, n4, n5, n6);
	if ((n1 >= 'a') && (n1<= 'z')) {
		if ((n2 >= 0) && (n2 <= 9)) {
			a=a+1;
		}
	}
	if ((n3 >= 'a') && (n3<= 'z')) {
		if ((n4 >= 0) && (n4 <= 9)) {
			b=b+1;
		}
	}
	if ((n5 >= 'a') && (n5<= 'z')) {
		if ((n6 >= 0) && (n6 <= 9)) {
			c=c+1;
		}
	}
	if ((a==1) && (b==1) && (c==1)) {
		printf("valid");
	} else {
		printf("tidak valid");
	}
	return 0;
}

/*Diberikan 6 buah masukan berupa karakter, periksa apakah 6 karakter itu merupakan kombinasi per dua huruf konsonan dan huruf vokal atau sebaliknya.


Format Masukan:

6 buah masukan berupa karakter

Format Keluaran:

kata-kata kombinasi valid atau kombinasi tidak valid

Contoh Masukan

a
b
a
c
a
f


Contoh Keluaran

kombinasi valid
*/