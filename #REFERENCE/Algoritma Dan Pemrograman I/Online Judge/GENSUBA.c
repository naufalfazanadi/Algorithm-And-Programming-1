#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	char gen[n][100];
	char subs[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&gen[i]);
		scanf("%s",&subs[i]);
	}
	char cmp1[n],cmp2[n];
	for(i=0;i<n;i++){
		if(gen[i][0]=='O'){
			cmp1[i]=subs[i][2];
		}else{
			cmp1[i]=gen[i][0];
		}
		if(gen[i][strlen(gen[i])-1]=='O'){
			cmp2[i]=subs[i][strlen(subs[i])-1];
		}else{
			cmp2[i]=gen[i][strlen(gen[i])-1];
		}
	}
	for(i=0;i<n;i++){
		if(cmp1[i]==cmp2[i]){
			printf("NORMAL\n");
		}else{
			printf("MUTASI\n");
		}
	}
	return 0;
}
