#include<stdio.h>

int main(){

		int nilai;
		
		printf("Masukan Nilai : ");
		scanf("%d",&nilai);
		
		if (((nilai%5)==0) && ((nilai%3)==0) ){
				printf("kel 5&3");
		
		}else if ((nilai%5)==0){
				printf("kel 5");
				
		}else if ((nilai%3)==0){
				printf("kel 3");
		}else{
				printf("bukan kelipatan 5&3");
		}
		
	return 0;	
}
