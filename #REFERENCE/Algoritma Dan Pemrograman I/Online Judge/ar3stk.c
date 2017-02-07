#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int i,j,k;
	scanf("%d",&n);
	char str[n][100];
	char str2[n][100];
	char hasil1[100][100];
	int h;
	char hasil2[100][100];
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	int sama;
	int status;
	int m=0;
	int x=0;
	int z=0;
	for(i=0;i<n;i++){
		j=0;
		sama=0;
		for(j=0;j<strlen(str[i]);j++){
			if(str[i][j]!='a' && str[i][j]!='i' && str[i][j]!='u' && str[i][j]!='e' && str[i][j]!='o' ){ //jika konsonan maka masuk ke if
				if(str[i][j+1]!='a' && str[i][j+1]!='i' && str[i][j+1]!='u' && str[i][j+1]!='e' && str[i][j+1]!='o' ){ // jika konsonan maka lanjut
					if(j+1<strlen(str[i])){
						if(str[i][j+2]!='a' && str[i][j+2]!='i' && str[i][j+2]!='u' && str[i][j+2]!='e' && str[i][j+2]!='o'){ //jika konsonan maka lanjut
							if(j+2<strlen(str[i])){
								sama++; //angka++
							
							}
						}
					}	
				}
			}
		}
		if(sama>0){
			strcpy(hasil1[x],str[i]);
			x++;
		}else{
			strcpy(hasil2[z],str[i]);
			z++;
		}
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%s",&str2[i]);
	}
	for(i=0;i<m;i++){
		sama=0;
		for(j=0;j<strlen(str2[i]);j++){
			if(str2[i][j]!='a' && str2[i][j]!='i' && str2[i][j]!='u' && str2[i][j]!='e' && str2[i][j]!='o' ){ //jika konsonan maka masuk ke if
				if(str2[i][j+1]!='a' && str2[i][j+1]!='i' && str2[i][j+1]!='u' && str2[i][j+1]!='e' && str2[i][j+1]!='o' ){ // jika konsonan maka lanjut
					if(j+1<strlen(str2[i])){
						if(str2[i][j+2]!='a' && str2[i][j+2]!='i' && str2[i][j+2]!='u' && str2[i][j+2]!='e' && str2[i][j+2]!='o'){ //jika konsonan maka lanjut
							if(j+2<strlen(str2[i])){
								sama++; //angka++
							
							}
						}
					}	
				}
			}
		}
		if(sama>0){
			strcpy(hasil1[x],str2[i]);
			x++;
		}else{
			strcpy(hasil2[z],str2[i]);
			z++;
		}
	}
	int spasi=0;
	for(i=0;i<x;i++){
		if(i%2==0){
			printf("%s\n",hasil1[i]);
			spasi=spasi+strlen(hasil1[i]);
		}else{
			for(j=0;j<spasi;j++){
				printf(" ");
			}
			spasi=0;
			printf("%s\n",hasil1[i]);
		}
	}
	spasi=0;
	for(i=0;i<z;i++){
		if(i%2==0){
			printf("%s\n",hasil2[i]);
			spasi=spasi+strlen(hasil2[i]);
		}else{
			for(j=0;j<spasi;j++){
				printf(" ");
			}
			spasi=0;
			printf("%s\n",hasil2[i]);
		}
	}
			
	return 0;
}
	