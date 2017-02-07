#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,l,sama=0;
	int yes=0;
	char arr1[100];
	char arr2[100];
	
	scanf("%s",arr1);
	scanf("%s",arr2);
	i=0;
	for(i=0;i<strlen(arr1);i++){
			while(yes!=1 && j<strlen(arr2)){				
					for(k=0;k<strlen(arr2);k++){
						if(arr1[j+k]==arr2[k]){
							sama++;
						}
						if(sama==strlen(arr2)){
							for(l=0;l<strlen(arr2);l++){
								arr1[k+l]='0';
							}
						yes=1;	
						}
					printf("*&");	
					}
					j++;
			}
		
	}
printf("%s",arr1);
return 0;
}
