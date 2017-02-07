#include <stdio.h>

int main () {
	int a[5];
	int i,j;
	for (i=0;i<5;i++) {
		for (j=0;j<=i;j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i=0;i<5;i++) {
		scanf ("%d", &a[i]);
		// printf("%d\n", a[i]);
	}
	for (i=0;i<5;i++) {
		printf("%d\n", a[i]);
	}	
}