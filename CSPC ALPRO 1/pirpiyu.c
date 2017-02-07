#include <stdio.h>
#include <string.h>

int main () {
	int i, j;
	char str[100];
	int bef=-1, baris=0, deret=0, n=0, range=1;

	scanf("%s", &str);
	
	while(deret < strlen(str)) {
		baris++;
		bef = bef + 2;
		deret = deret + bef;
	}

	for (i = 0 ; i < baris ; i++) {
		for (j =  baris ; j > i+1 ; j--) {
			printf(" ");
		}
		for (j = 0 ; j < range ; j++) {
			if (n < strlen(str)) {
				printf("%c",str[n]);
				n++;
			}
		}
		range+=2;
		printf("\n");
	}
	return 0;
}

/*
Si Piyu ingin membuat piramida dari deretan huruf yang dimilikinya. Deretan huruf yang dimiliki Piyu misalnya:


akuadalahanakgembaladombagarut

maka piramida yang dibentuk adalah:

     a
    kua
   dalah
  anakgem
 baladomba
garut

Format Masukan:


deretan huruf milik Piyu, maksimal 100 huruf

Format Keluaran:


piramida Piyu 

Contoh Masukan

akuadalahanakgembaladombagarut


Contoh Keluaran

     a
    kua
   dalah
  anakgem
 baladomba
garut

 */