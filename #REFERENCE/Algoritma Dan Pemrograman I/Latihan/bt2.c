#include<stdio.h>

int main(){

int i,j,n;

scanf("%d",&n);//4


for(i=2; i <= n;i++){	
		for(j = 2; j <= i ;j++){		
		printf("*");
		}
	printf("\n");
	}


return 0;
}