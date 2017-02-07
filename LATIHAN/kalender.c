#include <stdio.h>

int main () {
	//pendefinisian variabel;
	int tahun, bulan, tanggal;

	//penginputan tanggal lahir
	printf("Input\n");
	printf("Tahun   : "); scanf("%d", &tahun);
	printf("Bulan   : "); scanf("%d", &bulan);
	printf("Tanggal : "); scanf("%d", &tanggal);

	//pengoutputan dan pengurutan tanggal lahir
	printf("\nOutput\n");
	printf("%d-%d-%d\n", tanggal, bulan, tahun);
	
	return 0;
}