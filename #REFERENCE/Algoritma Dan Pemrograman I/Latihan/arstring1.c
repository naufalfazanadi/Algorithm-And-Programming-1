#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	char arr[n][50];

	for(i=0;i<n;i++){
		scanf("%s",&arr[i]);
	}
	int jumlah=0;
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i]);j++){
			arr[i][j];
			if(arr[i][j]=='a'){
				jumlah++;
			}
		}
	}
	printf("%d",jumlah);


return 0;
}