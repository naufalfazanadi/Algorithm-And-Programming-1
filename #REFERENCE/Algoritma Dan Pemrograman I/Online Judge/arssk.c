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
	char del1[100],del2[100];
	scanf("%s",&del1);
	scanf("%s",&del2);
	int indeks;
	int sama,sama2,yes,sip=0,sip2=0;;
 	for(i=0;i<n;i++){
		sama=0;
		sama2=0;
		yes=0;
		indeks=0;
		if(str1[i][0]==del1[0]){
			for(k=0;k<strlen(del1);k++){
				if(str1[i][k]==del1[k]){
					sama++;
				}
				if(sama==strlen(del1)){
					yes++;
				}
			}
			
			for(k=strlen(str1[i])-strlen(del2);k<strlen(str1[i]);k++){
				if(str1[i][k]==del2[indeks]){
					sama2++;
					indeks++;
				}
				if(sama2==strlen(del2)){
					yes++;
				}
			}
			
		}
		if(yes>=2){
			sip++;
		}
	} 
	for(i=0;i<m;i++){
		sama=0;
		sama2=0;
		yes=0;
		indeks=0;
		if(str2[i][0]==del1[0]){
			for(k=0;k<strlen(del1);k++){
				if(str2[i][k]==del1[k]){
					sama++;
				}
				if(sama==strlen(del1)){
					yes++;
				}
			}
			for(k=strlen(str2[i])-strlen(del2);k<strlen(str2[i]);k++){
				if(str2[i][k]==del2[indeks]){
					sama2++;
					indeks++;
				}
				if(sama2==strlen(del2)){
					yes++;
				}
			
			}
		
			
		}
		
		if(yes>=2){
			sip2++;
		}
	}
	if(sip==sip2){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	return 0;
}
