#include <stdio.h>

typedef struct {
	int penyebut;
	int pembilang;
}pecahan;

int main () {
	pecahan a;
	pecahan b;
	pecahan c;

	printf("Masukan penyebut pecahan ke 1 : ");
	scanf("%d", &a.penyebut);
	printf("Masukan pembilang pecahan ke 1 : ");
	scanf("%d", &a.pembilang);
	printf("Masukan penyebut pecahan ke 2 : ");
	scanf("%d", &b.penyebut);
	printf("Masukan pembilang pecahan ke 2 : ");
	scanf("%d", &b.pembilang);

	c.penyebut = a.penyebut * b.penyebut;
	c.pembilang = a.pembilang * b.pembilang;

	printf("===========================================\n");
	printf("hasil : %d / %d * %d / %d = %d / %d\n", 
		a.penyebut, a.pembilang, b.penyebut, b.pembilang, c.penyebut, c.pembilang);
	return 0;
}