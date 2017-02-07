#include <stdio.h>

typedef struct {
	int x;
	int y;
}titik;

int main () {
	titik a;

	printf("Koordinat x : ");
	scanf("%d", &a.x);
	printf("Koordinat y : ");
	scanf("%d", &a.y);
	printf("====================\n");
	printf("x : %d | y : %d\n", a.x, a.y);
	return 0;
}