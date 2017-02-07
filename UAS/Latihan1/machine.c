#include "declare.h"

// FUNGSI
int angka (char str[]) {
    int i;

    // loop sebanyak panjang string buat akses char
    for (i = 0; i < strlen(str); i++) {
        switch (str[i]) {
            case '0' : return 0; break; // jika ada char '0' maka return angka 0
            case '1' : return 1; break; // jika ada char '1' maka return angka 1
            case '2' : return 2; break; // jika ada char '2' maka return angka 2
            case '3' : return 3; break; // jika ada char '3' maka return angka 3
            case '4' : return 4; break; // jika ada char '4' maka return angka 4
            case '5' : return 5; break; // jika ada char '5' maka return angka 5
            case '6' : return 6; break; // jika ada char '6' maka return angka 6
            case '7' : return 7; break; // jika ada char '7' maka return angka 7
            case '8' : return 8; break; // jika ada char '8' maka return angka 8
            case '9' : return 9; break; // jika ada char '9' maka return angka 9
        }
    }

}

// PROSEDUR
void print (char str[], int x) {
    int i, j;
    // spasi untuk yang nempel tembok pertamanya
    int spasi1 = 0; 
    // spasi untuk yang setelahnya
    int spasi2 = strlen(str);

    for (i = 0; i < x; i++) {
        // untuk yang ganjil
        if (i % 2 == 0) {
            
            for (j = 0; j < spasi1; j++) {
                printf(" ");
            }
            printf("%s\n", str);
            spasi1++; // nambah satu

        } else { // genap

            for (j = 0; j < spasi2; j++) {
                printf(" ");
            }
            printf("%s\n", str);
            spasi2++; // nambah satu

        }
    }

}
