#include <stdio.h>
#include <string.h>

int main () {
	int i, j, n;
	int sumang=0,sumstr=0;
	char input[100][100];

	scanf("%d", &n);

	for (i = 0 ; i < n ; i++) {
		scanf("%s", &input[i]);
	}

	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < strlen(input[i]) ; j++) {
			if ((input[i][j] >= '0') && (input[i][j] <= '9')) {
				sumang++;
			}
		}
		if (sumang >= 2) {
			sumstr++;
			sumang=0;
		} else {
			sumang = 0;
		}
	}

	if (sumstr >= 3) {
		printf("yes\n");
	} else {
		printf("no\n");
	}
	return 0;
}
/*
Terdapat masukan beberapa string untuk dimasukkan ke dalam array of string. Periksa apakah ada minimal 3 buah string yang memiliki minimal 2 karakter angka

Format Masukan:

n, 0 < n < 100, banyaknya string
n baris string

Format Keluaran:

yes atau no
Contoh Masukan

4
4ku
4d4l4h
4n4k
g3mb4l4


Contoh Keluaran

yes
 */