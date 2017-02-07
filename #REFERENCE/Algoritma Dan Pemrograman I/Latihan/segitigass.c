#include<stdio.h>

int main(){

int s1,s2,s3;

printf("sisi 1: ");
scanf("%d",&s1);
printf("sisi 2: ");
scanf("%d",&s2);
printf("sisi 3: ");
scanf("%d",&s3);

	if (s1==s2==s3){
		printf("Segitiga sama sisi");

	}else if((s1==s2) ||(s2==s3) ||(s1==s3)){
		printf("Segitiga sama kaki");
	
	}else{
		printf("Segitiga Sembarang");
	}

return 0;
}