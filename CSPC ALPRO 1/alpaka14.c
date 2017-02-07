#include <stdio.h>

int main () {
	
	char char1='0',char2='0',char3='0';
	char ang1='0',ang2='0',ang3='0';
	int jumchar=0,jumang=0;
	int i;
	char c[7];

	scanf("%c %c %c %c %c %c",&c[1],&c[2],&c[3],&c[4],&c[5],&c[6]);
	for (i=1;i<=6;i++) {

		if ((c[i]>='a')&&(c[i]<='z')) {
			jumchar++;
			if (char1=='0') {
				char1=c[i];
			} else if (char2=='0') {
				char2=c[i];
			} else if (char3=='0') {
				char3=c[i];
			}
		} else if ((c[i]>='0')&&(c[i]<='9')){
			jumang++;
			if (ang1=='0') {
				ang1=c[i];
			} else if (ang2=='0') {
				ang2=c[i];
			} else if (ang3=='0') {
				ang3=c[i];
			}
		}
	}

	if ((jumang==3)&&(jumchar==3)) {
		printf("%c\n",char1);
		printf("%c\n",ang1);
		printf("%c\n",char2);
		printf("%c\n",ang2);
		printf("%c\n",char3);
		printf("%c\n",ang3);
	} else {
		printf("tidak valid\n");
	}
	return 0;
}

/*
Diberikan 6 buah karakter, dimana secara acak merupakan karakter alphabet dan karakter angka. Tampilkan di layar karakter-karakter itu dengan menampilkan karakter alphabet, kemudian diikuti karakter angka begitu seterusnya jika angka masukan memiliki 3 karakter alphabet dan 3 karakter angka. Jika tidak memenuhi syarat maka tampilkan tidak valid. Karakter angka hanya satu digit.

Format Masukan:

6 buah karakter masukan

Format Keluaran:

karakter dengan format alphabet angka atau tidak valid

Contoh Masukan

a
b
5
6
r
7


Contoh Keluaran

a
5
b
6
r
7

Contoh Masukan 2

9
b
5
6
r
7


Contoh Keluaran 2

tidak valid

*/