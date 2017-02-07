#include "declare.h"

int check_horizontal(int n, char str[n][64], char wanted[]) {
    // var untuk akses indeks
    int a, i, j, k;
    // for cek
    int check = 0;
    // var penghitung
    int count = 0;

    for (a = 0; a < n; a++) { // untuk akses semua array
        i = 0; 
        while (i < strlen(str[a])) { // mengakses semua char str
            /* WHEN 1ST CHAR SAME */
            if (wanted[0] == str[a][i]) {
                j = 0;
                k = i; 
                /* AFTER THE 1ST CHAR SAME */
                while (wanted[j] == str[a][k] && wanted[j] != '\0' && str[a][k] != '\0') {
                    j++;
                    k++;
                    check++; // <--- check untuk ini
                }

                if (check == strlen(wanted)) { // kalau sama jumlah char yang sama
                    count++;
                }
                check = 0; // direset lagi
            } 
            i++; // iterasi
        }

    }

    return count;
}

int check_vertical(int n, char str[n][64], char wanted[]) {
    // var untuk akses indeks
    int a, i, j, k;
    // for cek
    int check = 0;
    // var penghitung
    int count = 0;
    // cari terpanjang
    int panjang = 0;

    // cari yang paling panjang untuk loop
    for (i = 0; i < n; i++) {
        if (panjang < strlen(str[i])) {
            panjang = strlen(str[i]);
        }
    }

    // akses ke samping
    for (a = 0; a < panjang; a++) {
        i = 0; 
        while (i < n) { // mengakses semua char vertical
            /* WHEN 1ST CHAR SAME */
            if (wanted[0] == str[i][a]) {
                j = 0;
                k = i; 
                /* AFTER THE 1ST CHAR SAME */
                while (wanted[j] == str[k][a] && wanted[j] != '\0' && str[k][a] != '\0') {
                    j++;
                    k++;
                    check++; // <--- check untuk ini
                }

                if (check == strlen(wanted)) { // kalau sama jumlah char yang sama
                    count++;
                }
                check = 0; // direset lagi
            } 
            i++; // iterasi
        }

    }

    return count;
}
