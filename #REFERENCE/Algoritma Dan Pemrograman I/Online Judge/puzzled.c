#include<stdio.h>
#include<string.h>
int main(){
	int n,m;
	char str1[100];
	char str2[100];
	scanf("%s",&str1);
	scanf("%d",&n);
	scanf("%s",&str2);
	scanf("%d",&m); 
	int i;
	int indeks=n;
	int indeks2=strlen(str2)-m;
	
	for(i=0;i<strlen(str1);i++){
		if(indeks==strlen(str1)){
		indeks=0;
		}
		if(indeks2==strlen(str2)){
		indeks2=0;
		}
		printf("%c",str1[indeks]);
		indeks++;
		printf("%c",str2[indeks2]);
		indeks2++;
		
	}
	printf("\n");

	return 0;
}