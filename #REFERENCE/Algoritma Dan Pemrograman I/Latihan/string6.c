#include<stdio.h>
#include<string.h>


int main(){
	char str[50];
	scanf("%s",&str);
	int i,j;
	for(i=0;i<(strlen(str));i++){
		
		for(j=strlen(str)-1;j>i;j--){
			printf(" ");
		}
		printf("%c",str[i]);
		printf("\n");
	}

return 0;
}
