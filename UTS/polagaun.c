/////////////////////////////////////////////////////////
///            [Alpro1] UTS 1st Number               ////
///         POLAGAUN.C (MEMBUAT POLA GAUN)           ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    int i,j; // untuk looping
    int n; // untuk banyaknya pola bintang

    // inputkan angka
    scanf("%d", &n);

    // bagian ke-1
    for (i = 0 ; i < n ; i++) {
        // membuat spasi segitiga terbalik
        for (j = n-1 ; j > i ; j--) {
            printf(" ");
        }
        // membuat segitiga bintang
        for (j = 0 ; j <= i ; j++) {
            printf("*");
        }
        // membuat kotak bintang
        for (j = 0 ; j < n ; j++) {
            printf("*"); 
        }
        // membuat spasi kotak
        for (j = 0 ; j < n ; j++) {
            printf(" "); 
        }
        // membuat kotak bintang
        for (j = 0 ; j < n ; j++) {
            printf("*"); 
        }
        // membuat segitiga bintang
        for (j = 0 ; j <= i ; j++) {
            printf("*"); 
        }
        printf("\n"); // untuk newline
    }
    // bagian ke-2
    for (i = 0 ; i < n ; i++) {
        // kotak spasi
        for (j = 0 ; j < n*2 ; j++) {
            printf(" ");
        }
        // kotak bintang
        for (j = 0 ; j < n ; j++) {
            printf("*");
        }
        printf("\n"); // newline
    }
    // bagian ke 3
    for (i = 0 ; i < n ; i++) {
        // kotak spasi
        for (j = 0 ; j < n ; j++) {
            printf(" "); 
        }
        // segitiga terbalik spasi
        for (j = n-1 ; j > i ; j--) {
            printf(" ");
        }
        // segitiga bintang
        for (j = 0 ; j <= i ; j++) {
            printf("*");
        }
        // kotak bintang
        for (j = 0 ; j < n ; j++) {
            printf("*");
        }
        // segitiga bintang
        for (j = 0 ; j <= i ; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//JANJI
/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemrograman 1 dalam mengerjakan UTS,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */

/*
Kompetensi yang dievaluasi: Kemampuan menggunakan for dan materi sebelumnya dalam membentuk pola. Buatlah kode program untuk menggambarkan pola berikut:
Format Masukan:

n, 0 < n < 20, banyaknya bintang sesuai pola yang diminta.
Format Keluaran:

pola bintang sesuai banyaknya n.
jika n = 3 maka polanya adalah sebagai berikut:
  ****   ****
 *****   *****
******   ******
      ***
      ***
      ***
     *****
    *******
   *********
gambar diakhir dengan 1 newline.
Contoh Masukan

3


Contoh Keluaran

  ****   ****
 *****   *****
******   ******
      ***
      ***
      ***
     *****
    *******
   *********
 */
