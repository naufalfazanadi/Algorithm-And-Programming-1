#include <stdio.h>

int main () {
	int i,j,k,n;
	scanf("%d",&n);
	for (i=1;i <= n*2;i++) {
		for (j=1;j<=i;j++) {
			printf("*");

		}

		for (j=n*2;j>=i+1;j--) {
			printf(" ");
		}

		for (j=n*2;j>=i+1;j--) {
			printf(" ");
		}

		for (j=1;j<=i;j++) {
			printf("*");
		}

		for (j=1;j<=i-1;j++) {
			printf("*");

		}

		for (j=n*2;j>=i+1;j--) {
			printf(" ");
		}

		for (j=n*2;j>=i+1;j--) {
			printf(" ");
		}

		for (j=1;j<=i;j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i=1;i<=n;i++) {
		
		for (j=1;j<=n*2+1;j++) {
			printf(" ");	
		}
		for (j=1;j<=n*3-1;j++) {
			printf("*");	
		}
		for (j=1;j<=n-2;j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i=1;i<=n;i++) {
		for (j=1;j<=n*2;j++) {
			printf(" ");
		}
		for (j=1;j<=n*2-1;j++) {
			printf(" ");
		}
		for (j=1;j<=n-2;j++) {
			printf(" ");
		}
		for (j=1;j<=i;j++) {
			printf(" ");
		}
		for (j=n;j>=i;j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*Buatlah pola bintang-bintang dengan pola sebagai berikut jika masukan adalah 3:

*          *          *
**        ***        **
***      *****      ***
****    *******    ****
*****  *********  *****
***********************
       *********
       *********
       *********
             ***
              **
               *
Format Masukan:

n, 0 < n < 20, integer penentu pola

Format Keluaran:

pola bintang-bintang

Contoh Masukan

3


Contoh Keluaran

*          *          *
**        ***        **
***      *****      ***
****    *******    ****
*****  *********  *****
***********************
       *********
       *********
       *********
             ***
              **
               *

Contoh Masukan 2

4

Contoh Keluaran 2

*              *              *
**            ***            **
***          *****          ***
****        *******        ****
*****      *********      *****
******    ***********    ******
*******  *************  *******
*******************************
         *************
         *************
         *************
         *************
                  ****
                   ***
                    **
                     *

       
Contoh Masukan 3

5

Contoh Keluaran 3

*                  *                  *
**                ***                **
***              *****              ***
****            *******            ****
*****          *********          *****
******        ***********        ******
*******      *************      *******
********    ***************    ********
*********  *****************  *********
***************************************
           *****************
           *****************
           *****************
           *****************
           *****************
                       *****
                        ****
                         ***
                          **
                           *

*/
