#include<stdio.h>

typedef struct{
	int pem,pen;
}pec;

int main(){
pec n1;
pec n2;
int hpen,hpem,peng,x;

printf("pec1\n");
scanf("%d",&n1.pem);
scanf("%d",&n1.pen);

printf("pec2\n");
scanf("%d",&n2.pem);
scanf("%d",&n2.pen);

/*hpen=n1.pen*n2.pen;
hpem=((n1.pen*n2.pem)+(n2.pen*n1.pem));

printf("%d / %d",hpem, hpen);
*/

if(n1.pen%n2.pen==0){
	peng=n1.pen;
}else if(n2.pen%n1.pen==0){
	peng=n2.pen;
}

if(peng==n1.pen){
	x=((n1.pen/n2.pen)*n2.pem)+n1.pem;
	printf("%d / %d",x,n1.pen);
}else if(peng==n2.pen){
	x=((n2.pen/n1.pen)*n1.pem)+n2.pem;
	printf("%d / %d",x,n2.pen); 
}else{
hpen=n1.pen*n2.pen;
hpem=((n1.pen*n2.pem)+(n2.pen*n1.pem));

printf("%d / %d",hpem, hpen);	
}


return 0;
}

/*if(n1.pen%x==0){
	y=x/x;
	z=n1.pen/x;
}*/
