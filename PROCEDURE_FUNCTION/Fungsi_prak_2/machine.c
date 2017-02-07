#include "declare.h"

int top_list (int n, int m, char imdb[n][64], char list[m][64]) {
    int i,j;
    int count = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (strcmp(list[i], imdb[j]) == 0) {
                count++;
            }
        }
    }

    return count;
}
