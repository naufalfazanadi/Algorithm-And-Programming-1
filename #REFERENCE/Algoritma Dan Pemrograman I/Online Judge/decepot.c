#include<stdio.h>
#include<string.h>

int main(){
	int a[7];
	a[0]=1;
	a[1]=2;
	a[2]=4;
	a[3]=8;
	a[4]=16;
	a[5]=32;
	a[6]=64;
	a[7]=128;
	char biner[100];
	char huruf[27];
	int y[8];
	int 
	i,j,x;
	int asci=97;
	for(i=0;i<26;i++){
		huruf[i]=asci;
		asci++;
	}
	huruf[27]=' ';
	scanf("%s",&biner);
	x=strlen(biner)/8;
	int counter=0;
	int jumlah=0;
	int indeks=8;
	int iterasi=0;
	for(i=0;i<x;i++){
		jumlah=0;
		counter=0;
		for(j=indeks-1;j>=iterasi;j--){
			if(biner[j]=='1'){
				jumlah+=a[counter];
				counter++;
			}else{	
				counter++;
			}
		}
		iterasi=indeks;
		indeks=indeks+8;
		printf("%c",huruf[jumlah-1]);
	}
	printf("\n");
	
	return 0;
}