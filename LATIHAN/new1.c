#include <stdio.h>

int main () {
	int panjang;
	int lebar;
	printf ("Masukan panjang yang diinginkan : ");
	scanf ("%d", &panjang);
	printf ("masukan lebar yang diinginkan : ");
	scanf ("%d", &lebar);
	
	int luas = panjang * lebar;
	
	printf ("hasilnya, %d, tadaaa \n",luas);
	
	return 0;
}