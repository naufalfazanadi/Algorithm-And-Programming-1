#include<stdio.h>

int main(){

int n1,na1,naa;
int i,n;
float x[100];
int y=0;
scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%f",&x[i]);
}

for(i=0;i<n;i++){

n1=x[i];
na1=(x[i]-n1)*1000;
if(na1%2==1){

na1++;
}
naa=na1/10;

if(n1%2==0 && naa%2==1){
y++;

}

}

if(y>=3 ){
printf("yes\n");
}else{
printf("no\n");
}

return 0;
}
