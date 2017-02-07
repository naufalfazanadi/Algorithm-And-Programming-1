#include <stdio.h>
#include <string.h>

int main () {
    int i,j,k,n;

    scanf("%d", &n);

    char str1[n][64];
    char str2[n][64];
    char real_pass[n][64];
    int count = 0;

    for (i = 0; i < n; i++) {
        scanf("%s", &str1[i]);
        scanf("%s", &str2[i]);
        if (strcmp(str2[i], "it") == 0) {
            strcpy(real_pass[count], str1[i]);
            count++;
        }
    }

    int x;

    scanf("%d", &x);

    printf("%s\n", real_pass[x-1]);

    return 0;
}

/*
Moni mempunyai sebuah perangkat terbaru Google Inc. dia memberi password perangkat tersebut dengan sebuah kata. 
Suatu Saat moni lupa akan passwordnya, tetapi dia memiliki history (recent password) yang telah ia masukan dari awal beli hingga sekarang. 
Password moni selalu 2 kata dan diakhiri dengan kata it. Setelah moni melihat-melihat dari keseluruhan history, dia akan memberi angka (letak/baris) password yang benar dari deretan kata berakhiran it.

Format Masukan:
n , (0 < n < 100).
n baris string.
x , letak password

Format Keluaran:
Password moni.

Contoh Masukan

5
123456 at
dream it
password it
bukanpassword huft
inidia it
3


Contoh Keluaran

inidia

Contoh Masukan 2

3
live it
build it
dream it
1


Contoh Keluaran 2

live

 */
