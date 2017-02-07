#include <stdio.h>

int i,j,n;
int pembilang[64],penyebut[64];
int fixed_pembilang[32], fixed_penyebut[32];
int count=0;

void output () {
    for (i = 0; i < count; i++) {
        if (i == 0) {
            printf("%d", fixed_pembilang[i]);
        } else {
            printf(" %d", fixed_pembilang[i]);
        }
    }
    printf("\n");
    for (i = 0; i < count; i++) {
        if (i == 0) {
            printf("%d", fixed_penyebut[i]);
        } else {
            printf(" %d", fixed_penyebut[i]);
        }
    }  
    printf("\n");
}

void input () {
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &pembilang[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &penyebut[i]);
    }
    for (i = 0; i < n; i++) {
        if (pembilang[i] % penyebut[i] == 0 && penyebut[i] != 0 && pembilang[i] >= penyebut[i]) {
            fixed_pembilang[count] = pembilang[i];
            fixed_penyebut[count] = penyebut[i];
            count++;
        }
    }
}

int main () { 
    input();
    output();

    return 0;
}
/*
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut. Diberikan dua buah array of integer yang terdiri dari satu array pembilang dan satu array penyebut. Ambillah pasangan pembilang dan penyebut dan masukkan ke dalam array lain jika pasangan itu adalah bilangan bulat (pembilang dapat dibagi oleh penyebut) (pembilang ke array sendiri, dan penyebut ke array sendiri).
Format Masukan:

n, 0 < n < 50, jumlah bilangan pembilang dan penyebut
n baris bilangan array pembilang
n baris bilangan array penyebut

Format Keluaran:

isi array pembilang yang memenuhi syarat
isi array penyebut yang memenuhi syarat

Contoh Masukan

4
2
10
3
5
1
5
6
3


Contoh Keluaran

2 10
1 5

Contoh Masukan 2

5
12
10
7
15
1
6
5
8
3
9


Contoh Keluaran 2

12 10 15
6 5 3

 */
