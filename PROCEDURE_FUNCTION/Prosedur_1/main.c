#include "pola.h"

int main () {
    int x;

    scanf("%d", &x);

    pola(x);
    pola(x+2);
    pola(x+4);

    int i;
    int kumpulan[x];

    for (i = 0; i < x; i++) {
        scanf("%d", &kumpulan[i]);
    }

    tulis_array (x, kumpulan);

    return 0;
}
