#include "faisal.h"

int jumlahA(char str[]){
	int i,j = 0;
	
	for(i=0;i<strlen(str);i++){
		if((str[i] =='a') || (str[i]=='A')){
			j++;
		}
	}
	return j;
}

int jumlahB(char str[]){
	int i,j = 0;
	
	for(i=0;i<strlen(str);i++){
		if((str[i] =='b') || (str[i]=='B')){
			j++;
		}
	}
	return j;
}
