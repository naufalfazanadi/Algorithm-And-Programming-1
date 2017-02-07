#include <stdio.h>
#define LIMIT 10

int main () {
	int barisawal[LIMIT], barisbaru[LIMIT];
	int i,j;
	barisawal[0]=1;
	for (i=1;i<LIMIT;i++) {
		barisbaru[0]=1;
		for(j=1;j<i;j++) {
			barisbaru[j]=barisawal[j-1]+barisawal[j-2];
		}
		barisbaru[i]=1;
		for (j=0;j<=i;j++) {
			printf("%3d ", barisbaru[j]);
		}
		printf("\n");
		for (j=0;j<=i;j++) {
			barisawal[j]=barisbaru[j];
		}
	}
	return 0;
}