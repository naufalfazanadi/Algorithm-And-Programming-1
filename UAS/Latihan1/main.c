#include "declare.h"

int main () {
    int n;

    scanf("%d", &n);

    int i;

    char str[n][64]; // string
    int x[n]; // untuk ada angka berapa di stringnya

    // input
    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
        // fungsi disini
        // cek char nya ada angka berapa
        x[i] = angka (str[i]);
    }

    for (i = 0; i < n; i++) {
        // printnya pake prosedur
        print (str[i], x[i]);
    }

    return 0;
}
