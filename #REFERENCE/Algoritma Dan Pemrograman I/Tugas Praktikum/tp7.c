#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char str1[100],str2[100];
		scanf("%s",&str1);
		scanf("%s",&str2);
	int status=0;
	int l;
	int sama=0;
	int sama2=0;
	int k;
	int yes=0;
	for(i=0;i<strlen(str1);i++){
		status=0;
		sama=0;
		if(str1[i]==str2[0]){
			for(j=0;j<strlen(str1);j++){
				if(str1[i+j]==str2[j]){
					sama++;
				}
				if(sama==strlen(str2)){
					for(k=0;k<strlen(str2);k++){
						str1[i+k]='0';
					}
				}
				if(sama==strlen(str2)*2){
					for(l=0;l<strlen(str2);l++){
						str1[i+l]='0';
					}
				}
				
			}
		}
	}
	printf("%s",str1);
	printf("%d",sama);
	char str3[strlen(str1)-strlen(str2)];
	l=0;
	for(i=0;i<strlen(str1);i++){
		
		if(str1[i]=='0'){
		}else{
		str3[l]=str1[i];
		l++;
		}
	}
	i=0;
	int spasi=0;
	for(i=0;i<strlen(str3);i++){
		
		if(str3[i]>='a' && str3[i]<='z'){
		}else{
		str3[i]='\0';
		}
	}
	printf("%s\n",str3);
	i=0;
	l=0;
	k=strlen(str3);
	
	if(strlen(str3)%2==0){
		for(i=0;i<strlen(str3)/2;i++){
			for(j=0;j<i;j++){
				printf(" ");
			}
			for(j=0;j<1;j++){
				l++;
				printf("%c",str3[l-1]);
			}
			
			for(j=(strlen(str3)/2)-1;j>i;j--){
				printf(" ");
			}
			for(j=(strlen(str3)/2)-1;j>i;j--){
				printf(" ");
			}
			
			for(j=0;j<1;j++){
				k--;
				printf("%c",str3[k]);
			}
			printf("\n");
			
		}
	}else{
		for(i=1;i<(strlen(str3)/2);i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<1;j++){
			l++;
			printf("%c",str3[l-1]);
		}
		
		for(j=(strlen(str3)/2)-1;j>i;j--){
			printf(" ");
		}
		for(j=(strlen(str3)/2);j>i;j--){
			printf(" ");
		}
		
		for(j=0;j<2;j++){
			k--;
			if(k==strlen(str3)/2){
				printf(" "); 
			}else{
				printf("%c",str3[k]);
			}
		}
			printf("\n");
		
	}
	
	
	}
	return 0;
}