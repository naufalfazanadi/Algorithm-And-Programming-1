#include "declare.h"

// fungsi menghitung genap
int cek_genap (char str[]) {
    int count=0;

    if (strlen(str) % 2 == 0) {
        count++;
    }

    return count;
}

// fungsi menghitung ganjil
int cek_ganjil (char str[]) {
    int count=0;

    if (strlen(str) % 2 == 1) {
        count++;
    }

    return count;
}

// prosedur output pola 1
void print_pola1 (int n, char str[n][64]) {
    int i, j, k;
    int spasi = 0;

    // loop sebanyak jumlah nya
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // print yang miring
            for (j = 0; j < strlen(str[i]); j++) {
                for (k = 0; k < spasi; k++) {
                    printf(" ");
                }
                for (k = 0; k < j; k++) {
                    printf(" ");
                }
                printf("%c\n", str[i][j]);
            }
        } else {
            // print yang lurus
            for (j = 0; j < spasi; j++) {
                printf(" ");
            }
            printf("%s\n", str[i]);
        }
        // iterasi spasi
        spasi += strlen(str[i]);
    }
}

// prosedur output pola 2
void print_pola2 (int n, char str[n][64]) {
    int i, j, k;
    int baris;
    int count = 0;
    int spasi = 0;

    // untuk mengetahui berapa blok
    if (n % 4 == 0) {
        baris = n / 4;
    } else {
        baris = n / 4 + 1;
    }

    j = 0;
    for (i = 0; i < baris; i++) {
        while (j < 4 && count < n) {
            if (j == 0 || j == 1) {
                // pola ke 1
                for (k = 0; k < spasi; k++) {
                    printf(" ");
                }
                // print perchar terbalik
                for (k = strlen(str[count]) - 1; k >= 0; k--) {
                    printf("%c", str[count][k]);
                }
                printf("\n");
                
                spasi = strlen(str[count]);
                
                // iterasi
                count++;
                j++;

            } else {
                // pola ke 2
                if (j == 2) {
                    spasi = strlen(str[count+1]);
                } else {
                    spasi = 0;
                }

                for (k = 0; k < spasi; k++) {
                    printf(" ");
                }
                // print perchar terbalik
                for (k = strlen(str[count]) - 1; k >= 0; k--) {
                    printf("%c", str[count][k]);
                }
                printf("\n");
                count++;
                j++;
            }
        }
        // reset
        j = 0;
        spasi = 0;
    }
}

/*
4
akuu
adalah
anak
gembala


Contoh Keluaran

uuka
    halada
       kana
alabmeg

Contoh Masukan 2

6
aku
anak
adalah
gembala
selaluu
riang


Contoh Keluaran 2

a
 k
  u
   anak
       a
        d
         a
          l
           a
            h
             gembala
                    s
                     e
                      l
                       a
                        l
                         u
                          u
                           riang
 */
