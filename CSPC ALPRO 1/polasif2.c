#include <stdio.h>

int main () {
	int i,j,n;

	scanf("%d", &n);

	for (i = 0 ; i < 1 ; i++) {
		for (j = 0 ; j < n ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		for (j = 0 ; j < n*2-2 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0 ; i < n-1 ; i++) {
		for (j = n-2 ; j > i ; j--) {
			printf(" ");
		}
		for (j = 0 ; j <= i+1 ; j++) {
			printf("*");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		for (j = 0 ; j < n*2-2 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < i+1 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0 ; i < n-1 ; i++) {
		for (j = 0 ; j < n ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < i ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		for (j = n-2 ; j > i ; j--) {
			printf(" ");
		}
		for (j = n-1 ; j > i ; j--) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0 ; i < 1 ; i++) {
		for (j = 0 ; j < n*2-1 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n*2-1 ; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0 ; i < n ; i++) {
		for (j = n ; j > i ; j--) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		for (j = 0 ; j < i ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n*2-3 ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < i ; j++) {
			printf(" ");
		}
		for (j = 0 ; j < n ; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}