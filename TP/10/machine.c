#include "declare.h"

// ----------------Fungsi untuk konversi ke angka---------------
int convert (char sub[]) {
    // kondisi
    switch (sub[0]) {
        case '2' : return 2; break;
        case '3' : return 3; break;
        case '4' : return 4; break;
        case '5' : return 5; break;
        case '6' : return 6; break;
        case '7' : return 7; break;
        case '8' : return 8; break;
        case '9' : return 9; break;
        case '1' : return 10; break; // sedikit spesial untuk yang angka 10
        // mengconvert yang karakter ke angka
        case 'J' : return 11; break;
        case 'j' : return 12; break;
        case 'Q' : return 13; break;
        case 'q' : return 14; break;
        case 'K' : return 15; break;
        case 'k' : return 16; break;
        case 'A' : return 17; break;
        case 'a' : return 18; break;
    }
}

// ----------Fungsi untuk dapat angka max dari kartu teratas---------------
int sort (int n, int index, int one[], int two[], int three[], int four[]) {
    int i, j;
    int fusion[4][n+1];
    int count = 0;

    // -------- Jadikan satu variabel dgn array 2 dimensi -------
    for (i = 0; i < n; i++) {
        fusion[0][i] = one[i];
    }
    // fusion[count][i] = 0;
    // count++;

    for (i = 0; i < n; i++) {
        fusion[1][i] = two[i];
    }
    // fusion[count][i] = 0;
    // count++;

    for (i = 0; i < n; i++) {
        fusion[2][i] = three[i];
    }
    // fusion[count][i] = 0;
    // count++;

    for (i = 0; i < n; i++) {
        fusion[3][i] = four[i];
    }
    // fusion[count][i] = 0;
    // count++;
    // ---------------------------------------------------

    // --------------Sorting ke variabel baru-------------
    int max = 0;
    int temp;
    int tumpuk[n*4];

    for (i = 0; i < n*4; i++) {
        // cari max
        for (j = 0; j < count; j++) {
            if (max < fusion[j][0]) {
                max = fusion[j][0];
                temp = j;   
            }
        }

        // geser kartu ke atas
        for (j = 0; j < n; j++) {
            fusion[temp][j] = fusion[temp][j+1];
        }
        fusion[temp][j] = 0;

        // ke var baru
        tumpuk[i] = max;
        max = 0;
    }
    // ------------------------------------------------

    // mengembalikan nilai sesuai index dari main
    return tumpuk[index];
}

// ---------------Prosedur untuk print-----------------
void print (int card) {
    // switch untuk yang karakter
    switch (card) {
        // convert ulang
        case 18 : printf("a\n"); break;
        case 17 : printf("A\n"); break;
        case 16 : printf("k\n"); break;
        case 15 : printf("K\n"); break;
        case 14 : printf("q\n"); break;
        case 13 : printf("Q\n"); break;
        case 12 : printf("j\n"); break;
        case 11 : printf("J\n"); break;
        // jika bukan karakter langsung print
        default : printf("%d\n", card);
    }
}

/*

Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 10,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin.

*/
