#include<stdio.h>
#include<string.h>

int main(){
	int i,j;
	int k=0;
	int l=0;
	int m=0;
	int n1,n2;
	scanf("%d",&n1);
	char str1[n1][100];
	char str3[100][100];
	char str4[100][100];
	
	for(i=0;i<n1;i++){
		scanf("%s",str1[i]);
	}
	scanf("%d",&n2);
	char str2[n2][100];
	for(i=0;i<n2;i++){
		scanf("%s",str2[i]);
	}
	int sama;
	
	for(i=0;i<n1;i++){
		sama=0;
		for(j=0;j<strlen(str1[i]);j++){
			if(str1[i][j]>='0' && str1[i][j]<='4'){
				sama++;
			}
		}
		if(sama>=1){		
			strcpy(str3[l],str1[i]);
			l++;	
		}else{
			strcpy(str4[m],str1[i]);
			m++;
		}
	}
	int l1=0;
	int m1=0;
	for(i=0;i<n2;i++){
		sama=0;
		for(j=0;j<strlen(str2[i]);j++){
			if(str2[i][j]>='0' && str2[i][j]<='4'){
				sama++;
			}
		}
		if(sama>=1){		
			strcpy(str3[l],str2[i]);
			l++;	
		}else{
			strcpy(str4[m],str2[i]);
			m++;
		}
	}
	int spasi;
	spasi=0;
	for(i=0;i<l;i++){
		if(i%2==0){
			for(j=0;j<spasi;j++){
				printf(" ");
			}
			spasi=0;
			printf("%s",str3[i]);
		}else{
			spasi=spasi+strlen(str3[i]);
		}
	}
	printf("\n");
	spasi=0;
	for(i=0;i<l;i++){
		if(i%2==1){
			for(j=0;j<spasi;j++){
				printf(" ");
			}
			spasi=0;
			printf("%s",str3[i]);
		}else{
			spasi=spasi+strlen(str3[i]);
		}
	}
	
	spasi=0;
	for(i=0;i<m;i++){
		if(i%2==0){
			for(j=0;j<spasi;j++){
				printf(" ");
			}
			spasi=0;
			printf("%s",str4[i]);
		}else{
			spasi=spasi+strlen(str4[i]);
		}
	}
	printf("\n");
	spasi=0;
	for(i=0;i<m;i++){
		if(i%2==1){
			for(j=0;j<spasi;j++){
				printf(" ");
			}
			spasi=0;
			printf("%s",str4[i]);
		}else{
			spasi=spasi+strlen(str4[i]);
		}
	}
	printf("\n");
	return 0;
}
