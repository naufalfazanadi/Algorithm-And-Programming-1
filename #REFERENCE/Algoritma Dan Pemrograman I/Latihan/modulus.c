#include<stdio.h>

int main(){
int a,b,c,z,x,v;
scanf("%d",&z);
scanf("%d",&x);
v=z/x;
a=v/3600;
b=(v%3600)/60;
c=(v%3600)%60;

printf("%d %d %d",a,b,c);

return 0;

}
