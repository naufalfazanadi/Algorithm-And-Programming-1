#include "declare.h"

int main () {
    int n;

    scanf("%d", &n);

    char str[n][64];

    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }

    print (n, str, search(n, str));

    return 0;
}
