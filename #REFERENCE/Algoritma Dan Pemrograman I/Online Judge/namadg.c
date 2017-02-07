#include<stdio.h>
#include<string.h>

int main(){

	int i,n,m;
	char konso[11]={'s','n','d','m','b','t','n','g','k','s','\0'};
	char konsonan[7]={'e','i','o','a','a','a','\0'};
	scanf("%d",&n);
	scanf("%d",&m);
	char arr[n][5];
	int j;
	int y;
	int k;
	for(j=0;j<n;j++){
		k=0;
		for(i=1;i<=5;i++){
			
			if(i%2==1){
				y=(j+1)*i*m;
				while(y>10){
					y=y-10;
				}
				arr[j][k]=konso[y-1];
				k++;
			}
			if(i%2==0){
				y=(j+1)*i*m;
				while(y>6){
					y=y-6;
				}
				arr[j][k]=konsonan[y-1];
				k++;
			}
			if(i==4){
				arr[j][k]='\0';
				k++;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",arr[i]);
	}
return 0;
}
