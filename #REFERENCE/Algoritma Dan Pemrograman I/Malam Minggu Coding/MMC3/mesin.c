#include "faisal.h"

void mainn(int n,int x[n],int y[n],int z[n]){
	int i,j,f;
	int copy;
	int help1;
	int sat=0;
	int pul=0;
	int help2;
	int counter;
	int digit=0;
	int max[n];
	int a[100][100],b[100][100],c[100][100],hasil[100][100];
	for(f=0;f<n;f++){
		digit=0;
		copy=x[f];
		help1=x[f];
		help2=x[f];
		while(copy!=0){
			copy=copy/10;
			digit++;
		}
		max[f]=digit;
		counter=digit-1;
		for(i=0;i<digit;i++){
			help1=help1/10;
			a[f][counter]=(help2-(help1*10));
			help2=help1;
			counter--;
		}
		
		digit=0;
		copy=y[f];
		help1=y[f];
		help2=y[f];
		while(copy!=0){
			copy=copy/10;
			digit++;
		}
		if(digit>max[f]){
			max[f]=digit;
		}
		counter=digit-1;
		for(i=0;i<digit;i++){
			help1=help1/10;
			b[f][counter]=(help2-(help1*10));
			help2=help1;
			counter--;
		}
		digit=0;
		copy=z[f];
		help1=z[f];
		help2=z[f];
		while(copy!=0){
			copy=copy/10;
			digit++;
		}
		if(digit>max[f]){
			max[f]=digit;
		}
		counter=digit-1;
		for(i=0;i<digit;i++){
			help1=help1/10;
			c[f][counter]=(help2-(help1*10));
			help2=help1;
			counter--;
		}

	}
	for(i=0;i<n;i++){
		for(j=0;j<max[i];j++){
			hasil[i][j]=hasil[i][j]+a[i][j];
			hasil[i][j]=hasil[i][j]+b[i][j];
			hasil[i][j]=hasil[i][j]+c[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<max[i];j++){
			printf("%d",hasil[i][j]);
		}
		printf("\n");
	}
	
}