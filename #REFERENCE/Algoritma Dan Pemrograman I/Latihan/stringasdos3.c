#include<stdio.h>
#include<string.h>
int main(){
	
	char str[100];
	char p1='z';
	char p2='Z';
	scanf("%s",&str);
	int i=0;
	int kap=0,kecil=0;
	
	for(i=0;i<strlen(str);i++){
	if(str[i]>='A' && str[i]<='Z'){
	kap++;
	}
	if(str[i]>='a' && str[i]<='z'){
	kecil++;
	}
	
	}
printf("%d\n %d\n",kap,kecil);

return 0;
}

