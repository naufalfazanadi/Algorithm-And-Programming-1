#include "declare.h"

int main () {
    // Untuk loop
    int i, n;

    // -------------------------input banyak--------------------------
    scanf("%d", &n);

    // --------------------input array of string----------------------
    char str[n][64];

    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }

    // ---------------input yang dicari dan jumlah--------------------
    char wanted[64];
    int how_many;

    scanf("%s", &wanted);
    scanf("%d", &how_many);

    // --------------------Hitung banyaknya---------------------------
    int count = 0;

    // Go to function
    count += check_horizontal(n, str, wanted);
    count += check_vertical(n, str, wanted);

    // --------------------------OUTPUT-------------------------------
    if (how_many == count) {
        printf("Semangat TMD!!!\n");
    } else {
        printf("Jangan ditunda-tunda TMDnya!!!\n");
    }

    return 0;
}

/*
Buatlah sebuah program untuk mengecek ada berapa kata yang kita inputkan di daftar arrayofstring (periksa vertikal dan horizontal). jika banyaknya kata sama dengan angka masukan maka print Semangat TMD!!! jika tidak Jangan ditunda-tunda TMDnya!!!

Masukan
n banyaknya string
banyaknya string sebanyak n
kata yang di cari
angka masukan

Keluaran
Semangat TMD!!! atau Jangan ditunda-tunda TMDnya!!!

Gunakan prosedur ATAU fungsi.
Contoh Masukan

5
asasackas
asascinta
asggnn
aszsatass
asasaaasa
cinta
2

Contoh Keluaran

Semangat TMD!!!

Contoh Masukan 2

5
asAsacka
aCascinta
asggnnaff
aszsatass
asBsaa
cinTa
2

Contoh Keluaran 2

Jangan ditunda-tunda TMDnya!!!

 */
