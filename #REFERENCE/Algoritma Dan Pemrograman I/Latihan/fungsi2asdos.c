#include<stdio.h>
#include<string.h>

typedef struct{
	int konsonan[100];
}bungkus;

bungkus hitung(int n,char string[n][100]){
	bungkus hasil;
	int i,j;
	
	for(i=0;i<n;i++){
		hasil.konsonan[i]=0;
		for(j=0;j<strlen(string[i]);j++){
			if(str[i][j]!='a' && str[i][j]!='i' && str[i][j]!='u' && str[i][j]!='e' && str[i][j]!='o'){
				hasil.konsonan[i]++;
			}
		}
	}
	return hasil;
}

int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	char string[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&string[i]);
	}
	bungkus hasil2 = hitung(n,string);
	for(i=0:i<n;i++){}
	
	return 0;
}