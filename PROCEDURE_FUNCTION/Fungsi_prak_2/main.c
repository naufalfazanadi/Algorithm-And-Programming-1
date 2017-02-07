#include "declare.h"

int main () {
    int n;
    scanf("%d", &n);

    int i,j;
    char imdb[n][64];

    for (i = 0; i < n; i++) {
        scanf("%s", &imdb[i]);
    }

    int m;
    scanf("%d", &m);

    char list[m][64];

    for (i = 0; i < m; i++) {
        scanf("%s", &list[i]);
    }

    if ( /* fungsi */ top_list (n, m, imdb, list) /**/ == n) {
        printf("Valid\n");
    } else {
        printf("Tidak Valid\n");
    }

    return 0;
}
