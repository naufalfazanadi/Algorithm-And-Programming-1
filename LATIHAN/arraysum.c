#include <stdio.h>
#define LIMIT 10

int main () {
	int i;
	int isi[LIMIT];
	int jumlah = 0; 

	for (i=0;i<LIMIT;i+=1) {
		isi[i]=i;
		// sigma
		jumlah += isi [i];

		printf("%d\n",jumlah);
	}
	printf("========================\n");
	jumlah = 0;
	for (i=0;i<LIMIT;i+=1) {
		isi[i]=i;
		// squares
		jumlah += isi[i] * isi[i];

		printf("%d\n",jumlah);
	}
	return 0;
}