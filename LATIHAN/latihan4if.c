#include <stdio.h>

int main () {
	//var untuk var float
	float flo[3];
	//var untuk integer
	int x,dpn[3],floin[3],blkg[3],i;

	for (i=1;i<=3;i++) {
		//inputan
		scanf("%f",&flo[i]);
		//untuk tau angka depan koma
		dpn[i]=flo[i];
		
		//pencegahan bug ==============
		floin[i]=flo[i]*1000;

		if (floin[i]%2==1) {
			floin[i]++;
			floin[i]=floin[i]/10;
		} else {
			floin[i]=floin[i]/10;
		}
		//============================

		//untuk tau angka belakang koma
		blkg[i]=floin[i]-(dpn[i]*100);
	}

	//input integer
	scanf("%d",&x);

	//var boolean
	int n=0;
	//perulangan
	for (i=1;i<=3;i++) {
		//kodisi
		if ((dpn[i]%x==0)&&(blkg[i]%x==0)) {
			n++; //penambahan boolean
		}
	}

	//kondisi untuk output
	if (n>=2) {
		printf("valid\n");
	} else {
		printf("tidak valid\n");
	}
	return 0;
}