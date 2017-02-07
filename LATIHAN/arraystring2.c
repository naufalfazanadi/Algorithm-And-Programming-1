#include <stdio.h>
#include <string.h>

int main () {
    int i,j,k,n;
    scanf("%d", &n);

    char str[n][64];
    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }

    int spasi = 0;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < spasi; j++) {
                printf(" ");
            }
            for (j = 0; j < strlen(str[i]); j++) {
                if (j == strlen(str[i]) - 1) {
                    printf(" ");
                }
                printf("%c", str[i][j]);
            }
            printf("\n");
        } else {
            spasi += strlen(str[i-1])-1;
            for (j = strlen(str[i])-1; j >= 0; j--) {
                for (k = spasi; k > 0; k--) {
                    printf(" ");
                }
                printf("%c\n", str[i][j]);
            }
            
            spasi++;
        }
    }
    return 0;
}
