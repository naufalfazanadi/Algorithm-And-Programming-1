#include <stdio.h>
#include <string.h>

int main () {
    int i,j,n;
    scanf("%d", &n);
    
    char str[n][64];
    int baris = 0;
    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
        if (baris < strlen(str[i])) {
            baris = strlen(str[i]);
        }
    }

    printf("\noutput :\n");
    
    int count = 0;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < n; j++) {
            if (count < strlen(str[j])) {
                printf("%c", str[j][count]);
            } else {
                printf(" ");
            }
        }
        count++;
        printf("\n");
    }
    return 0;
}

/*
5
fikry
ridwan
mira
faisalSA
fauzirahman

output :
frmff
iiiaa
kdriu
rwasz
ya ai
 n lr
   Sa
   Ah
    m
    a
    n
    
 */
