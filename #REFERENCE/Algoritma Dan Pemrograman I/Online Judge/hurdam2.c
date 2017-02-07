#include<stdio.h>
#include<string.h>

int main(){
	int m;
	char str[100];
	scanf("%d",&m);
	scanf("%s",&str);
	int max[m];
	int n[26];
	char huruf[26]="abcdefghijklmnopqrstuvwxyz";
	int asci=97;
	int decimal[26];
	
	int i;
	int j,k;
	char kar[m];
	
	for(i=0;i<26;i++){		
		n[i]=0;
		for(j=0;j<strlen(str);j++){
			decimal[j]=str[j];
			if(decimal[j]==asci){
				n[i]=n[i]+1;
			}
		}
		
		asci++;
	}
	int status;
	for(i=0;i<m;i++){
		max[i]=0;
		status=0;
		for(j=0;j<26;j++){
			if(n[j]>max[i]){
				max[i]=n[j];
				kar[i]=huruf[j];
			}
			if(j==25){
				k=0;
				while(status!=1){
					if(max[i]==n[k]){
						n[k]=0;
						status=1;
					}
					k++;
				}
				
			}
			
		}
		
	}
	for(i=0;i<m;i++){
		printf("%c ",kar[i]);
		printf("%d\n",max[i]);
		
	}
	return 0;
}