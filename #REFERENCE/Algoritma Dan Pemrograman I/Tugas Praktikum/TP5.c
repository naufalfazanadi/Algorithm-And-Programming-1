#include<stdio.h>

int main(){

int i,j;
int x1,y1;
int n;
char arah[100];
int langkah[100];
int m[100];
scanf("%d %d",&x1,&y1);
scanf("%d",&n);
int x3[100];
int y3[100];
for(i=1;i<=n;i++){
	scanf("%d",&m[i]);
	for(j=1;j<=m[i];j++){
		scanf(" %c %d",&arah[j],&langkah[j]);
	}

}

int counter[100];	
for(i=1;i<=n;i++){
counter[i]=0;
x3[i]=0;
y3[i]=0;
for(j=1;j<=m[i];j++){
if(arah[j]=='H'){
	x3[i]=x3[i]+langkah[j];
	else{
	counter[i]=counter[i]+langkah[j];
	}
	}
	if(arah[j]=='V'){
	y3[i]=y3[i]+langkah[j];
	if(langkah[j]<0){
	langkah[j]=langkah[j]*-1;
	counter[i]=counter[i]+langkah[j];
	}else{
	counter[i]=counter[i]+langkah[j];
	}
	}
}
}

for(i=n;i>=1;i--){
	printf("%d\n",i);
	printf("%d %d\n",x3[i],y3[i]);
	printf("%d\n",counter[i]);
}
printf("koordinat lapangan\n");
int max;
/*
for(k=0;k<m;k++){
	if(counter>max){
		max=counter;
	}
}
*/
return 0;
}
