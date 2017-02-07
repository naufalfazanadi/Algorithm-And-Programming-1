#include "faisal.h"

int main(){
	int n,i; 
	scanf("%d",&n);
	char str[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&str[i]);
	}
	hasil(n,str);
	
	return 0;
}