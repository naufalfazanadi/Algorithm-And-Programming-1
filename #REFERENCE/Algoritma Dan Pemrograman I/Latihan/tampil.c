#include<stdio.h>

int main(){

int a,b,c;

printf("sisi 1: ");
scanf("%d",&a);
printf("sisi 2: ");
scanf("%d",&b);
printf("sisi 3: ");
scanf("%d",&c);

	if ((a>b) && (a>c)){
		if (b<c){
		printf("%d %d %d",b,c,a);
		}else if(b=c){
		printf("%d %d %d",b,c,a);
			}else{
			printf("%d %d %d",c,b,a);
		}
		}
	else if((b>a) && (b>c)){
		if (a<c){
		printf("%d %d %d",a,c,b);
		}else if(a=c){
		printf("%d %d %d",a,c,b);
		}else{
		printf("%d %d %d",c,a,b);
		}
		}
		
	else if((c>a)&&(c>b)){
		if (a<b){
		printf("%d %d %d",a,b,c);
		}else if(a=b){
		printf("%d %d %d",a,b,c);
		}else{
		printf("%d %d %d",b,a,c);
		}
		}
	
		return 0;
}
