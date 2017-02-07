#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	char str[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	int indeks=1;
	int panjang=0;
	for(i=0;i<n;i++){
		panjang=0;
		panjang=strlen(str[i])-indeks;
		if(panjang<strlen(str[i])){
			printf("%c",str[i][panjang]);
		}
		for(j=0;j<panjang;j++){
			if(panjang<strlen(str[i])){
			printf("%c",str[i][j]);
			j++;
			}
		}
		printf("\n");
		indeks++;
	}

	return 0;
}