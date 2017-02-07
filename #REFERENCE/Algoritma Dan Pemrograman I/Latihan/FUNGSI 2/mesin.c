#include "faisal.h"

int max(int n,int arr[n]){
	int max=2;
	int i;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int min(int n,int arr[n]){
	int min=0;
	int i;
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}

int selisih(int maxi,int mini){
	int seli;
	seli=maxi-mini;
	
	return seli;
}
void pola(int hasil){
	int i,j;
	for(i=0;i<hasil;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
}