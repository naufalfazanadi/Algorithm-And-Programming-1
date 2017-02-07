#include<stdio.h>

int main(){

float n1,n2,n3,n4,n5,n6;
int x1,x2,x3,x4,x5,x6,h1,h2,h3,h4,h5,h6,kel3=0;


scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);
scanf("%f",&n4);
scanf("%f",&n5);
scanf("%f",&n6);

x1=n1;						
h1=(n1-x1)*10;
x2=n2;						
h2=(n2-x2)*10;
x3=n3;						
h3=(n3-x3)*10;
x4=n4;						
h4=(n4-x4)*10;
x5=n5;						
h5=(n5-x5)*10;
x6=n6;
h6=(n6-x6)*10;

if (h1%3==0 && h1 != 0){
kel3++;
}
if (h2%3==0 && h2 != 0){
kel3++;
}
if (h3%3==0 && h3 != 0){
kel3++;
}
if (h4%3==0 && h4 != 0){
kel3++;
}
if (h5%3==0 && h5 != 0){
kel3++;
}
if (h6%3==0 && h6 != 0){
kel3++;
}

if (kel3>=3){
printf("valid\n");
}else{
printf("tidak valid\n");
}

return 0;
}
