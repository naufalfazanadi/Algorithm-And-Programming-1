#include <stdio.h>

int main () {

	printf("Pilih menu : \n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkaliam\n");
	printf("4. Pembagian\n");
	
	int a;
	printf("Menu yang dipilih ");
	scanf("%d", &a);
	printf("=====================\n");
	int x,y;
	printf("Masukkan dua angka : ");
	scanf("%d %d", &x, &y);

	printf("=====================\n");
	switch (a) {
		case 1 : printf("%d + %d = %d\n", x, y, x+y);break;
		case 2 : printf("%d - %d = %d\n", x, y, x-y);break;
		case 3 : printf("%d * %d = %d\n", x, y, x*y);break;
		case 4 : printf("%d / %d = %d\n", x, y, x/y);break;
		default : printf("tidak ada menu\n");
	}

	return 0;
}