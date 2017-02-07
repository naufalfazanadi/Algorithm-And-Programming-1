#include "header.h"

int main(){
	int n,i; //deklar
	scanf("%d",&n); //input
	int angka[n];
	for(i=0;i<n;i++){
		scanf("%d",&angka[i]);
	}
	int status; //input :D
	scanf("%d",&status);
	prosedur(n,angka,status); //panggil prosedur
	
	return 0;
}