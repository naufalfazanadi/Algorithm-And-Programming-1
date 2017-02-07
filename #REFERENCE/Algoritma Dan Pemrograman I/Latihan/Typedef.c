#include<stdio.h>

typedef struct{
	int x,y;
}titik;

int main(){

titik n1;
titik n2;
int total,total2;

scanf("%d",&n1.x);
scanf("%d",&n1.y);

scanf("%d",&n2.x);
scanf("%d",&n2.y);

total=n1.x * n1.y;
printf("%d %d %d\n",n1.x,n1.y,total);

total2=n2.x * n2.y;
printf("%d %d %d\n",n2.x,n2.y,total);

return 0;
}