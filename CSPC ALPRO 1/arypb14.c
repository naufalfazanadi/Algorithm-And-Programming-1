#include <stdio.h>

int i,j,n;
int mintot[3]={99999,99999,99999},maxtot[3]={0,0,0};
int ar[3][50];
int mins (int x, int y) {
    if (x > y) {
        x = y;
    }
    return x;
}

int maks (int x, int y) {
    if (x < y) {
        x = y;
    }
    return x;
}

void urut () {
    int temp;
    for (i = 0; i < 3; i++) {
        for (j = i; j < 3; j++) {
            if (mintot[i] > mintot[j]) {
                temp = mintot[j];
                mintot[j] = mintot[i];
                mintot[i] = temp;
            }
            if (maxtot[i] > maxtot[j]) {
                temp = maxtot[j];
                maxtot[j] = maxtot[i];
                maxtot[i] = temp;
            }
        }
    }
}

int main () {  

    for (i = 0; i < 3; i++) {
        scanf("%d", &n);
        for (j = 0; j < n; j++) {
            scanf("%d", &ar[i][j]);
            mintot[i] = mins(mintot[i],ar[i][j]);
            maxtot[i] = maks(maxtot[i],ar[i][j]);
        }
    }
    urut();

    printf("%d %d %d\n", mintot[0], mintot[1], mintot[2]);
    printf("%d %d %d\n", maxtot[0], maxtot[1], maxtot[2]);
    return 0;
}
/*
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut.
Diberikan 3 buah array of integer. Carilah bilangan terbesar dan terkecil dari setiap array, lalu tampilkan bilangan terkecil setiap array tersebut urut dari keci ke besar diikuti dengan tampilan bilangan terbesar setiap array tersebut urut dari kecil ke besar. Pengurutan 3 bilangan gunakan if. Nilai terkecil dan terbesar dari 3 buah array tidak ada yang sama.

Format Masukan:

n1, 1 < n1 < 50, banyaknya elemen array pertama
n1 baris elemen array pertama
n2, 1 < n2 < 50, banyaknya elemen array pertama
n2 baris elemen array pertama
n3, 1 < n1 < 50, banyaknya elemen array pertama
n3 baris elemen array pertama

Format Keluaran:

3 angka terkecil urut dari kecil ke besar
3 angka terbesar urut dari kecil ke besar

Contoh Masukan

2
1
2
3
4
6
5
4
12
3
4
7


Contoh Keluaran

1 3 4
2 6 12

Contoh Masukan 2

4
45
1
8
2
5
4
2
6
99
3
2
3
44


Contoh Keluaran 2

1 2 3
44 45 99
 */
