#include "declare.h"

int vokal (char str[]) {
    int i; 
    int count = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'i' || 
            str[i] == 'u' || str[i] == 'e' || 
            str[i] == 'o' || str[i] == 'A' || 
            str[i] == 'I' || str[i] == 'U' || 
            str[i] == 'E' || str[i] == 'O' ) {
            count++;
        }
    }

    return count;
}

void print (int n, char str[n][64], int x[n]) {
    int i, j, k;
    int spasi = 0;

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < x[i]; j++) {
                spasi = spasi + (strlen(str[i]) * j);
                for (k = 0; k < spasi; k++) {
                    printf(" ");
                }
                printf("%s\n", str[i]);
            }
        } else {
            for (j = 0; j < x[i]; j++) {
                spasi = strlen(str[i]) * (x[i] - 1 - j);
                for (k = 0; k < spasi; k++) {
                    printf(" ");
                }
                printf("%s\n", str[i]);
            }   
        }
        spasi = 0;
    }
}
