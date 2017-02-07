#include "faisal.h"

void hasil(int n,char str[n][100]){
	int i,j;
	char baru[n][100];
	int counter=0;
	for(i=0;i<n;i++){
		counter=0;
		for(j=0;j<strlen(str[i]);j++){
			baru[i][counter]=str[i][j];
			j++;
			counter++;
			baru[i][counter]='a';
			counter++;
			baru[i][counter]='n';
			counter++;
			baru[i][counter]='d';
			counter++;
			baru[i][counter]=str[i][j];
			counter++;
			if(j==strlen(str[i])-1){
				baru[i][counter]='\0';
			}
			if(str[i][j+1]!='\0'){
				baru[i][counter]=' ';
				counter++;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",baru[i]);
	}
}