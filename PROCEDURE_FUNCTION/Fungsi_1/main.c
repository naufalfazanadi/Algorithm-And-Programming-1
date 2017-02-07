#include "declare.h"

int main () {
    int n;

    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    thx(min(n, num) * max(n, num));

    return 0;
}
