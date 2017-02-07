#include<stdio.h>

int main(){
	int i,n;
	
	scanf("%d",&n);
	int ray1[n];
	for(i=0;i<n;i++){
		scanf("%d",&ray1[i]);
	}
	for(i=0;i<n;i++){
		if(ray1[i]%3==0){
			printf("%d\n",ray1[i]);
		}
	}


return 0;
}
