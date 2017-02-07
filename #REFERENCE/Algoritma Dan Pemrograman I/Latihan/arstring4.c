#include<stdio.h>
#include<string.h>

int main(){
	int i,j,n,spasi=0,k;
	scanf("%d",&n);
	char arr[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(i==0 || i%2==0){
			for(j=0;j<spasi;j++){
				printf(" ");
			}
			printf("%s\n",arr[i]);
			spasi=spasi+strlen(arr[i]);
		}
	
		if(i==1 || i%2==1){
			for(k=0;k<spasi;k++){
				printf("%c\n",arr[i][k]);			
			}
			
		}
	}

return 0;
}
