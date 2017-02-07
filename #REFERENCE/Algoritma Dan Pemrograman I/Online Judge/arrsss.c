#include<stdio.h>
#include<string.h>

int main(){
	int i,j,k,n,m;
	scanf("%d",&n);
	char str1[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&str1[i]);
	}
	scanf("%d",&m);
	char str2[m][100];
	for(i=0;i<m;i++){
		scanf("%s",&str2[i]);
	}  
	char del1[100];
	scanf("%s",&del1);
	int sama,sip=0,sip2=0,status=0;;
 	for(i=0;i<n;i++){
		
		j=0;
		status=0;
		while(status!=1 && j<strlen(str1[i])){
			sama=0;
			if(str1[i][j]==del1[0]){
				for(k=0;k<strlen(del1);k++){
					if(str1[i][j+k]==del1[k]){
						sama++;
					}
				}
				if(sama==strlen(del1)){
					sip++;
					status=1;
				}
			}
			j++;
		}		
	} 
	for(i=0;i<m;i++){
		
		j=0;
		status=0;
		while(status!=1 && j<strlen(str2[i])){
			sama=0;
			if(str2[i][j]==del1[0]){
				for(k=0;k<strlen(del1);k++){
					if(str2[i][j+k]==del1[k]){
						sama++;
					}
				}
				if(sama==strlen(del1)){
					sip2++;
					status=1;
				}
			}
			j++;
		}		
	} 
	if(sip==sip2){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	return 0;
}
