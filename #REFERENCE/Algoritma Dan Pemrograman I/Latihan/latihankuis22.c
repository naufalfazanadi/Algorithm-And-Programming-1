#include<stdio.h>
#include<string.h>

int main(){

	
	int n;
	int i,j;
	scanf("%d",&n);
	char str[n][100];
	int max=0;
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	for(i=0;i<n;i++){
		if(strlen(str[i])>max){
			max=strlen(str[i]);
			if(str[i][0]=='a' || str[i][0]=='i' || str[i][0]=='u' || str[i][0]=='e' || str[i][0]=='o'){
				printf("%d\n",strlen(str[i]));
				printf("%s_Cantik\n",str[i]);
			}else{
				printf("%d\n",strlen(str[i]));
				printf("%s_Ganteng\n",str[i]);
			}
		}
	}
	
	for(i=0;i<n;i++){
		if(strlen(str[i])==max){
			if(str[i][0]=='a' || str[i][0]=='i' || str[i][0]=='u' || str[i][0]=='e' || str[i][0]=='o'){
				printf("%d\n",strlen(str[i]));
				printf("%s_Cantik\n",str[i]);
			}else{
				printf("%d\n",strlen(str[i]));
				printf("%s_Ganteng\n",str[i]);
			}
		}
	}
return 0;
}
