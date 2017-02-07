#include <stdio.h>
#include <string.h>

// varGlobal
int i,j,k;
int count;

// -------------------Procedure for change char----------------------
void exchange (int n, char x[n], char y[n], char str[64][64]) {

    // Switch char
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            for (k = 0; k < strlen(str[j]); k++) {
                if (str[j][k] == x[i]) {
                    str[j][k] = y[i];
                }
            }
        }
    }
    
    // ---------------OUTPUT----------------
    for (j = 0; j < count; j++) {
        if (j == 0) {
            printf("%s", str[j]);
        } else {
            printf(" %s", str[j]);
        }
    }

    printf("\n");

}

// -------------------Procedure for vocal and reverse char----------------------
void slide (char str[64][64]) {
    char vokal[64];
    int hitung=0;

    // gabung char vokal
    for (i = 0; i < count; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'a' || str[i][j] == 'i' || 
                str[i][j] == 'u' || str[i][j] == 'e' || 
                str[i][j] == 'o' || str[i][j] == 'A' ||
                str[i][j] == 'I' || str[i][j] == 'U' || 
                str[i][j] == 'E' || str[i][j] == 'O') {
                
                vokal[hitung] = str[i][j];
                hitung++;
            
            }
        }
    }
    vokal[hitung] = '\0';

    // putar char 1 kali
    char temp;
    temp = vokal[strlen(vokal)-1];

    for (i = strlen(vokal)-1; i > 0; i--) {
        vokal[i] = vokal[i - 1];
    }

    vokal[i] = temp;    

    // balikan lagi, cieeee balikan :D
    hitung = 0;
    for (i = 0; i < count; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] == 'a' || str[i][j] == 'i' || 
                str[i][j] == 'u' || str[i][j] == 'e' || 
                str[i][j] == 'o' || str[i][j] == 'A' ||
                str[i][j] == 'I' || str[i][j] == 'U' || 
                str[i][j] == 'E' || str[i][j] == 'O') {
                
                str[i][j] = vokal[hitung];
                hitung++;
            
            }
        }
    }

    // reverse char
    char reverse[10][64];
    for (i = 0; i < count; i++) {
        for (j = strlen(str[i])-1; j >= 0; j--) {
            reverse[i][(strlen(str[i]) - 1) - j] = str[i][j];
        }
        reverse[i][(strlen(str[i]))] = '\0';
    }

    // ---------------OUTPUT----------------
    for (i = count-1; i >= 0; i--) {
        if (i == count-1) {
            printf("%s", reverse[i]);
        } else {
            printf(" %s", reverse[i]);
        }
    }
    printf("\n");
}

int main () {
    // ------------------------INPUT------------------------------
    char str[64][64];

    // INPUT SETRING
    count = -1;

    // loop
    do {
        count++;
        scanf("%s", &str[count]);
    } while ((strcmp(str[count], "end") != 0) && (strcmp(str[count], "END") != 0));

    // jika lebih dari 10
    if (count > 10) {
        count = 10;
    }

    // JUMLAH CHAR DISAMARKAN
    int n;
    scanf("%d", &n);

    // --------------------MENGGANTI CHAR / GESER--------------------
    // N = 0 dan N != 0
    if (n != 0) {
        
        char x[n], y[n];
        // input char diganti & yang mengganti
        for (i = 0; i < n; i++) {
            scanf(" %c", &x[i]);
            scanf(" %c", &y[i]);
        }

        // MENGGANTI CHAR NYA
        exchange (n, x, y, str);
    
    } else {

        // menggeser vokal, puter, dan membalikan
        slide (str);

    }

    return 0;
}
