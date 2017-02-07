#include<stdio.h>
#include<string.h>
int main(){

	int n;
	scanf("%d",&n);
	char str[n][100];
	int i,j;	
	int k=0;
	int max=0;
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	
	for(i=0;i<n;i++){
		if(strlen(str[i])>max){
			max=strlen(str[i]);
		}
	}
	for(i=0;i<max;i++){
		for(j=0;j<n;j++){
			if(j>strlen(str[i])){
				printf(" ");
			}else{
				printf("%c",str[j][i]);
			}
		}
		printf("\n");
		
	}

	


	return 0;
}
