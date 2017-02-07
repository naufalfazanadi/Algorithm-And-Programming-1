#include<stdio.h>

int main(){

	int i,j,n;
	
	scanf("%d",&n);

for(i=0;i<n-1;i++){
	for(j=1;j<=i;j++){
		printf(" ");
	}
	for(j=0;j<n;j++){
		printf("*");
	}
	for(j=n-1;j>i;j--){
		printf(" ");
	}
	for(j=0;j<n;j++){
		printf("*");
	}
	for(j=n;j>i;j--){
		printf("*");
	}
	printf("\n");
}	
for(i=1;i<n;i++){
printf(" ");
}
for(i=0;i<(n*3);i++){
	printf("*");
	}
	printf("\n");
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			printf(" ");
		}
		
		for(j=n;j>i;j--){
			printf("*");
		}
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=n;j>i;j--){
			printf("*");
		}
	
	printf("\n");
	}
	
	for(i=0;i<n;i++){
	
		for(j=1;j<n;j++){
		printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf(" ");
		}
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		
	
	printf("\n");
	}
return 0;
}