#include<stdio.h>
#include<math.h>
typedef struct{
	float x;
	float y;
}koordinat;

int main(){
	koordinat x1,x2,y1,y2;
	float total;
	float als1,tg1,sm,tg,als;
	
	scanf("%f %f",&x1.x,&y1.y);
	scanf("%f %f",&x2.x,&y2.y);
	
	
		tg=((y2.y-y1.y));
		tg1=tg*tg;
		als=((x2.x-x1.x));
		als1=als*als;
		sm = sqrt(tg1+als1);
	
	printf("%.2f",sm);
return 0;
}