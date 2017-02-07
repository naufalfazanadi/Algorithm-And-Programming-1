#include <stdio.h>
#include <string.h>

int main () {
    int m, n;

    scanf("%d %d", &m, &n);

    int i,j;
    char str[m][64];

    for (i = 0; i < m; i++) {
        scanf("%s", &str[i]);
    }

    int count = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == '*') {
                printf("%c", str[i][j]);
            } else if (i == 0) {
                if (j == 0) {
                    if (str[i][j+1] == '*') {
                        count++;
                    }
                    if (str[i+1][j] == '*') {
                        count++;
                    }
                    if (str[i+1][j+1] == '*') {
                        count++;
                    }
                    printf("%d", count);
                } else if (j == strlen(str[i]) - 1) {
                    if (str[i][j-1] == '*') {
                        count++;
                    }
                    if (str[i+1][j-1] == '*') {
                        count++;
                    }
                    if (str[i+1][j] == '*') {
                        count++;
                    }
                    printf("%d", count);
                } else {
                    if (str[i][j-1] == '*') {
                        count++;
                    }
                    if (str[i][j+1] == '*') {
                        count++;
                    }
                    if (str[i+1][j-1] == '*') {
                        count++;
                    }
                    if (str[i+1][j] == '*') {
                        count++;
                    }
                    if (str[i+1][j+1] == '*') {
                        count++;
                    }
                    printf("%d", count);
                }
            } else if (i == m - 1) {
                if (j == 0) {
                    if (str[i][j+1] == '*') {
                        count++;
                    }
                    if (str[i-1][j] == '*') {
                        count++;
                    }
                    if (str[i-1][j+1] == '*') {
                        count++;
                    }
                    printf("%d", count);
                } else if (j == strlen(str[i]) - 1) {
                    if (str[i][j-1] == '*') {
                        count++;
                    }
                    if (str[i-1][j-1] == '*') {
                        count++;
                    }
                    if (str[i-1][j] == '*') {
                        count++;
                    }
                    printf("%d", count);
                } else {
                    if (str[i][j-1] == '*') {
                        count++;
                    }
                    if (str[i][j+1] == '*') {
                        count++;
                    }
                    if (str[i-1][j-1] == '*') {
                        count++;
                    }
                    if (str[i-1][j] == '*') {
                        count++;
                    }
                    if (str[i-1][j+1] == '*') {
                        count++;
                    }
                    printf("%d", count);
                }
            } else {
                if (j == 0) {
                    if (str[i][j+1] == '*') {
                        count++;
                    }
                    if (str[i-1][j] == '*') {
                        count++;
                    }
                    if (str[i-1][j+1] == '*') {
                        count++;
                    }
                    if (str[i+1][j] == '*') {
                        count++;
                    }
                    if (str[i+1][j+1] == '*') {
                        count++;
                    }
                    printf("%d", count);
                } else if (j == strlen(str[i]) - 1) {
                    if (str[i][j-1] == '*') {
                        count++;
                    }
                    if (str[i-1][j-1] == '*') {
                        count++;
                    }
                    if (str[i-1][j] == '*') {
                        count++;
                    }
                    if (str[i+1][j-1] == '*') {
                        count++;
                    }
                    if (str[i+1][j] == '*') {
                        count++;
                    }
                    printf("%d", count);
                } else {
                    if (str[i][j-1] == '*') {
                        count++;
                    }
                    if (str[i][j+1] == '*') {
                        count++;
                    }
                    if (str[i-1][j-1] == '*') {
                        count++;
                    }
                    if (str[i-1][j] == '*') {
                        count++;
                    }
                    if (str[i-1][j+1] == '*') {
                        count++;
                    }
                    if (str[i+1][j-1] == '*') {
                        count++;
                    }
                    if (str[i+1][j] == '*') {
                        count++;
                    }
                    if (str[i+1][j+1] == '*') {
                        count++;
                    }
                    printf("%d", count);
                }
            }
            count = 0;
        }
        printf("\n");
    }

    return 0;
}

/*
Piyu membuat sebuah replika dari game minesweeper yang ia pernah mainkan. Diawali dengan template ranjau(*) dan tempat aman(.) yang bukan sebuah ranjau.
Bantulah piyu membuat kode program replika tersebut.

Format Masukan:
m, n (0 < n,m < 100) 
Template ranjau berbentuk M x N

Format Keluaran:
Hasil Akhir Template Minesweper M x N

Contoh Masukan

4 4
*...
....
.*..
....


Contoh Keluaran

*100
2210
1*10
1110

Contoh Masukan 2

3 5
**...
.....
.*...


Contoh Keluaran 2

**100
33200
1*100
 */
