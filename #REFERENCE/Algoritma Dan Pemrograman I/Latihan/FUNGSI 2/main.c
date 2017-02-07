#include "faisal.h"

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int maxi=max(n,arr);
	int mini=min(n,arr);
	int hasil=selisih(maxi,mini);
	pola(hasil);
}