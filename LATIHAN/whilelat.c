/////////////////////////////////////////////////////////
///               [Alpro1] Meet-9                    ////
///              WHILE - PRACTICE 1                  ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    int n;

    // input jumlah
    scanf("%d", &n);    

    int input[n];
    int i;

    // input angka sejumlah n
    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    // ==============================
    // inisialisasi
    int count=0;
    int bol=0;
    // ==============================

    /* while dan for beda nya while itu bisa stop ditengah jalan */
    // kalo for harus pake break;

    while ((bol == 0) && (count < n) /* kondisi */ ) {
        if (input[count] % 2 == 1) {
            bol++; // untuk true of false
        } else {
            count++; // iterasi
        }
    }

    //output
    if (bol == 1) { // jika true
        printf("Ada angka ganjil\n");
    } else { // jika false
        printf("tidak ada angka ganjil\n");
    }
    return 0;
}
