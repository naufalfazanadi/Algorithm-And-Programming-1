#include<stdio.h>

int main(){

int n1,n2,n3,n4;
	
	scanf("%d",&n1);
	if((n1%2)==0){
		scanf("%d",&n2);
		if((n2%2)==1){
			scanf("%d",&n3);
			if((n3%2)==0){
			printf("valid");
	}else{
	printf("invalid");
	}}else{printf("invalid");
	}}else{printf("invalid");
	}
	
return 0;
}
