#include "declare.h"

int main () {
    int n;

    scanf("%d", &n);

    int i;

    char str[n][64];
    int x[n];

    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
        x[i] = vokal (str[i]);
    }

    print (n, str, x);

    return 0;
}
