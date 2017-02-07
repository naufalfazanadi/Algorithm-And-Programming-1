#include<stdio.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	char angka[n][100];
	char hasil[n][100];
	char del[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s",&del[i]);
		scanf("%s",&angka[i]);
	}
	int k;
	for(i=0;i<n;i++){
		for(j=0;j<strlen(angka[i]);j++){
			if(angka[i][j]==del[i]){
				angka[i][j]='A';
			}
		}
		
	}
	int a;
	int x;
	int b;
	for(i=0;i<n;i++){
		k=0;
		a=0;
		x=0;
		b=0;
		for(j=0;j<strlen(angka[i]);j++){
			if(angka[i][j]=='A'){
			 a++;
			}else{
				hasil[i][k]=angka[i][j];
				k++;
			}
		}
		for(j=0;j<strlen(hasil[i]);j++){
			if(hasil[i][j]>='0' && hasil[i][j]<='9'){
		
			}else{
				hasil[i][j]='\0';
			}
		}
		for(j=0;j<strlen(hasil[i]);j++){
			if(hasil[i][j]=='0'){
				b++;
			}
		}
		if(a==strlen(angka[i])){
		printf("0\n");
		}else if(b==strlen(hasil[i])){
		printf("0\n");
		}else{
		printf("%s\n",hasil[i]);
		}
	}


	return 0;
}