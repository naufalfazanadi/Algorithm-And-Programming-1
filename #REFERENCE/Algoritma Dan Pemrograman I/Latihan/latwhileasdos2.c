#include<stdio.h>

int main(){
int i,n;
int status=0;
int jmlh=0;

i=0;
while(i<20 && status==0){
scanf("%d",&n);
	if(n==0){
		status=1;
	}
	jmlh=jmlh+n;
}
printf("%d",jmlh);

return 0;
}
