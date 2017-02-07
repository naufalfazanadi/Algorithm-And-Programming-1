#include "faisal.h"
int main(){
	int n;
	int fikri;
	scanf("%d",&n);
	scanf("%d",&fikri);
	int i;
	int str[fikri];
	for(i=0;i<fikri;i++){
		scanf("%d",&str[i]);
	}
	pola(n);
	pola(fikri);
	counter(fikri);
	counter(n);
	array(fikri,str);
return 0;
}