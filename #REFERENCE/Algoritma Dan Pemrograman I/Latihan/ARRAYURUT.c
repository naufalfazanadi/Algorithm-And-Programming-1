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

for(i=1;i<=ganjil1-1;++i){
	for(j=i+1;j<=ganjil1-1;++j)
	{
		if(g1[i]>g1[j])
		{
			a=g1[i];
			g1[i]=g1[j];
			g1[j]=a;
		}
	
	}
}

for(i=1;i<=genap1-1;++i){
	for(j=i+1;j<=genap1-1;++j)
	{
		if(e1[i]>e1[j])
		{
			b=e1[i];
			e1[i]=e1[j];
			e1[j]=b;
		}
	
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

for(i=1;i<=ganjil2-1;++i){
	for(j=i+1;j<=ganjil2-1;++j)
	{
		if(g2[i]>g2[j])
		{
			c=g2[i];
			g2[i]=g2[j];
			g2[j]=c;
		}
	
	}
}

for(i=1;i<=genap2-1;++i){
	for(j=i+1;j<=genap2-1;++j)
	{
		if(e2[i]>e2[j])
		{
			d=e2[i];
			e2[i]=e2[j];
			e2[j]=d;
		}
	
	}
}

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
