#include<stdio.h>
int main(){

   int i,j,k,tinggi;
   scanf("%d",&tinggi);
   for(i = tinggi; i > 0;i--){
	for(j= tinggi; j>i ; j--){
		printf("*");
	}
	printf("\n");}
   
   return 0;
   }