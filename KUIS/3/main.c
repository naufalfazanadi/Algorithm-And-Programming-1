#include "declare.h"

int main () {
    int i, j, n;

    // input n
    scanf("%d", &n);

    char str[n][64];
    // var penghitung ganjil genap;
    int ganjil = 0, genap = 0;

    // loop untuk input string dan cek jumlah nya
    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);

        // menggunakan fungsi
        genap += cek_genap(str[i]);
        ganjil += cek_ganjil(str[i]);
    }

    // jika ganjil lebih banyak
    if (ganjil > genap) {
        // print dengan prosedur
        print_pola1 (n, str);

    // jika genap lebih banyak
    } else if (ganjil < genap) {
        // print dengan prosedur
        print_pola2 (n, str);
    
    }

    return 0;
}
