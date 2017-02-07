#include <stdio.h>

typedef struct {
	int panjang;
	int lebar;
	int tinggi;
	int luper;
	int vol;
}balok;

int main () {
	balok x;

	printf("Masukan panjang lebar tinggi : \n");
	scanf("%d %d %d", &x.panjang, &x.lebar, &x.tinggi);

	x.luper = 2 * (x.panjang * x.lebar) + 2 * (x.panjang * x.tinggi) + 2 * (x.tinggi * x.lebar);
	x.vol = x.panjang * x.lebar * x.tinggi;

	printf("luas permukaan : %d\n", x.luper);
	printf("volume : %d\n", x.vol);
	return 0;
}