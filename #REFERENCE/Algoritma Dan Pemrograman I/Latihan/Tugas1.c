#include<stdio.h>

int main(){
	int n1,n2;
	
	printf("Nilai 1 : ");
		scanf("%d", &n1);
	printf("Nilai 2 : ");
		scanf("%d", &n2);
	
	int hasiltmbh = n1+n2;
	int hasilkrg = n1-n2;
	float hasilbagi = n1 / n2;
	int hasilkali = n1*n2;
	float hasilmodulus = n1%n2;
	
	printf("hasil tambah : %d\n",hasiltmbh);	
	printf("Hasil kurang : %d\n",hasilkrg);
	printf("Hasil bagi : %f\n",hasilbagi);
	printf("Hasil kali : %d\n",hasilkali);
	printf("Hasil modulus : %d\n",hasilmodulus);
	
	/*if (hasil>=100)
		printf("Luas nya besar sekali\n");
	else
		printf("Luas nya kecil haha\n");*/
		
	return 0;
	}