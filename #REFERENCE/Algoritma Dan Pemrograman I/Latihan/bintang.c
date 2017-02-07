#include<stdio.h>
int main(){

   int i,j,k,tinggi;
   scanf("%d",&tinggi);//4

	for(i = 0 ; i <tinggi;i++){
		for(j = tinggi ;j > i; j--){
		printf("*");
		} // ini miliknya for yang kedua
		for(j =tinggi ;j > i; j--){
		printf("*");
		} 
	printf("\n"); // ini miliknya for yang pertama
	}

	for(i=1; i <= tinggi;i++){		
		for(j = 1; j <= i ;j++){		
		printf("*");
		}
	printf("\n");
	}
   
   return 0;
   }