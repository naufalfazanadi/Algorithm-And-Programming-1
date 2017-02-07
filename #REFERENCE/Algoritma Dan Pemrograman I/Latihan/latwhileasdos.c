#include<stdio.h>

int main(){

int i,n;
int digit=0;
int status;
i=0;
	scanf("%d",&n);
	while(n>0){
		n=n/10;
		i++;
	}
	/*	
	if(i==1){
	digit++;
	}
	if(i==10){
	digit++;
	}
	if(i==100){
	digit++;
	}
	if(i==1000){
	digit++;
	}
	if(i==10000){
	digit++;
	}
	if(i==100000){
	digit++;
	}
	i++;
	}
*/
printf("%d digit",i);

return 0;
}
