#include<stdio.h>
typedef struct{
	int x;
	int y;
}titik;
int main(){

int n,i;

scanf("%d",&n);
titik ray[n];
for(i=0;i<n;i++){
	scanf("%d %d",&ray[i].x,&ray[i].y);
}
for(i=0;i<n;i++){
	if(ray[i].x%2==1 && ray[i].y>ray[i].x){
	printf("%d %d\n",ray[i].x,ray[i].y);
	}
}


return 0;
}
