#include<stdio.h>

int main(){

	int i,j;
	int n;
	scanf("%d",&n);
	int pem[100];
	int pen[100];
	int pem1[100];
	int pen1[100];
	for(i=1;i<=n;i++){
		scanf("%d",&pem[i]);
	}
	for(i=1;i<=n;i++){
		scanf("%d",&pen[i]);
	}
	int counter=1;
	for(i=1;i<=n;i++){
		if(pem[i]%pen[i]==0 && pen[i]!=0){
			pen1[counter]=pen[i];
			pem1[counter]=pem[i];
			counter++;
		}
	}
	for(i=1;i<=counter-2;i++){
		if(pem1[i]>0){
			printf("%d ",pem1[i]);		
		}
	}
	printf("%d\n",pem1[counter-1]);
	
	for(i=1;i<=counter-2;i++){
		if(pen1[i]>0){
			printf("%d ",pen1[i]);		
		}
	}
	printf("%d\n",pen1[counter-1]);

return 0;
}
