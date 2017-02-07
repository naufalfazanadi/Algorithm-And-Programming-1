#include"header.h"


int sandicinta(int jumlah, char sandi[50][50]){
	int i, j;
	int poli;
	int pas = 0;
	int jumkata;
	char kebalik[50][50];
	
	for(i=0;i<jumlah-1;i++){
			strcpy(kebalik[i], sandi[i]);
		}

	for(i=0;i<jumlah-1;i++){
		jumkata=strlen(kebalik[i]);
		poli = 0;
		for(j=0;j<strlen(sandi[i]);j++){
			if(sandi[i][j]==kebalik[i][jumkata-1]){
				poli++;
			}
			jumkata--;
		}
		if(poli==strlen(sandi[i])){
			pas++;
		}
	}
	
	return pas;
}

void sandipola(int jumlah, char sandi[50][50]){
	
	int i, j;
	int poli;
	int pas = 0;
	int jumkata;
	char kebalik[20][50];
	
	for(i=0;i<jumlah-1;i++){
			strcpy(kebalik[i], sandi[i]);
		}
	
	int y=0;

	
	for(i=0;i<jumlah-1;i++){
		jumkata=strlen(kebalik[i]);
		poli = 0;
		for(j=0;j<strlen(sandi[i]);j++){
			if(sandi[i][j]==kebalik[i][jumkata-1]){
				poli++;
			}
			jumkata--;
		}
		if(poli==strlen(sandi[i])){
			pas++;
			strcpy(kebalik[y], sandi[i-1]);
			strcpy(kebalik[y-1],sandi[i+1]);
			y++;
			i++;
		}else{
			strcpy(kebalik[y], sandi[i]);
			y++;
		}
	}
	
	for(i=0;i<y;i++){
		printf("%s", kebalik[i]);
		if(i!=y-1){
			printf(" ");
		}
	}
}

		