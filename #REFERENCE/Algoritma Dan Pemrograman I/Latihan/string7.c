#include<stdio.h>
#include<string.h>


int main(){
	char str[50];
	scanf("%s",&str);
	int i,j;
	for(i=strlen(str);i>=0;i--){
		
		for(j=0;j<i;j++){
			printf(" ");
		}
		printf("%c",str[i]);
		printf("\n");
	}

return 0;
}
