#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	char arr[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&arr[i]);
	}
	i=0;
	int status[i];
	while(i<n){
		j=0;
		while(arr[i][j]=='a'){
			status[i]=1;
			j++;
		}
	i++;
	}
int yes=0;
for(i=0;i<n;i++){
	if(status[i]==1){
	yes++;
	}
}
if(yes==n){
printf("valid\n");
}else{
printf("tidak valid\n");

}



return 0;
}
