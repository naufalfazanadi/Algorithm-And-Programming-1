#include "faisal.h"
int main(){
	int n;
	scanf("%d",&n);
	char string[100][100];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",&string[i]);
	}

	aduh hasil;
	hasil = sesuatu(string,n);
	
	printf("\n%s\n",hasil.asd1);
	
	return 0;
}
