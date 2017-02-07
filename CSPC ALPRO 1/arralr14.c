#include <stdio.h>
#include <string.h>

int i,j,k,m,n;
char str1[16][64];
char str2[16][64];
char alay[16][64];
char biasa[16][64];
int x=0,y=0;

void output () {
    int spasigan=0;
    int spasigen=0;
    for (i = 0; i < 2; i++) {
        if (i == 0) {
            for (j = 0; j < x; j++) {
                if (j == 0) {
                    printf("%s", alay[j]);
                } else if (j % 2 == 0) {
                    spasigan = strlen(alay[j-1]);
                    for (k = 0; k < spasigan; k++) {
                        printf(" ");
                    }
                    printf("%s", alay[j]);
                }
            }   
        } else {
            for (j = 0; j < x; j++) {
                if (j % 2 == 1 && j != 0) {
                    spasigen = strlen(alay[j-1]);
                    for (k = 0; k < spasigen; k++) {
                        printf(" ");
                    }
                    printf("%s", alay[j]);
                }
            } 
        }   
        printf("\n");
    }
    for (i = 0; i < 2; i++) {
        if (i == 0) {
            for (j = 0; j < y; j++) {
                if (j == 0) {
                    printf("%s", biasa[j]);
                } else if (j % 2 == 0) {
                    spasigan = strlen(biasa[j-1]);
                    for (k = 0; k < spasigan; k++) {
                        printf(" ");
                    }
                    printf("%s", biasa[j]);
                }
            }   
        } else {
            for (j = 0; j < y; j++) {
                if (j % 2 == 1 && j != 0) {
                    spasigen = strlen(biasa[j-1]);
                    for (k = 0; k < spasigen; k++) {
                        printf(" ");
                    }
                    printf("%s", biasa[j]);
                }
            } 
        }
        printf("\n");
    }
}

void filter () {
    int bol;
    for (i = 0; i < m; i++) {
        j=0;
        bol=0;
        while (j < strlen(str1[i]) && bol == 0) {
            if ((str1[i][j] == '4') || (str1[i][j] == '3') || (str1[i][j] == '1') || (str1[i][j] == '0')) {
                strcpy(alay[x],str1[i]);
                x++;
                bol = 1;
            } else if (j == strlen(str1[i]) - 1) {
                strcpy(biasa[y],str1[i]);
                y++;
            }
            j++;
        }
    }
    for (i = 0; i < n; i++) {
        j=0;
        bol=0;
        while (j < strlen(str2[i]) && bol == 0) {
            if ((str2[i][j] == '4') || (str2[i][j] == '3') || (str2[i][j] == '1') || (str2[i][j] == '0')) {
                strcpy(alay[x],str2[i]);
                x++;
                bol = 1;
            } else if (j == strlen(str2[i]) - 1) {
                strcpy(biasa[y],str2[i]);
                y++;
            }
            j++;
        }
    }
}

int main () {
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%s", &str1[i]);
    }

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", &str2[i]);   
    }

    filter();
    output();
    // for (i = 0; i < x; i++) {
    //     printf("%s\n", alay[i]);
    // }
    // for (i = 0; i < y; i++) {
    //     printf("%s\n", biasa[i]);
    // }

    return 0;
}

/*
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut. Diberikan dua buah array of string yang terdiri dari string campuran. Pisahkanlah isi dari kedua array itu menjadi 2 buah array alay dan array resmi. Yang termasuk alay adalah ketika string mengandung 4, 3, 1, 0 

Format Masukan:

n, 0 < n < 50, jumlah string array pertama
n baris string array pertama
m, 0 < m < 50, jumlah string array kedua
m baris string array kedua

Format Keluaran:

isi array alay sesuai pola
isi array resmi sesuai pola

Contoh Masukan

2
alay
r3sm1
3
4l4y
beneran
resmi


Contoh Keluaran

r3sm1
     4l4y
alay       resmi
    beneran

Contoh Masukan 2

5
3aa
l4l4l4
y3y3y3
beneran
alay
4
ya
memang
b3n3ran
4l4y


Contoh Keluaran 2

3aa      y3y3y3       4l4y
   l4l4l4      b3n3ran
beneran    ya
       alay  memang
 */
