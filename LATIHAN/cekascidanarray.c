#include <stdio.h>

int main () {
	int a,i;
	char x;
	char n[5];
	scanf(" %c",&x);
	a = x;
	printf("%d\n",a);
	for ( i = 0; i < 5; i++)
	{
		scanf(" %c", &n[i]);
		printf("%c\n", n[i]);
	}
	return 0;
}