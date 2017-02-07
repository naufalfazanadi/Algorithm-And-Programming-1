#include <stdio.h>
#include <string.h>

int main () {
    int i,j;
    int n;

    scanf("%d", &n);

    char str[n][64];

    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d %s\n", i+1, str[i]);
        }
    }

    for (i = 0; i < n; i++) {
        if (i % 2 == 1) {
            printf("%d %s\n", i+1, str[i]);
        }
    }

    return 0;
}
