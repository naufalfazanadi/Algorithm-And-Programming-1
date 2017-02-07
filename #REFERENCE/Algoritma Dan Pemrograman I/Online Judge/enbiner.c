#include<stdio.h>
#include<string.h>

int main(){
	int i,j;
	int a[7];
	a[0]=1;
	a[1]=2;
	a[2]=4;
	a[3]=8;
	a[4]=16;
	a[5]=32;
	a[6]=64;
	a[7]=128;
	char str[0][50];
	char huruf[27];
	int asci=97;
	scanf("%s",&str[0]);
	int biner[strlen(str[0])];
	for(i=0;i<26;i++){
		huruf[i]=asci;
		asci++;
	}
	printf("%c\n",huruf[0]);
	huruf[27]=' ';
	for(i=0;i<strlen(str[0]);i++){
		for(j=0;j<27;j++){
			if(str[0][i]==huruf[j]){
				biner[i]=str[0][i]-96;
			}
		}
	}
	printf("%d\n",strlen(str[0]));
	printf("%c~\n",str[0][1]);
	printf("%d\n",biner[0]);
	// for(i=0;i<strlen(kata);i++){
		// printf("%d\n",biner[i]);
	// }
	
	return 0;
}
