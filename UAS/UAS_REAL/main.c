#include "declare.h"

int main () {
    // ---------------------INPUT--------------------
    int n;

    // input jumlah array int
    scanf("%d", &n);

    int i;
    int num[n];

    // input array of integer
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int m;

    // input jumlah array string
    scanf("%d", &m);

    char str[m][64];

    // input array of string
    for (i = 0; i < m; i++) {
        scanf("%s", &str[i]);
    }
    // -----------------------------------------------

    // inisialisasi
    int paruh1 = 9999, paruh2 = 9999;

    // cari minimal paruh ke 1
    for (i = 0; i < n / 2; i++) {
        paruh1 = min (paruh1, num[i]);
    }
    // cari minimal paruh ke 2
    for (i = n/2; i < n; i++) {
        paruh2 = min (paruh2, num[i]);
    }

    // cari kelipatan, membandingkan
    int lipat = banding(paruh1, paruh2);

    // OUTPUT
    print (m, str, lipat);

    return 0;
}

/*
Kemampuan yang Dievaluasi: Kemampuan membuat prosedur dan fungsi. Buatlah prosedur dan fungsi yang memenuhi kondisi dari analisis kasus dalam soal ini. Buatlah program yang memproses array of integer dan array of string dengan prosedur dan fungsi. 
-Diberikan array of integer dengan jumlah elemen selalu genap.
-Carilah bilangan paling minimal di separuh depan dalam array of integer.
-Carilah bilangan paling minimal di separuh belakang dalam array of integer.
-Bandingkan kedua angka kemudian ambil angka yang lebih besar dari keduanya. 
-Kemudian tampilkan string dari array of string yang posisinya merupakan kelipatan dari angka tersebut.

Format Masukan:

n, 0 < n < 100, banyaknya angka di array of integer.
n baris integer isi array of integer.
m, 0 < m < 100, banyaknya string dalam array of string.
m baris string isi array of string.

Format Keluaran:

angka hasil perbandingan dua angka.
string yang posisinya adalah kelipatan angka hasil perbandingan.

Contoh Masukan

6
3
34
5
6
1
2
8
aku
adalah
anak
gembala
selalu
riang
serta
gembira


Contoh Keluaran

3
anak
riang


 */
