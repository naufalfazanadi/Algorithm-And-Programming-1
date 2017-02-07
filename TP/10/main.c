#include "declare.h"

int main () {
    // ------------------------INPUT-----------------
    // var untuk loop
    int i, j, n;

    // input jumlah kartu per-orang
    scanf("%d", &n);

    // untuk dapat diinput maka ke string-in dulu
    char piyu[3];
    char moni[3];
    char tobi[3]; 
    char maman[3];

    // untuk konversi ke integer
    int piyu_int[n];
    int moni_int[n];
    int tobi_int[n]; 
    int maman_int[n];

    // ----------------Input kartu---------------
    for (i = 0; i < n; i++) {
        scanf("%s", &piyu);
        // konversikan
        piyu_int[i] = convert(piyu);
    }
    for (i = 0; i < n; i++) {
        scanf("%s", &moni);
        // konversikan
        moni_int[i] = convert(moni);
    }
    for (i = 0; i < n; i++) {
        scanf("%s", &tobi);
        // konversikan
        tobi_int[i] = convert(tobi);
    }
    for (i = 0; i < n; i++) {
        scanf("%s", &maman);
        // konversikan
        maman_int[i] = convert(maman);
    }

    // -------------------------PROSES & OUTPUT-------------------------
    int hasil[n*4];

    for (i = 0; i < n*4; i++) {
        // cari yang max dari atas
        hasil[i] = sort (n, i, piyu_int, moni_int, tobi_int, maman_int);
        // print dengan prosedur
        print(hasil[i]);
    }

    return 0;
}

/*
Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 10,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin.
*/

/*
Dikisahkan Piyu mempunyai teman baik bernama moni tobi dan maman, mereka sering bermain kartu remi di waktu istirahatnya. Mereka selalu bermain kartu ini dengan cara yang tidak biasa, setiap orang akan mendapatkan jumlah kartu sebanyak n kartu, kartu yang dapat dikeluarkan adalah kartu yang kedudukan nya lebih besar dari 4 orang tersebut. 

Gunakan 5 buah array(atau lebih) (4 Buah Player, 1 Buah Hasil)
Gunakan konsep array of ..... dan prosedur/fungsi

Clue: Gunakan fungsi isEmpty

Format Masukan :
n, banyak kartu ( 0 < n <= 3 ) 
kartu piyu, sebanyak n baris 
kartu moni, sebanyak n baris 
kartu tobi, sebanyak n baris 
kartu maman, sebanyak n baris 

Format Keluaran :
Hasil tumpukan kartu yang dikeluarkan 

Contoh Masukan

2
A
J
Q
7
9
5
8
4


Contoh Keluaran

A
Q
J
9
8
7
5
4

Contoh Masukan

3
A
k
q
j
10
9
6
3
7
2
5
4

Contoh Keluaran

A
k
q
j
10
9
6
3
7
2
5
4

 */
