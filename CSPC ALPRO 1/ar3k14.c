#include <stdio.h>
#include <string.h>

int i,j,m,n;
char str1[50][64],str2[50][64];
char konso[50][64],biasa[50][64];
int x=0,y=0;

void pisah () {
    int bol;
    for (i = 0; i < m; i++) {
        bol=0;
        j=0;
        while (j < strlen(str1[i]) && bol == 0) {
            if (str1[i][j] != 'a' && str1[i][j] != 'i' && str1[i][j] != 'u' && str1[i][j] != 'e' && str1[i][j] != 'o' && str1[i][j] != '\0') {
                if (str1[i][j+1] != 'a' && str1[i][j+1] != 'i' && str1[i][j+1] != 'u' && str1[i][j+1] != 'e' && str1[i][j+1] != 'o' && str1[i][j+1] != '\0') {
                    if(str1[i][j+2] != 'a' && str1[i][j+2] != 'i' && str1[i][j+2] != 'u' && str1[i][j+2] != 'e' && str1[i][j+2] != 'o' && str1[i][j+2] != '\0') {
                        strcpy(konso[x],str1[i]);
                        bol=1;
                        x++;
                    }
                }
            }
            j++;
            if (j == strlen(str1[i])) {
                strcpy(biasa[y],str1[i]);
                y++;
            }
        }
    }
    for (i = 0; i < n; i++) {
        bol=0;
        j=0;
        while (j < strlen(str2[i]) && bol == 0) {
            if (str2[i][j] != 'a' && str2[i][j] != 'i' && str2[i][j] != 'u' && str2[i][j] != 'e' && str2[i][j] != 'o' && str2[i][j] != '\0') {
                if (str2[i][j+1] != 'a' && str2[i][j+1] != 'i' && str2[i][j+1] != 'u' && str2[i][j+1] != 'e' && str2[i][j+1] != 'o' && str2[i][j+1] != '\0') {
                    if(str2[i][j+2] != 'a' && str2[i][j+2] != 'i' && str2[i][j+2] != 'u' && str2[i][j+2] != 'e' && str2[i][j+2] != 'o' && str2[i][j+2] != '\0') {
                        strcpy(konso[x],str2[i]);
                        bol=1;
                        x++;
                    }
                }
            }
            j++;
            if (j == strlen(str2[i])) {
                strcpy(biasa[y],str2[i]);
                y++;
            }
        }   
    }
}

void input () {
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%s", &str1[i]);
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", &str2[i]);
    }
}

int main () {
    input();
    pisah();
    int spasi;
    for (i = 0; i < x; i++) {
        if (i % 2 == 0) {
            printf("%s\n", konso[i]);
        } else {
            spasi = strlen(konso[i-1]);
            for (j = 0; j < spasi; j++) {
                printf(" ");
            }
            printf("%s\n", konso[i]);
        }
    }
    for (i = 0; i < y; i++) {
        if (i % 2 == 0) {
            printf("%s\n", biasa[i]);
        } else {
            spasi = strlen(biasa[i-1]);
            for (j = 0; j < spasi; j++) {
                printf(" ");
            }
            printf("%s\n", biasa[i]);
        }
    }

    return 0;
}
/*
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut. Diberikan dua buah array of string yang terdiri dari string campuran. Pisahkanlah isi dari kedua array itu menjadi 2 buah array 3 konsonan dan array lainnya. Yang termasuk kata 3 konsonan adalah ketika string mengandung 3 buah konsonan berjajar sekaligus, misalnya strata, str adalah konsonan yang berjajar sekaligus. 

Format Masukan:

n, 0 < n < 50, jumlah string array pertama
n baris string array pertama
m, 0 < m < 50, jumlah string array kedua
m baris string array kedua

Format Keluaran:

isi array 3 konsonan sesuai pola
isi array lainnya sesuai pola

Contoh Masukan

3
strata
satu
pendidikan
4
strategi
planologi
gatra
tetra


Contoh Keluaran

strata        
      strategi
satu
    pendidikan
planologi
         gatra
tetra

Contoh Masukan 2

4
strata
satu
pendidikan
statuta
7
strategi
planologi
gatra
tetra
patra
terus
berjuang


Contoh Keluaran 2

strata        
      strategi
satu
    pendidikan
statuta
       planologi
gatra
     tetra
patra
     terus
berjuang
 */
