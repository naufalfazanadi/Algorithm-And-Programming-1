#include <stdio.h>

typedef struct {
	int harga;
	int banyak;
	int total;
}buah;

int main () {
	buah jeruk;
	buah mangga;

	jeruk.harga=5000;
	mangga.harga=7000;

	//hiasan semata
	printf("========================================\n");
	printf("List harga\n----------------------------------------\n");
	printf("Harga jeruk per kg = %d\n", jeruk.harga);
	printf("Harga mangga per kg = %d\n", mangga.harga);
	printf("========================================\n");

	//input
	printf("Berapa jeruk yang akan dibeli : ");
	scanf("%d", &jeruk.banyak);
	printf("Berapa mangga yang akan dibeli : ");
	scanf("%d", &mangga.banyak);
	printf("=========================================\n");
	
	jeruk.total=jeruk.harga * jeruk.banyak;
	mangga.total=mangga.harga * jeruk.banyak;
	
	//ouput
	printf("total jeruk : Rp.%d\n", jeruk.total);
	printf("mangga jeruk : Rp.%d\n", mangga.total);
	printf("========================================\n");
	printf("total harga yang harus dibayar : Rp.%d\n\n", jeruk.total+mangga.total);
	return 0;
}