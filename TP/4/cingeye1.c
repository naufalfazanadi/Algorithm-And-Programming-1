#include <stdio.h>

int main () {
    int i, j, n; // untuk perulangan

    scanf("%d", &n); // input n

    // untuk baris bagian ke 1
    for (i = 0 ; i < n ; i++) {
        // membuat trapesium
        for (j = 0 ; j < 2 ; j++) {
            printf(" ");
        }
        for (j = n-1 ; j > i ; j--) {
            printf(" ");
        }
        // membuat segitiga tolak belakang
        for (j = 0 ; j <= i ; j++) {
            printf("*");
        }
        for (j = 0 ; j <= i ; j++) {
            printf("*");
        }
        // trapesium terbalik
        for (j = n-1 ; j > i ; j--) {
            printf(" ");
        }
        for (j = 0 ; j < n*3-3 ; j++) {
            printf(" ");
        }
        for (j = n-1 ; j > i ; j--) {
            printf(" ");
        }
        // segitiga tolak belakang
        for (j = 0 ; j <= i ; j++) {
            printf("*");
        }
        for (j = 0 ; j <= i ; j++) {
            printf("*");
        }
        printf("\n");
    }
    // baris bagian ke 2
    for (i = 0 ; i < n ; i++) {
        // kotak
        for (j = 0 ; j < n ; j++) {
            printf("*");
        }
        // kotak kosong
        for (j = 0 ; j < n ; j++) {
            printf(" ");
        }
        // kotak panjang
        for (j = 0 ; j < n+1 ; j++) {
            printf("*");
        }
        for (j = 0 ; j < n-1 ; j++) {
            printf("*");
        }
        for (j = 0 ; j < n+1 ; j++) {
            printf("*");
        }
        // kotak kosong
        for (j = 0 ; j < n ; j++) {
            printf(" ");
        }
        // kotak
        for (j = 0 ; j < n ; j++) {
            printf("*");
        }
        printf("\n");
    }
    // baris bagian 3
    for (i = 0 ; i < n ; i++) {
        // segitiga kosong
        for (j = 0 ; j < i ; j++) {
            printf(" ");
        }
        // trapesium
        for (j = n ; j > i ; j--) {
            printf("*");
        }
        for (j = 0 ; j < n ; j++) {
            printf("*");
        }
        for (j = 0 ; j < n+1 ; j++) {
            printf("*");
        }
        // kotak kosong
        for (j = 0 ; j < n-1 ; j++) {
            printf(" ");
        }
        // trapesium
        for (j = 0 ; j < n+1 ; j++) {
            printf("*");
        }
        for (j = 0 ; j < n ; j++) {
            printf("*");
        }
        for (j = n ; j > i ; j--) {
            printf("*");
        }
        printf("\n");
    }
    // baris bagian 4
    for (i = 0 ; i < n ; i++) {
        // kotak kosong
        for (j = 0 ; j < n*2 ; j++) {
            printf(" ");
        }
        if (n == 1) {
            for (j = 0 ; j < 1 ; j++) {
                printf(" ");
            }            
        } else {
            for (j = 0 ; j < 2 ; j++) {
                printf(" ");
            }
        }
        for (j = 0 ; j < i ; j++) {
            printf(" ");
        }
        // segitiga terbalik
        for (j = n ; j > i ; j--) {
            printf("*");
        }
        for (j = 0 ; j < n-3 ; j++) {
            printf("*");
        }
        for (j = n ; j > i ; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/**
 * Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 4,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. 
 */
/*
Buatlah sebuah program yang menampilkan pola tertentu bergantung pada masukan, misalnya masukan adalah n maka akan menampilkan seperti pada format keluaran

Format Masukan:


Contoh Masukan

3


Contoh Keluaran

    **          **
   ****        ****
  ******      ******
***   **********   ***
***   **********   ***
***   **********   ***
**********  **********
 *********  *********
  ********  ********
        ******
         ****
          **

Contoh Masukan 2

5


Contoh Keluaran 2

      **                    **
     ****                  ****
    ******                ******
   ********              ********
  **********            **********
*****     ****************     *****
*****     ****************     *****
*****     ****************     *****
*****     ****************     *****
*****     ****************     *****
****************    ****************
 ***************    ***************
  **************    **************
   *************    *************
    ************    ************
            ************
             **********
              ********
               ******
                ****

       
Contoh Masukan 3

1

Contoh Keluaran 3

  ****
* **** *
********
   **

 */

