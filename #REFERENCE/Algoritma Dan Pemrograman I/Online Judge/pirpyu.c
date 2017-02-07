#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int i,j;
	scanf("%s",&str);
	int k=1;
	int l=1;
	int m=2;
	while(m<=strlen(str)){
		k=k+2;
		m=m+k;
		l++;
	}
	printf("%d\n",l);
	int x=1;
	int y=0;
	int f=l;
	int w=1;
	while(f>0){
		for(i=0;i<l;i++){
			for(j=0;j<1;j++){
				printf("*");
			}
			
		}
		for(j=y;j<x;j++){
			printf("%c\n",str[j]);
		}
		y=y+x;
		w=w+2;
		x=x+w;
		f--;
	}
	for(i=0;i<l;i++){
		for(j=0;j<1;j++){
			printf("*");
		}
		for(j=0;j<1;j++){
			printf("%c",str[j]);
		}
		printf("\n");
	}
	for(j=y;j<x;j++){
		printf("%c\n",str[j]);
	}


	return 0;
}	