/* #include<stdio.h>
#include<string.h>

typedef struct{
	char kata[50];
}string;

int main(){
	int i,j,n;
	scanf("%d",&n);
	string arr[n];
	for(i=0;i<n;i++){
		scanf("%s",&arr[i].kata);
	}
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i].kata);j++){
			printf("%c\n",arr[i].kata[j]);
		}
	}
	
return 0;
}
 */
#include<stdio.h>
#include<string.h>



int main(){
	int i,j,n;
	scanf("%d",&n);
	char arr[n][50];
	for(i=0;i<n;i++){
		scanf("%s",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=strlen(arr[i])-1;j>=0;j--){
			printf("%c\n",arr[i][j]);
		}
	}
	
return 0;
}

