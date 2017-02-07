#include "declare.h"

// -------------------Procedure for change char----------------------
void exchange (int n, char x[n], char y[n], char str[64][64]) {

    // Switch char
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            for (k = 0; k < strlen(str[j]); k++) {
                if (str[j][k] == x[i]) {
                    str[j][k] = y[i];
                }
            }
        }
    }
    
    // ---------------OUTPUT----------------
    for (j = 0; j < count; j++) {
        if (j == 0) {
            printf("%s", str[j]);
        } else {
            printf(" %s", str[j]);
        }
    }

    printf("\n");

}

// -------------------Procedure for vocal and reverse char----------------------
void slide (char str[64][64]) {
    char vokal[64];
    int hitung=0;

    // gabung char vokal
    for (i = 0; i < count; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'a' || str[i][j] == 'i' || 
                str[i][j] == 'u' || str[i][j] == 'e' || 
                str[i][j] == 'o' || str[i][j] == 'A' ||
                str[i][j] == 'I' || str[i][j] == 'U' || 
                str[i][j] == 'E' || str[i][j] == 'O') {
                
                vokal[hitung] = str[i][j];
                hitung++;
            
            }
        }
    }
    vokal[hitung] = '\0';

    // putar char 1 kali
    char temp;
    temp = vokal[strlen(vokal)-1];

    for (i = strlen(vokal)-1; i > 0; i--) {
        vokal[i] = vokal[i - 1];
    }

    vokal[i] = temp;    

    // balikan lagi, cieeee balikan :D
    hitung = 0;
    for (i = 0; i < count; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'a' || str[i][j] == 'i' || 
                str[i][j] == 'u' || str[i][j] == 'e' || 
                str[i][j] == 'o' || str[i][j] == 'A' ||
                str[i][j] == 'I' || str[i][j] == 'U' || 
                str[i][j] == 'E' || str[i][j] == 'O') {
                
                str[i][j] = vokal[hitung];
                hitung++;
            
            }
        }
    }

    // reverse char
    char reverse[10][64];
    for (i = 0; i < count; i++) {
        for (j = strlen(str[i])-1; j >= 0; j--) {
            reverse[i][(strlen(str[i]) - 1) - j] = str[i][j];
        }
        reverse[i][(strlen(str[i]))] = '\0';
    }

    // ---------------OUTPUT----------------
    for (i = count-1; i >= 0; i--) {
        if (i == count-1) {
            printf("%s", reverse[i]);
        } else {
            printf(" %s", reverse[i]);
        }
    }
    printf("\n");
}

/*
Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 9,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin.
*/
