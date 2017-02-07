#include <stdio.h>
#include <string.h>

int i,j,m,n;
char str1[16][64];
char str2[16][64];
char del[64];
int jum[2]={0,0};

void search2 () {
    int k,l,count=0;
    for (i = 0; i < n; i++) {
        for(j = 0; j < strlen(str2[i]); j++) {
            if (del[0] == str2[i][j]) {
                k = 0;
                l = i; 
                while (del[k] == str2[i][l] && del[k] != '\0' && str2[i][l] != '\0') {
                    k++;
                    l++;
                    count++;
                }
            }
            if (count == strlen(del)) {
                jum[1]++;
            }
        }
    }
}

void search1 () {
    int k,l,count=0;
    for (i = 0; i < m; i++) {
        for(j = 0; j < strlen(str1[i]); j++) {
            if (del[0] == str1[i][j]) {
                k = 0;
                l = i; 
                while (del[k] == str1[i][l] && del[k] != '\0' && str1[i][l] != '\0') {
                    k++;
                    l++;
                    count++;
                }
            }
            if (count == strlen(del)) {
                jum[0]++;
            }
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

    scanf("%s", &del);
    search1();
    search2();
    if (jum[0] == jum[1]) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    return 0;
}
/*
5
doadoadoadoa
doadoadoaa
ijaba
aamiin
doadoa
9
doadoaa
jadijadilah
doadoadoa
aamiin
aamiinaamiin
aamiinaamiinaamiin
doadoadoaa
kunfayakun
kunfayakunkunfayakun
doadoa
 */
/*
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut.
Diberikan 2 buah array of string. Periksa apakah kedua array of string mengandung bagian kata masukan dengan jumlah sama. Satu kata hanya diperiksa apakah mengandung minimal 1 string yang harus dicari.
Format Masukan:

n1, 0 < n1 < 50, banyaknya string array pertama n1 baris elemen array pertama n2, 0 < n2 < 50, banyaknya string array kedua n2 baris elemen array kedua string yang harus dicari
Format Keluaran:

valid atau tidak valid
Contoh Masukan

3
ayam
sabana
lumayan
2
nayla
syalala
ay


Contoh Keluaran

tidak valid

Contoh Masukan 2

4
nana
syana
anina
nanana
2
nana
lanana
nana


Contoh Keluaran 2

validx

       
Contoh Masukan 3

3
tina
rerere
nana
1
rererere
rerere


Contoh Keluaran 3

valid
 */
