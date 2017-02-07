#include<stdio.h>
#include<string.h>

int main(){
	char str[50];
	scanf("%s",&str);
	int i,jumlah=0;
	
	
	
	for(i=0;i<strlen(str);i++){
	
		if(str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o')
		{
		jumlah++;
		}
	
	}
	int hasil;
	hasil=strlen(str)-jumlah;
	
	printf("%d\n",hasil);
	
	return 0;
}
