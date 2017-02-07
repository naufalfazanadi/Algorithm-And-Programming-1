#include<stdio.h>
int main(){

	int i,j,k,l,tinggi;
	scanf("%d",&tinggi);
	for(i = 1; i <= tinggi;i++){
		for(j = 1; j <= i ;j++){
		printf("*");
		}
	printf("\n");
	}
	for(i = 1 ; i <=tinggi;i++){
		for(j =tinggi ;j > i; j--){
		printf("*");
		} // ini miliknya for yang kedua
	printf("\n"); // ini miliknya for yang pertama
	}
   
   return 0;
   }