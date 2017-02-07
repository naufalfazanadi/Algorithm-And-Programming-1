#include<stdio.h>
int main(){

	int i;
	int n;
	int q[10];
		for(i=0;i<5;i++){

			scanf("%d",&q[i]);
		}

	i=0;
	while(q[i]!=999 && i<5){
		printf("%d",q[i]);
		i++;
	}


return 0;
}
