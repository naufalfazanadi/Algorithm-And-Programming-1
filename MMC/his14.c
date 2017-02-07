#include <stdio.h>
#include <string.h>

int main () {
    int i,j,n;

    scanf("%d", &n);

    int m[n];

    int sum[10] = {0};

    for (i = 0; i < n; i++) {
        scanf("%d", &m[i]);
        sum[m[i]]++;
    }

    for (i = 0; i < 10; i++) {
        if (sum[i] != 0) {
            printf("%d ", i);
            for (j = 0; j < sum[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}

/*
Misalkan countA[1..n] adalah sebuah array yang berisi jumlah kemunculan nilai-nilai yang berada dalam rentang 0 - 9 sedemikian sehingga nilai countA[i] berisi kemunculan angka i. Buatlah sebuah program untuk menampilkan histogram yang menyatakan nilai countA[i] dengan syarat countA[i] > 0.

Format Masukkan

n , jumlah elemen array, 0 <= n < 100
m , n baris integer, 0 <= m < 10

Format Keluaran

histogram

Contoh Masukan

17
0
0
1
1
1
2
2
2
2
3
3
4
4
6
6
7
1


Contoh Keluaran

0 **
1 ****
2 ****
3 **
4 **
6 **
7 *

 */
