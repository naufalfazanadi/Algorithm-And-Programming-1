#include<stdio.h>
#include<string.h>

int main(){

	char str[50];
		scanf("%s",&str);
	int i,j,spasi=0;
	
	for(i=strlen(str)-1;i>=(strlen(str)/2);i--){
		printf("%c",str[i]);
	}
	printf("\n");
	
	for(i=(strlen(str)/2)-1;i>=0;i--){
		for(j=0;j<strlen(str)/2;j++){
		printf(" ");
		}
	printf("%c\n",str[i]);
	
	}
	
return 0;
}
