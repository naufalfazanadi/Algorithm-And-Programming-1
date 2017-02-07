#include <stdio.h>
#include <string.h>

int main () {
    char str[64];
    scanf("%s", &str);

    int i, j, k, l;
    int space, baris=1, longs=1;

    i=1;
    while (i < strlen(str)) {
        longs++;
        baris+=2;
        i+=baris;
    }
    space = longs-1;

    l=0;

    for (i = 0; i < baris; i++) {
        for (j = 0; j < longs; j++) {
            if (j < space) {
                printf(" ");
            } else {
                if (i <= baris/2) {
                    k = (j*j) + l;
                    l++;
                } else {
                    k = i + (j*j) - l;
                    l--;
                }
                if (k < strlen(str)) {
                    printf("%c", str[k]);
                } else {
                    printf(" ");
                }
            }
        }
        if (i < baris/2) {
            space--;
            l=0;
        } else {
            space++;
            l = longs - space - 1;
        }
        printf("\n");
    }
    return 0;
}
