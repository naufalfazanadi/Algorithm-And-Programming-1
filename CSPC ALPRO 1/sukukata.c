#include <stdio.h>
#include <string.h>

int main () {
	int i, j, n;
	char input[100][100];
	int sumba=0, sumstr=0;

	scanf("%d", &n);

	for (i = 0 ; i < n ; i++) {
		scanf("%s", &input[i]);
	}

	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < strlen(input[i]) ; j++) {
			if (input[i][j] == 'b') {
				// j++;
				if (input[i][j+1] == 'a') {
					sumba++;
				}
			}
		}
		if (sumba >= 2) {
			sumba = 0;
			sumstr++;
		} else {
			sumba = 0;
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
Terdapat masukan beberapa string untuk dimasukkan ke dalam array of string. Periksa apakah ada minimal 3 buah string yang memiliki minimal 2 suku kata ba

Format Masukan:

n, 0 < n < 100, banyaknya string
n baris string

Format Keluaran:

yes atau no
Contoh Masukan

5
baba
lababa
bababa
liba
babi


Contoh Keluaran

yes
 */