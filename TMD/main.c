#include "declare.h"

int main () {
    // ------------------------INPUT-------------------------
    int i;
    int m;

    // jumlah string
    scanf("%d", &m);

    char str[m][64];

    // input string
    for (i = 0; i < m; i++) {
        scanf("%s", &str[i]);
    }

    int n;

    // jumlah string asli
    scanf("%d", &n);

    int asli[n];
    int x[n];
    char real[n][64];

    for (i = 0; i < n; i++) {
        // input urutan yang asli
        scanf("%d", &asli[i]);

        // nomor kamus
        x[i] = cek_pesan (str[asli[i] - 1]);

        if (x[i] != 0) {
            // copy ke var baru
            strcpy(real[i], str[asli[i] - 1]);
        } else {
            // jika gaada di kamus ya di \0
            real[i][0] = '\0';
        }
    }
    
    int k;
    // input ketebalan
    scanf("%d", &k);

    // ---------------------------------------------------------

    // EXCEPTION (cek yang belakangnya kosong)
    int exc[n];
    i = n - 1;

    do {
        exc[i] = exception (x[i]);
        i--;
    } while (i >= 0 && exc[i+1] != 0);

    // sisa array nya di nol kan (false)
    for (i; i>= 0; i--) {
        exc[i] = 0;
    }

    //==========================================

    // cek apakah string yang aslinya ada yang sama seperti kamus atau tidak
    int nol = cek_0 (n, x);

    // OUTPUT STRING
    print_string (n, real, nol);

    // OUTPUT POLA
    print_pola (n, x, k, nol, exc);

    return 0;
}

/*
3
tolong
kirim
pasukan
3
3
2
1
2
 */
