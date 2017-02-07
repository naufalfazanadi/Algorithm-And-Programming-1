#include "declare.h"

int search (int n, char str[n][64]) {
    int count = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'a' || str[i][j] == 'i' || 
                str[i][j] == 'u' || str[i][j] == 'e' || 
                str[i][j] == 'o' || str[i][j] == 'A' || 
                str[i][j] == 'I' || str[i][j] == 'U' || 
                str[i][j] == 'E' || str[i][j] == 'O') {
                count++;
            }
        }
    }

    return count;
}

void print (int n, char str[n][64], int count) {
    for (i = 0; i < count; i++) {
        printf("%d. ", i+1);
        for (j = 0; j < n; j++) {
            if (j == 0) {
                printf("%s", str[j]);
            } else {
                printf(" %s", str[j]);
            }
        }
        printf("\n");
    }
}
