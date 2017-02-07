#include <stdio.h>

int main () {
	//deklarasi untuk inputan char
	char n1,n2,n3,n4,n5,n6;
	//untuk pemisalan boolean
	int a=0,b=0,c=0,x=0,y=0,z=0;
	//input kombinasi
	scanf("%c %c %c %c %c %c", &n1, &n2, &n3, &n4, &n5, &n6);
	//memeriksa apakah kominasi valid atau tidak
	if ((n1 >= 'a') && (n1<= 'z')) {
		if ((n2 >= '0') && (n2 <= '9')) {
			a=1;
		}
	}

	if ((n3 >= 'a') && (n3<= 'z')) {
		if ((n4 >= '0') && (n4 <= '9')) {
			b=1;
		}
	}

	if ((n5 >= 'a') && (n5<= 'z')) {
		if ((n6 >= '0') && (n6 <= '9')) {
			c=1;
		}
	}

	if ((n1 >= '0') && (n1 <= '9')) {
		if ((n2 >= 'a') && (n2<= 'z')) {
			x=1;
		}
	}

	if ((n3 >= '0') && (n3 <= '9')) {
		if ((n4 >= 'a') && (n4<= 'z')) {
			y=1;
		}
	}

	if ((n5 >= '0') && (n5 <= '9')) {
		if ((n6 >= 'a') && (n6<= 'z')) {
			z=1;
		}
	}

	//jika true semua maka valid dan sebaliknya
	if (((a==1) && (b==1) && (c==1)) || ((x==1) && (y==1) && (z==1))) {
		printf("kombinasi valid\n");
	} else {
		printf("kombinasi tidak valid\n");
	}

	return 0;
}

/*Diberikan 6 buah masukan berupa karakter, periksa apakah 6 karakter itu merupakan kombinasi per dua huruf dan karakter angka atau sebaliknya.


Format Masukan:

6 buah masukan berupa karakter

Format Keluaran:

kata-kata kombinasi valid atau kombinasi tidak valid

Contoh Masukan

a
2
b
3
c
5


Contoh Keluaran

kombinasi valid
*/