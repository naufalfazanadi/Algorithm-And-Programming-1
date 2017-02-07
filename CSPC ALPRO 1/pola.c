#include <stdio.h>
#include <string.h>

int main () {
	int i,j;
	char x[100];
	int temp;

	scanf("%s", &x);

	temp = strlen(x)/2;
	
	for (i = temp ; i < strlen(x) ; i++) {
		for (j = strlen(x)-1; j > i ; j--) {
			printf(" ");
		}
		printf("%c",x[i]);
		for (j = temp+1 ; j <= i ; j++) {
			printf(" ");
		}

		if (strlen(x)%2==0) {
			
			for (j = 0 ; j < 1 ; j++) { 
				printf(" ");
			}	
			for (j = temp+1 ; j <= i ; j++) {
				printf(" ");
			}
			printf("%c",x[strlen(x)-1-i]);

		} else if (strlen(x)%2==1) {

			for (j = temp+1 ; j < i ; j++) {
				printf(" ");
			}
			if (i>=temp+1) {
				printf("%c",x[strlen(x)-1-i]);
			}

		}
		
		printf("\n");
	}
	return 0;
}
/*
pak zacky sedang kebingungan dengan susunan kata yang dia miliki, dia ingin membuat suatu pola dengan susunan yang dia miliki dia terinspirasi saat melihat sebuah gunung, maka dia akan membuat susunan kata yang dia miliki menjadi pola gunung.
Contoh Masukan

belajaralpro


Contoh Keluaran

     r a
    a   j   
   l     a
  p       l
 r         e
o           b
					

 */
