/////////////////////////////////////////////////////////
///            [Alpro1] UTS 2nd Number               ////
///         ARRBALIK.C (MEMBALIKAN ARRAY)            ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    int i; // untuk looping
    int n; // jumlah masukan
    int temp; // untuk menampung

    // input jumlah
    scanf("%d", &n);

    int input[n]; // array sejumlah n untuk inputan

    // loop untuk input
    for (i = 0 ; i < n ; i++) {
        scanf("%d", &input[i]); // input angka
    }

    // loop untuk menukar array
    for (i = 0 ; i < n/2 ; i++) {
        temp = input[i+(n/2)]; // menampung array yang di paruh 2
        input[i+(n/2)] = input[i]; // mengganti array dari paruh 1 ke paruh 2
        input[i] = temp; // mengganti array dgn tampungan dari paruh 2
    }

    // ouput array
    for (i = 0 ; i < n ; i++) {
        printf("%d\n", input[i]);
    }
    return 0;
}

//JANJI
/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemrograman 1 dalam mengerjakan UTS,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya,
dan saya bersedia menerima hukumanNya. Aamiin. */

/*
Kompetensi yang dievaluasi: Kemampuan mengakses dan mengoperasikan array.
Diberikan sebuah array dengan n elemen. Pindahkan setengah elemen yang di belakang menjadi berposisi di depan,
 dan setengah elemen yang di depan menjadi berposisi di belakang.
 Gunakan sebuah array saja, dan tidak dengan cara trik.
Format Masukan:

n, 0 < n < 50, banyaknya elemen di dalam array. Selalu bernilai genap.
n baris angka elemen array.

Format Keluaran:

hasil elemen array yang sudah dibalik posisi.

Contoh Masukan

6
1
2
3
4
5
6


Contoh Keluaran

4
5
6
1
2
3

Contoh Masukan 2

10
1
2
3
4
5
6
7
8
9
10


Contoh Keluaran 2

6
7
8
9
10
1
2
3
4
5
 */
