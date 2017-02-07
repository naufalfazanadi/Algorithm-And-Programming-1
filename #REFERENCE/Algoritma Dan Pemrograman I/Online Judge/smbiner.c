#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int a[7];
	a[0]=1;
	a[1]=2;
	a[2]=4;
	a[3]=8;
	a[4]=16;
	a[5]=32;
	a[6]=64;
	a[7]=128;
	int x,i,j,k;
	int jumlah=0;;
	scanf("%d",&n);
	char str[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	
	for(i=0;i<n;i++){
		x=0;
		for(j=strlen(str[i])-1;j>=0;j--){
			if(str[i][j]=='1'){
				jumlah=jumlah+a[x];
				x++;
			}else{
				x++;
			}
		}
	}
	printf("%d\n",jumlah);
	
	return 0;
}