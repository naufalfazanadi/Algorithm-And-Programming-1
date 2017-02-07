#include <stdio.h>

int main () {
    int i; // untuk for
    int n; // jumlah input
    int input[100]; // kita sediakan saja array nya 100
    int jumlah=0; // untuk jumlah array

    // input jumlah inputan
    scanf("%d", &n);

    // input angka
    for (i = 0 ; i < n ; i++) {
        scanf("%d", &input[i]);
    }

    // jumlahkan
    for (i = 0 ; i < n ; i++) {
        jumlah = jumlah + input[i];
    }
    // ouput
    printf("%d\n", jumlah);
    return 0;
}
