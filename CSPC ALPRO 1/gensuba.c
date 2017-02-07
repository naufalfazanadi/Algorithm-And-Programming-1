#include <stdio.h>
#include <string.h>

int main () {
    int i,j,n;

    scanf("%d", &n);

    char gen[n][100];
    char change[n][100];

    char awal[n], akhir[n];

    for (i = 0; i < n; i++) {
        scanf("%s", &gen[i]);
        scanf("%s", &change[i]);
        // process
        if (gen[i][0] == 'O' || gen[i][0] == 'o') {
            awal[i] = change[i][2];
        } else {
            awal[i] = gen[i][0];
        }
        if (gen[i][strlen(gen[i])-1] == 'O' || gen[i][strlen(gen[i])-1] == 'o') {
            akhir[i] = change[i][strlen(change[i])-1];
        } else {
            akhir[i] = gen[i][strlen(gen[i])-1];
        }
    }

    for (i = 0; i < n; i++) {
        if (awal[i] == akhir[i]) {
            printf("NORMAL\n");
        } else {
            printf("MUTASI\n");
        }
    }

    return 0;
}
/*
Sebuah urutan gen terdiri dari huruf O, A, dan B. A dan B tidak dapat disubtitusi. Sedangkan O dapat disubtitusi. Misalkan urutan gen OAA maka jika O dapat berisi O = A maka gen sebenarnya adalah AAA (karena O disubtitusi). Nah aturan mainnya adalah:

jika huruf pertama sama dengan huruf terakhir maka tampilkan NORMAL
jika huruf pertama berbeda dengan huruf terakhir maka tampilkan MUTASI
Format Masukan:

n, 0 < n < 50, banyaknya pasangan gen dan subtitusi
n baris pasangan gen dan subtitusi

Format Keluaran:

n baris hasil subtitusi gen

Contoh Masukan

3
AABOAO
O=AA
AB
O=B
OAAB
O=AB


Contoh Keluaran

NORMAL
MUTASI
MUTASI


 */
