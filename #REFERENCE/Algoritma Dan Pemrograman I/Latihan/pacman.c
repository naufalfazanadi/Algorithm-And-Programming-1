#include<stdio.h>

typedef struct{
	int x;
	int y;
}koor;
int main(){

koor k1,k2,k3;
char menu;
int maju;
	scanf("%d %d",&k1.x, &k1.y);
	scanf("%d %d",&k2.x, &k2.y);
	scanf(" %c",&menu);
	scanf("%d",&maju);
	
	k3.x=k2.x-k1.x;
	k3.y=k2.y-k1.y;
	
	switch(menu){
		case 'h':{
			if(maju==k3.x){
			printf("100");
			}else{
			printf("0");}
		}break;
		
		case 'v':{
			if(maju==k3.y){
			printf("100");
			}else{
			printf("0");}
		}break;
}

return 0;
}