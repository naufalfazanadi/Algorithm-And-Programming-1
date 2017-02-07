#include "declare.h"

// FUNGSI CARI MINIMAL
int min (int paruh, int num) {
    if (paruh > num) {
        paruh = num;
    }

    return paruh;
}

// FUNGSI MEMBANDINGKAN
int banding (int paruh1, int paruh2) {
    int count;

    if (paruh1 >= paruh2) {
        count = paruh1;
    } else {
        count = paruh2;
    }

    return count;
}

// PROSEDUR UNTUK OUTPUT
void print (int m, char str[m][64], int lipat) {
    int i;

    // output hasil banding (kelipatan)
    printf("%d\n", lipat);
    // output string dengan kelipatan
    for (i = lipat-1; i < m; i+= lipat) {
        printf("%s\n", str[i]);
    }
    
}
