#include <stdio.h>

int main () {
	int angka1;
	int angka2;

	//input angka ke 1 dan ke 2
	scanf("%d", &angka1);
	scanf("%d", &angka2);

	//if untuk angka ke 1
	if ((angka1 % 2) == 1) {
		printf("Angka ke 1 ganjil\n");
	}
	else {
		printf("Angka ke 1 genap\n");
	}

	//if untuk angka ke 2
	if ((angka2 % 2) == 1) {
		printf("Angka ke 2 ganjil\n");
	}
	else {
		printf("Angka ke 2 genap\n");
	}

	return 0;
}

//coba coba dari pdf..