#include<stdio.h>

int main(){
int q,w,e,r,h,laba;
scanf("%d",&q);
scanf("%d",&w);
scanf("%d",&e);
scanf("%d",&r);
scanf("%d",&h);

laba=((q*100)+(w*150)+(e*75)+(r*175))*h;

if(((q>0)&&(q<100)) || ((w>0)&&(w<100)) || ((e>0)&&(e<100)) || ((r>0)&&(r<100))){
	printf("%d\n",laba);}

return 0;
}
