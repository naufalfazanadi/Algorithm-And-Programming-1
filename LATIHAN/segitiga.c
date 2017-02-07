#include <stdio.h>

int main () {
	int alas; //variabel integer (alas)
	int tinggi; //variabel integer (tinggi)
	
	printf ("Masukan alas : ");
	scanf ("%d", &alas);
	printf ("masukan tinggi : ");
	scanf ("%d", &tinggi);
	
	int luas = 0.5 * alas * tinggi;
	
	printf ("luas nya adalah : %d",luas);
	return 0 ;
	
}