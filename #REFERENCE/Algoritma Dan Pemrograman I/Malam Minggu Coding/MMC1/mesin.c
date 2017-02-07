#include "faisal.h"

int besar(char array[100][100],char array2[100][100],char array3[100][100],char array4[100][100],int i,int j,int k,int l){
	int x=0;
	int counter[4];
	int max=1;
	counter[0]=0;
	counter[1]=0;
	counter[2]=0;
	counter[3]=0;
	for(x=0;x<i-1;x++){
		counter[0]=counter[0]+strlen(array[x]);
	}
	for(x=0;x<j-1;x++){
		counter[1]=counter[1]+strlen(array2[x]);
	}
	for(x=0;x<k-1;x++){
		counter[2]=counter[2]+strlen(array3[x]);
	}
	for(x=0;x<l-1;x++){
		counter[3]=counter[3]+strlen(array4[x]);
	}

	for(x=0;x<4;x++){
		if(counter[x]>max){
			max=counter[x];
		}
	}
	
	return max;
}
int namaa(char array[100][100],char array2[100][100],char array3[100][100],char array4[100][100],int i,int j,int k,int l){
	int x=0;
	int counter[4];
	int max=1;
	int nama=0;
	counter[0]=0;
	counter[1]=0;
	counter[2]=0;
	counter[3]=0;
	for(x=0;x<i-1;x++){
		counter[0]=counter[0]+strlen(array[x]);
	}
	for(x=0;x<j-1;x++){
		counter[1]=counter[1]+strlen(array2[x]);
	}
	for(x=0;x<k-1;x++){
		counter[2]=counter[2]+strlen(array3[x]);
	}
	for(x=0;x<l-1;x++){
		counter[3]=counter[3]+strlen(array4[x]);
	}

	for(x=0;x<4;x++){
		if(counter[x]>max){
			max=counter[x];
			nama=x;
		}
	}
	
	return nama;
}
 