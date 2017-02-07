#include <stdio.h>

int i,j,n;
int ar[3][50];
int rataawal[3],rataakhir[3];

int start (int k) {
    int sum=0, x=0;
    int rata=0;
    
    for(j = 0; j < n/2; j++) {
        sum += ar[k][j];
        x++;
    }
    rata = sum / x;
    sum=0;

    return rata;
}

int end (int k) {
    int sum=0, x=0;
    int rata;

    for(j = n/2; j < n; j++) {
        sum += ar[k][j];
        x++;
    }
    rata = sum / x;
    sum=0;

    return rata;
}

void urut () {
    int temp;
    for (i = 0; i < 3; i++) {
        for (j = i; j < 3; j++) {
            if (rataawal[i] < rataawal[j]) {
                temp = rataawal[j];
                rataawal[j] = rataawal[i];
                rataawal[i] = temp;
            }
            if (rataakhir[i] < rataakhir[j]) {
                temp = rataakhir[j];
                rataakhir[j] = rataakhir[i];
                rataakhir[i] = temp;
            }
        }
    }
}

int main () {  

    for (i = 0; i < 3; i++) {
        scanf("%d", &n);
        for (j = 0; j < n; j++) {
            scanf("%d", &ar[i][j]);
        }
        rataawal[i] = start(i);
        rataakhir[i] = end(i);
    }
    urut();

    printf("%d %d %d\n", rataawal[0], rataawal[1], rataawal[2]);
    printf("%d %d %d\n", rataakhir[0], rataakhir[1], rataakhir[2]);
    return 0;
}
/*
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut.
Diberikan 3 buah array. Ambillah nilai rata-rata nilai separuh elemen array bagian depan dan bagian belakang (diambil hanya integer tanpa koma). Lalu tampilkan secara urut dari nilai yang besar ke kecil dari semua array (gunakan if untuk mengurutkan 3 bilangan dari besar ke kecil). Banyaknya elemen array selalu genap.

Format Masukan:

n1, 1 < n1 < 50, banyaknya elemen array pertama
n1 baris elemen array pertama
n2, 1 < n2 < 50, banyaknya elemen array pertama
n2 baris elemen array pertama
n3, 1 < n1 < 50, banyaknya elemen array pertama
n3 baris elemen array pertama

Format Keluaran:

3 angka rata-rata bagian depan array urut dari besar ke kecil
3 angka rata-rata bagian belakang array urut dari besar ke kecil. Setiap kasus pengurutan tidak ada angka yang sama.

Contoh Masukan

2
4
6
4
3
4
11
12
6
1
2
3
4
5
6


Contoh Keluaran

4 3 2
11 6 5

Contoh Masukan 2

4
24
11
3
6
4
12
10
5
7
2
7
8


Contoh Keluaran 2

17 11 7
8 6 4
 */
