#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	char str[n][100];
	int ya=0,sama=0,status=1;
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	for(i=0;i<n;i++){
		sama=0;
		status=1;
		for(j=0;j<strlen(str[i]);j++){
			if(str[i][j]=='b'){
				if(str[i][j+1]=='a'){
					sama++;
				}
			}
			while(status!=0 && sama>=2){
				ya++;
				status=0;
			}
			
		}
		
	}
	if(ya>=3){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	return 0;
}
