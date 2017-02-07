#include "faisal.h"

void pola(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}

}
void counter(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}

}

void array(int n,int arr[n]){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	

}