#include<stdio.h>

int main(){

	int i,n,status=0;
	scanf("%d",&n);
	int arr[n];
	
	
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	i=0;
	while(i<n && status==0){
		if(arr[i]%2==0){
			status=1;
		}
	i++;
	}
	
	if (status==1){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}

return 0;
}
