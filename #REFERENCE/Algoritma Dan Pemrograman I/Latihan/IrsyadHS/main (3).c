#include<stdio.h>
#include<String.h>

int main(){

	int i = 0;
	int j, k;
	int banding=0;
	int jumlah=0;
	char sandi[20][50];
	
	
	do{
		scanf("%s", sandi[i]);
		jumlah++;
		banding = strcmp(sandi[i],"selesai");
		i++;
		
	}while(banding!=0);
	
	
	int polindrom = sandicinta(jumlah, sandi);
	printf("%d\n", polindrom);
	sandipola(jumlah, sandi);
	
	
	
	
	return 0;
}