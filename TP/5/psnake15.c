/////////////////////////////////////////////////////////
///           [Alpro1] Tugas Praktikum 5             ////
///         PSNAKE15.C (LANGKAH GAME SNAKE)          ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    int koorx, koory; // koordinat awal ular
    
    // input koordinat
    scanf("%d %d", &koorx, &koory);
    
    int n; // instruksi
    
    // input jumlah instruksi
    scanf("%d", &n);

    int m[n]; // banyak langkah
    char k[n+1]; // H or V
    int l[n]; // jumlah H atau V
    int fx[n], fy[n]; // koordinat makanan
    int i, j;

    int makanan[n]; // untuk makanan ke berapa yang dimakan
    // untuk mengisi seluruh array oleh 0
    for (i = 0 ; i < n ; i++) {
        makanan[i]=0;
    } // biar semua isi array nya 0

    int poin=0; // var untuk poin

    // inputan dan logical
    for (i = 0 ; i < n ; i++) {
        scanf("%d", &m[i]); // input langkah
        
        // ini perulangan dengan sebanyak m[i] untuk input langkah
        for (j = 0 ; j < m[i] ; j++) {
            scanf(" %c %d", &k[j], &l[j]); // input H or V dan + or - koor
            // perhitungan koordinat
            if (k[j]=='h' || k[j]=='H') {
                koorx = koorx + l[j];
            } else if (k[j]=='v' || k[j]=='V') {
                koory = koory + l[j];
            }
        }

        // input koor makanan
        scanf("%d %d", &fx[i], &fy[i]);
        if (koorx == fx[i] && koory == fy[i]) {
            makanan[i]++; // jika dapet boolean makanan ke-i true
            poin = poin + 10; // jika dapet poin +
        }
    }

    // ouput makanan
    for (i = 0 ; i < n ; i++) {
        if (makanan[i]==1) {
            printf("makanan %d\n", i+1);
        }
    }
    // ouput poin
    printf("%d\n", poin);
    
    return 0;
}
/**
 * Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 5,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. 
 */
/*
Pada suatu hari piyu sedang bermain game SNAKE di hp nokia nya dulu.
Tetapi game snake yang ia mainkan ini berbeda dengan biasanya.
Instruksi ular tersebut untuk jalan harus dituliskan berupa H (horizontal) atau V(vertical) dengan banyaknya langkah yang diinputkan juga.
Kemudian, setiap instruksi harus di cek apakah, sesuai dengan tempat makanan yang harus di ambil oleh ular tersebut berupa koordinat (fx dan fy).
Setiap kali ia berhasil memakan sebuah makanan, maka skor dia akan bertambah 10 poin.
bantulah piyu menghitung skor nya, dan makanan yang mana saja yang dapat ia makan.

Format Masukan :
x y , koordinat awal snake
n , banyaknya instruksi
m , banyaknya langkah yang akan dilakukan 
k l, k adalah arah ( H / V ) l adalah banyaknya step tiap satuan kartesius
fx fy, koordinat makanan.

 KET :
k: V = Vertical
   H = Horizontal
l: jika arah l negatif, maka geraknya berlawanan

Format Keluaran
(n baris makananan yang berhasil)
skor , skor akhir permainan
Contoh Masukan

0 0
1
4
H 3
H 2
V -2
V 1
5 -1


Contoh Keluaran

makanan 1
10

Contoh Masukan 2

0 0
3
1
H 2
2 0
3
H 2
V 2
H -2
0 0
2
H 1
V 1
3 3


Contoh Keluaran 2

makanan 1
makanan 3
20

 */
