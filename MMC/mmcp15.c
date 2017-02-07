#include <stdio.h>
#include <string.h>

int main () {
    char template[11] = "0123456789\0";

    int i,j,n;

    scanf("%d", &n);

    char str[n][64];
    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }

    int hitung = 0;
    int sum = 0;

    int prima = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < strlen(str[i]); j++) {
            if (str[i][j] >= '0' && str[i][j] <= '9') {
                while (str[i][j] != template[hitung]) {
                    hitung++;
                }
                sum += hitung;
                hitung = 0;
            }
        }
        if (sum == 2 || sum == 3 || sum == 5 || sum == 7 || sum == 11 || 
            sum == 13 || sum == 17 || sum == 19) {
            prima++;
        }
        sum = 0;
    }

    if (prima >= 2) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    

    return 0;
}

/*
Buatlah sebuah program untuk menjumlahkan angka pada setiap string
Lalu cek hasil tiap string apakah merupakan bilangan prima atau tidak.
Print valid jika bilangan prima minimal ada 2, jika tidak print tidak valid.

Format Masukan:
n , (0 < n < 20)
n baris string

Format Keluaran:
valid atau tidak valid

Contoh Masukan

3
4kuC1nt4
k4muB4ng3t
S3k4l1


Contoh Keluaran

tidak valid

Contoh Masukan 2

3
4kuC1nt4
k4muB4ng3t
S3la4lu


Contoh Keluaran 2

valid
 */
