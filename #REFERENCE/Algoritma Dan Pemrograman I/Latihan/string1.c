#include<stdio.h>
#include<string.h>

int main(){

	char str[50];
	char str2[50];
	
	scanf("%s",&str);
	int i;
	strcpy(str2,str);

	for(i=0;i<strlen(str2);i++){
		printf("%s\n",str2);
	}

return 0;
}
