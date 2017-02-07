#include<stdio.h>

int main(){

int i,j;
int n,m;
int d1[50];
int d2[50];
scanf("%d",&n);
for(i=1;i<=n;++i){
	scanf("%d",&d1[i]);
}
scanf("%d",&m);
for(i=1;i<=m;i++){
	scanf("%d",&d2[i]);
}

int a,b,c,d;
int g1[50];
int g2[50];
int e1[50];
int e2[50];
int ganjil1=1;
int ganjil2=1;
int genap1=1;
int genap2=1;

for(i=1;i<=n;i++){
	if(d1[i]%2==1){
		g1[ganjil1]=d1[i];
		ganjil1++;
	}else if(d1[i]%2==0){
		e1[genap1]=d1[i];
		genap1++;
	}
}

for(i=1;i<=m;i++){
	if(d2[i]%2==1){
		g2[ganjil2]=d2[i];
		ganjil2++;
	}else if(d2[i]%2==0){
		e2[genap2]=d2[i];
		genap2++;
	}
}

a b c d e f
0 1 2 3 4 5 i

a c e
0 1 2 l
b d f
0 1 2 m


for(i=1;i<=ganjil1-1;++i){
	printf("%d ",g1[i]);
}
for(i=1;i<=ganjil2-2;++i){
	printf("%d ",g2[i]);
}
printf("%d\n",g2[ganjil2-1]);

for(i=1;i<=genap1-1;++i){
	printf("%d ",e1[i]);
	
}
for(i=1;i<=genap2-2;++i){
	printf("%d ",e2[i]);
	
}
printf("%d\n",e2[genap2-1]);

return 0;
}
