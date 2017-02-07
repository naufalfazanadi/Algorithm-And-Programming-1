#include<stdio.h>

int main(){

int i,j,n;

scanf("%d",&n);//4

for(i=0;i<n;i++){
	for(j=n-1;j>i;j--){
	printf(" ");
	}
	for(j=0;j<=i;j++){
	printf("*");
	}
	for(j=0;j<i;j++){
	printf("*");
	}
	for(j=n-1;j>i;j--){
	printf(" ");
	}
	//////
	for(j=n-1;j>i;j--){
	printf(" ");
	}
	for(j=0;j<=i;j++){
	printf("*");
	}
	for(j=0;j<i;j++){
	printf("*");
	}
	
	
	printf("\n");
}


for(i=1;i<n;i++){
	for(j=1;j<=i;j++){
	printf("+");
	}
	for(j=n-1;j>=i;j--){
	printf("*");
	}
	for(j=n-2;j>=i;j--){
	printf("*");
	}
	
	for(j=1;j<=i;j++){
	printf("-");
	}
	for(j=1;j<=i;j++){
	printf("+");
	}
	for(j=n-1;j>=i;j--){
	printf("*");
	}
	for(j=n-2;j>=i;j--){
	printf("*");
	}
	for(j=1;j<=i;j++){
	printf("-");
	}
	
	printf("\n");
	}
		



return 0;
}