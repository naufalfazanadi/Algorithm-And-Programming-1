#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	scanf("%s",&str);
	int i,j;
	int k;
	int l;
	k=strlen(str)/2;
	l=strlen(str)/2-1;
	if(strlen(str)%2==0){
		for(i=0;i<strlen(str)/2;i++){
			for(j=strlen(str)/2-1;j>i;j--){
				printf(" ");
			}
			for(j=0;j<1;j++){
				printf("%c",str[k]);
				k++;
			}
			for(j=0;j<i+1;j++){
				printf(" ");
			}
			for(j=0;j<i;j++){
				printf(" ");
			}
			for(j=0;j<1;j++){
				printf("%c",str[l]);
				l--;
			}
			printf("\n");
			
		}
	}else{
		for(i=0;i<(strlen(str)/2);i++){
			printf(" ");
		}
		printf("%c\n",str[(strlen(str)/2)]);
		k=k+1;
		
		for(i=0;i<strlen(str)/2;i++){
			for(j=strlen(str)/2-1;j>i;j--){
				printf(" ");
			}
			for(j=0;j<1;j++){
				printf("%c",str[k]);
				k++;
			}
			for(j=0;j<i+1;j++){
				printf(" ");
			}
			for(j=0;j<i;j++){
				printf(" ");
			}
			for(j=0;j<1;j++){
				printf("%c",str[l]);
				l--;
			}
			printf("\n");
		}
		
	
	
	}
	return 0;
}