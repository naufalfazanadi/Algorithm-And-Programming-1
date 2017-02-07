#include<stdio.h>


int main(){

int i,n,j;
scanf("%d",&n);

for(i=0;i<n;i++){
	
	if(i%2==0 && i!=0){
	printf("%d ",i);
	
	if(i==n){
	printf("\n");
	}
	}
	printf("\n%d",i+1);
}





return 0;
}