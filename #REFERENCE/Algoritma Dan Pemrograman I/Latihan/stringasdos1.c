#include<stdio.h>

int main(){

	char kata[100];
	int jumlah=0;
	char aq[5]={'A','Q','U','A','\0'};
	char ge[5]={'g','e','h','u','\0'};
	char ta[6]={'t','a','n','g','o','\0'};
	char su[6]={'s','u','d','a','h','\0'};
	while(strcmp(kata,su)!=0){

	scanf("%s",&kata);
	if(strcmp(kata,aq)==0){
	jumlah=jumlah+3000;
	}
	if(strcmp(kata,ge)==0){
	jumlah=jumlah+500;
	}
	if(strcmp(kata,ta)==0){
	jumlah=jumlah+1000;
	}

	}

	printf("%d",jumlah);


return 0;
}
