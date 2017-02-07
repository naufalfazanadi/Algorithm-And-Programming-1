#include<stdio.h>

int main(){

int i,n;
scanf("%d",&n);
int ray[n];
for(i=0;i<n;i++){
	scanf("%d",&ray[i]);
}

int counter = 0;
for(i=0;i<n;i++){
	if((i+1)%2==0){
		counter = counter+ray[i];
	}
}

printf("%d",counter);

return 0;
}
