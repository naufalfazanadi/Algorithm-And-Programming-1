#include<stdio.h>

int main(){

	int n2,n,n1;
	int i,j;
	int jum1;
	scanf("%d",&n);
	int ray[n];

	for(j=0;j<n;j++){
		scanf("%d",&ray[j]);
	}
	
	int counter1=0;

	for(j=0;j<n/2;j++){
		counter1=counter1+ray[j];
		}
		
		scanf("%d",&n1);
		int aray[n1];

	for(i=0;i<n1;i++){
		scanf("%d",&aray[i]);
	}
		int counter=0;

	for(i=n1-1;i>=n1-(n1/2);i--){
		counter=counter+aray[i];
	}
	if(counter==counter1){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}

	return 0;
	}
