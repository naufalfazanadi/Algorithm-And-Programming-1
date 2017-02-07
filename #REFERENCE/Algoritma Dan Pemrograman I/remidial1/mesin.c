#include "header.h"

void hasil(int n,char kata[n][100]){
	char alfa[14]="ABCDEFGHIJKLMN"; //deklarasi perangkat
	char beta[14]="NMLKJIHGFEDCBA";
	char alfa2[12]="OPQRSTUVWXYZ";
	char beta2[12]="ZYXWVUTSRQPO";
	char hasil[n][100];
	int tampung[n][100];
	int i,j,k;
	for(i=0;i<n;i++){ //for sebanyak n
		for(j=0;j<strlen(kata[i]);j++){ //for sebanyak huruf
 			for(k=0;k<14;k++){ //for sebanyak A-N
				if(kata[i][j]==alfa[k]){
					hasil[i][j]=beta[k]; //langsung dirubah
				}
			}
			for(k=0;k<12;k++){ //for sebanyak O-Z
				if(kata[i][j]==alfa2[k]){
					hasil[i][j]=beta2[k];
				}
			}
			hasil[i][j+1]='\0'; //dinull kan
		}
		
	}
	
	for(i=0;i<n;i++){
		printf("%s\n",hasil[i]); //print hasil
	}
	
}
