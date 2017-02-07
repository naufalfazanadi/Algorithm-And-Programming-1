#include<stdio.h>
#include<string.h>

int main(){
	char str[100][100];
	char sekian[7]={'S','E','K','I','A','N','\0'};
	int i;
	int j=0;
	int k=0;
	int l=0;
	int status=0;
	int sama=0;
	i=0;
	while(strcmp(str[i-1],sekian)!=0){
		scanf("%s",&str[i]);
		i++;
		j++;
	}
	int ya=0;
	for(i=0;i<j;i++){
		k=0;
		while(str[i][k]!='\0'){
			if(str[i][k]=='h'){
				if(str[i][k+1]=='a'){
					ya++;
				}
			}
			k++;
		}
	}
	if(ya>=10){
		printf("lulus\n");
		printf("%d\n",ya);
	}else{
		printf("tidak lulus\n");
		printf("%d\n",ya);
	}
	
	



	return 0;
}
