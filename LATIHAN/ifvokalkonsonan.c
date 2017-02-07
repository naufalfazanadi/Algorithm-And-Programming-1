#include <stdio.h>

int main () {
	char c1,c2,c3;
	scanf ("%c %c %c", &c1, &c2, &c3);

	if ((c1 != 'a') && (c1 != 'i') && (c1 != 'u') && (c1 != 'e') && (c1 != 'o')) {
		if ((c2 == 'a') || (c2 == 'i') || (c2 == 'u') || (c2 == 'e') || (c2 == 'o')) {
			if ((c3 != 'a') && (c3 != 'i') && (c3 != 'u') && (c3 != 'e') && (c3 != 'o')) {
				printf("memenuhi syarat\n");
			}
			else {
				printf("tidak memenuhi syarat\n");
			}
		}
		else {
			printf("tidak memenuhi syarat\n");
		}
	}
	else {
		printf("tidak memenuhi syarat\n");
	}
	return 0;
}