#include<stdio.h>
#include<string.h>

int main(){

	char str[50];
		scanf("%s",&str);
	int i,j,spasi=0;
	
	for(i=0;i<(strlen(str)/2)+1;i++)
	{
		for(j=0;j<(spasi);j++)
		{
			printf(" ");
		}
			printf("%c\n",str[i]);
			spasi++;
	}
	for(i=(strlen(str)/2)+1;i<strlen(str);i++)
	{
		for(j=strlen(str)-1;j>i;j--)
		{
			printf(" ");
		}
			printf("%c\n",str[i]);
	}
	
return 0;
}