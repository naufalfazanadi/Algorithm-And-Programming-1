#include <stdio.h>
#include <string.h>

int i,j,m,n;
char str1[16][64];
char str2[16][64];
char awal[64],akhir[64];
int jum[2]={0,0};

void search2 () {
    char start[64];
    char end[64];
    for (i = 0; i < n; i++) {
        // awal
        for (j = 0; j < strlen(awal); j++) {
            start[j] = str2[i][j];
        }
        start[j]='\0';

        // akhir
        for (j = strlen(str2[i]) - strlen(akhir); j < strlen(str2[i]); j++) {
            end[j-(strlen(str2[i]) - strlen(akhir))] = str2[i][j];
        }
        end[j-(strlen(str2[i]) - strlen(akhir))]='\0';

        if ((strcmp(start, awal) == 0) && (strcmp(end, akhir)) == 0) {
            jum[1]++;
        }
    }
}

void search1 () {
    char start[64];
    char end[64];
    for (i = 0; i < m; i++) {
        // awal
        for (j = 0; j < strlen(awal); j++) {
            start[j] = str1[i][j];
        }
        start[j]='\0';

        // akhir
        for (j = strlen(str1[i]) - strlen(akhir); j < strlen(str1[i]); j++) {
            end[j-(strlen(str1[i]) - strlen(akhir))] = str1[i][j];
        }
        end[j-(strlen(str1[i]) - strlen(akhir))]='\0';

        if ((strcmp(start, awal) == 0) && (strcmp(end, akhir)) == 0) {
            jum[0]++;
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

    scanf("%s %s", &awal, &akhir);
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
Gunakan konsep prosedur-fungsi untuk mengerjakan soal berikut.
Diberikan 2 buah array of string. Periksa apakah kedua array memiliki kata dengan suku kata awal dan akhir masukan dengan jumlah kata sama antara kedua array.
Format Masukan:

n1, 0 < n1 < 50, banyaknya string array pertama
n1 baris elemen array pertama
n2, 0 < n2 < 50, banyaknya string array kedua
n2 baris elemen array kedua
suku_kata_awal spasi suku_kata_akhir 

Format Keluaran:

valid atau tidak valid

Contoh Masukan

3
nanatata
nata
natata
2
nanana
lalala
na ta


Contoh Keluaran

tidak valid

Contoh Masukan 2

2
aaalala
aaanananalala
3
aaatalala
aatata
aaayalala
aaa lala


Contoh Keluaran 2

valid

       
Contoh Masukan 3

2
at
att
2
aaatttt
aaaattttt
a t


Contoh Keluaran 3

valid

 */
