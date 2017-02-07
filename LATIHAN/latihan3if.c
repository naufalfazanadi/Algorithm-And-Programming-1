#include <stdio.h>

int main () {
	//deklarasi variabel sisi
	int sisi[3],i,x=0;

	//perulangan
	for (i=1;i<=3;i++) {
		//input
		scanf("%d",&sisi[i]);
	}

	//kondisi
	if ((sisi[1]==sisi[2])&&(sisi[1]==sisi[3])&&(sisi[2]==sisi[3])) {
		printf("segitiga sama sisi\n");
	} else if ((sisi[1]==sisi[2])||(sisi[1]==sisi[3])||
				(sisi[2]==sisi[1])||(sisi[2]==sisi[3])||
				(sisi[3]==sisi[1])||(sisi[3]==sisi[2])) {
		printf("segitiga sama kaki\n");
	} else {
		printf("segitiga sembarang\n");
	}
	
	return 0;
}