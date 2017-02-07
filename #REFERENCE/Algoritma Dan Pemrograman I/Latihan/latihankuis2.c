#include<stdio.h>
#include<string.h>

int main(){

	
	int n;
	int i,j;
	scanf("%d",&n);
	char str[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	char x=strlen(str[i])-1;
	for(i=0;i<n;i++){
		if(i%2==1){
			for(j=strlen(str[i])-1;j>=0;j--){
				printf("%c",str[i][j]);
			}
			printf("\n");
		}
		if(i%2==0){
				printf("%s\n",str[i]);
		}
	}


return 0;
}
