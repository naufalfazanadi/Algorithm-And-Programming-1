#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int l=0;
	int batas=-1;
	int i,j;
	int k=-1;
	int m=0;
	int jumlah=0;
	int counter=0;
	scanf("%s",&str);
	while(strlen(str)>m){
		k=k+2;
		m=m+k;
		l++;
	}
	
	for(i=0;i<l;i++){
		for(j=l;j>i+1;j--){
			printf(" ");
		}
		for(j=0;j<i+1;j++){
			if(str[counter]!='\0'){
				printf("%c",str[counter]);
				counter++;
			}
			if(j>=1){
				if(str[counter]!='\0'){
					printf("%c",str[counter]);
					counter++;
				}
			}
		}
		
	printf("\n");
	}
return 0;
}
