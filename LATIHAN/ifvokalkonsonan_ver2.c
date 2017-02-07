#include <stdio.h>

int main () {
	//deklarasi untuk inputan char
	char c1,c2,c3,c4,c5,c6;
	//input kombinasi
	scanf ("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);
	//untuk pemisalan boolean
	int x=0,y=0,z=0;
	//memeriksa apakah kominasi valid atau tidak 	
	if ((c1 != 'a') && (c1 != 'i') && (c1 != 'u') && (c1 != 'e') && (c1 != 'o')) {
		if ((c2 == 'a') || (c2 == 'i') || (c2 == 'u') || (c2 == 'e') || (c2 == 'o')) {
			x=1;
		} 
	} else if ((c1 == 'a') || (c1 == 'i') || (c1 == 'u') || (c1 == 'e') || (c1 == 'o')) {
		if ((c2 != 'a') && (c2 != 'i') && (c2 != 'u') && (c2 != 'e') && (c2 != 'o')) {
			x=1;
		}
	}
	

	if ((c3 != 'a') && (c3 != 'i') && (c3 != 'u') && (c3 != 'e') && (c3 != 'o')) {
		if ((c4 == 'a') || (c4 == 'i') || (c4 == 'u') || (c4 == 'e') || (c4 == 'o')) {
			y=1;
		} 	
	} else if ((c3 == 'a') || (c3 == 'i') || (c3 == 'u') || (c3 == 'e') || (c3 == 'o')) {
		if ((c4 != 'a') && (c4 != 'i') && (c4 != 'u') && (c4 != 'e') && (c4 != 'o')) {
			y=1;
		} 
	}
	

	if ((c5 != 'a') && (c5 != 'i') && (c5 != 'u') && (c5 != 'e') && (c5 != 'o')) {
		if ((c6 == 'a') || (c6 == 'i') || (c6 == 'u') || (c6 == 'e') || (c6 == 'o')) {
			z=1;
		} 	
	} else if ((c5 == 'a') || (c5 == 'i') || (c5 == 'u') || (c5 == 'e') || (c5 == 'o')) {
		if ((c6 != 'a') && (c6 != 'i') && (c6 != 'u') && (c6 != 'e') && (c6 != 'o')) {
			z=1;
		}
	}
	
	//jika true semua maka valid dan sebaliknya
	if ((x==1)&&(y==1)&&(z==1))
		printf("kombinasi valid\n");
	else
		printf("kombinasi tidak valid\n");

	return 0;
}