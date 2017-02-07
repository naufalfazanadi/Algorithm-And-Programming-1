/////////////////////////////////////////////////////////
///         [Alpro1] Quiz 2 - 2nd Question           ////
///           NSTRPOLA.C (BIKIN POLA N)              ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h> // UNTUK MENGAKSES LIBRARY STRING

int main () {
    int i,j; // UNTUK LOOPING FOR
    int n; // UNTUK JUMLAH STRING

    // INPUT JUMLAH STRING
    scanf("%d", &n);

    char str[n+1][64]; // DEKLARASI STRING SEBANYAK N DAN SEBANYAK 64 CHAR
                     // UNTUK MASING MASING STRING 

    // -------------------INPUT STRING------------------
    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }

    // UNTUK MENGETAHUI BERAPA POLA N YANG TERBENTUK
    int baris_besar;
    if (n % 3 == 0) {
        baris_besar = n / 3;
    } else {
        baris_besar = n / 3 + 1;
    }

    // DEKLARASI VAR PENGHITUNG
    int count=0;
    int count_char=0;

    // ----------------------------OUTPUT POLA----------------------
    for (i = 0; i < baris_besar; i++) {
        // BARIS KE 1 PADA SETIAP POLA
        printf("%s\n", str[count]);
        count++;

        if (count < n) {

            // OUTPUT UNTUK POLA KE BAWAH
            while (count_char < strlen(str[count]) || count_char < strlen(str[count+1])) {

                // OUTPUT PERCHAR STRING KE - 2 PADA POLA
                if (count < n) {
                    if (count_char < strlen(str[count])) {
                        printf("%c", str[count][count_char]); 
                    } else {
                        printf(" ");
                    }
                }

                // OUTPUT SPASI (JARAK ANTARA STRING)
                if (count_char < strlen(str[count+1])) {
                    if (count+1 < n) {
                        for (j = 0; j < strlen(str[count-1])-2; j++) {
                            printf(" ");
                        }
                    }
                }

                // OUTPUT PERCHAR STRING KE - 3 PADA POLA
                if (count_char < strlen(str[count+1])) {
                    if (count+1 < n) {
                        if (count_char < strlen(str[count+1])) {
                            printf("%c", str[count+1][count_char]);
                        } else {
                            printf(" ");
                        }
                    }
                }

                printf("\n");
                count_char++; // ITERASI UNTUK CHAR
            }
            count+=2; // ITERASI UNTUK STRING
            count_char = 0; // RESET ITERASI UNTUK CHAR
        }
    }

    return 0;
}

//JANJI
/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Kuis 2,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */
