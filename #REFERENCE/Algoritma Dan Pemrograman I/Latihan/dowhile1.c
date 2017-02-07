#include<stdio.h>

int main(){
char c;

do{
	printf("berputar lg? (y/t)\n");
	scanf(" %c",&c);
	system("cls");
}while(c == 'y');

return 0;
}
