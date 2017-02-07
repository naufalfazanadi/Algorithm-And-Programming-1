#include<stdio.h>

int main(){

int i,n;
	scanf("%d",&n);
int ray1[n];
	for(i=0;i<n;i++){
		scanf("%d",&ray1[i]);
	}
	for(i=n/2;i<n;i++){
		printf("%d",ray1[i]);
	}



return 0;
}
