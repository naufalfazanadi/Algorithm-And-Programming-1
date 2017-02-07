#include<stdio.h>
#include<string.h>

int main(){

	char str[50];
	char str2[50];
	
	
	int i=0;
	while(i<10){
	if(i==9){
	str[i]='\0';
	}
	scanf(" %c",&str[i]);
	i++;
	}
	
	printf("%s\n",str);

return 0;
}
