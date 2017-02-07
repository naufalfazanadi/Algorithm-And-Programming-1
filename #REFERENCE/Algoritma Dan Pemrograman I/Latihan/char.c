#include<stdio.h>

int main(){


	int n;
	scanf("%d",&n);
	int tabint[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&tabint[i]);
	}
	
	int jumlah=tabint[0];
	
	for(i=1; i<n;i++){
		if(jumlah < tabint[i]){
		jumlah=tabint[i];
		}
		
	}
	
printf("%d\n",jumlah);
	return 0;
}
