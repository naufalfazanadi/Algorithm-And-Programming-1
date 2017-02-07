#include "faisal.h"

int main(){
	int n;
	scanf("%d",&n);
	int x[n],y[n],z[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		scanf("%d",&z[i]);
	}
	mainn(n,x,y,z);
	return 0;
}
