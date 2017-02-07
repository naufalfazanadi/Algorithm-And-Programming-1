#include "declare.h"

int main () {
    int n;

    scanf("%d", &n);

    int i, j;
    char str[n][64];

    int count = 0;
    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
        // lempar ke fungsi
        count += palindrom(n, str[i]);
    }

    if (count == n) {
        printf("Valid\n");
    } else {
        printf("Tidak Valid\n");
    }

    return 0;
}
