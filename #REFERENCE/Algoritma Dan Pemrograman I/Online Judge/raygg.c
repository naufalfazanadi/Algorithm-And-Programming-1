#include<stdio.h>

int main(){
	
	int i,j;
	int n;
		scanf("%d",&n);
	int ray[n];

	for(i=0;i<n;i++){
		scanf("%d",&ray[i]);
	}
	int n1;
		scanf("%d",&n1);
	int aray[n1];

	for(j=0;j<n1;j++){
		scanf("%d",&aray[j]);
	}
	
	int c=0;
	
		for(i=0;i<n;i++){
			if(ray[i]%2==0 && aray[i]%2==1){
				c++;
			}
		}
	
	
	if(c>0){
		printf("tidak valid\n");
	}else{
		printf("valid\n");
	}
return 0;
}
