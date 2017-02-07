#include <stdio.h>

int i,j,m,n;
int ar1[64],ar2[64];
int genap[32],ganjil[32];
int x=0,y=0;

// int ganfung () {

// }

// int genfung () {

// }

void filter () {

    for (i = 0; i < m; i++) {
        if (ar1[i] % 2 == 1) {
            ganjil[x] = ar1[i];
            x++;
        } else {
            genap[y] = ar1[i];
            y++;
        }
    }
    for (i = 0; i < n; i++) {
        if (ar2[i] % 2 == 1) {
            ganjil[x] = ar2[i];
            x++;
        } else {
            genap[y] = ar2[i];
            y++;
        }
    }
}

int main () {
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &ar1[i]);
    }

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ar2[i]);
    }

    filter();

    for (i = 0; i < x; i++) {
        if (i == 0) {
            printf("%d", ganjil[i]);
        } else {
            printf(" %d", ganjil[i]);
        }
    }
    printf("\n");

    for (i = 0; i < y; i++) {
        if (i == 0) {
            printf("%d", genap[i]);
        } else {
            printf(" %d", genap[i]);
        }
    }
    printf("\n");
    
    return 0;
}
/*
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut. Diberikan dua buah array of integer yang terdiri dari angka ganjil dan genap. Pisahkanlah isi dari kedua array itu menjadi 2 buah array ganjil dan array genap.
Format Masukan:

n, 0 < n < 50, jumlah bilangan array pertama
n baris bilangan array pertama
m, 0 < m < 50, jumlah bilangan array kedua
m baris bilangan array kedua

Format Keluaran:

isi array ganjil
isi array genap

Contoh Masukan

3
1
2
3
5
34
55
66
77
99


Contoh Keluaran

1 3 55 77 99
2 34 66

Contoh Masukan 2

4
2
4
8
18
3
3
10
5


Contoh Keluaran 2

3 5
2 4 8 18 10
 */
