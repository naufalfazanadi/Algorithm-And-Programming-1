/////////////////////////////////////////////////////////
///             [Alpro1] Evaluation 1                ////
///      TOBIEO15.C (KURSI, INSERT, DEL, COUNT)      ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    int i,j,k; // untuk looping
    int n,m; // jumlah untuk looping

    scanf("%d", &n); // input jumlah n

    int input[n+1]; // array untuk inputan

    // untuk input kursi dengan angka sejumlah n
    for (i = 0 ; i < n ; i++) {
        scanf("%d", &input[i]);
    } 

    scanf("%d", &m); // input jumlah m

    char per; // untuk i or d or c
    int ang; // angka dari perintah

    int count; // var untuk count

    // loop input perintah dengan angka
    for (i = 0 ; i < m ; i++) {
        // input e.g. : d 20 or i 14
        scanf(" %c %d", &per, &ang);

        if (per == 'i') { // jika insert
            // for untuk searching
            for (j = 0 ; j < n ; j++) {
                // jika sama si array sama yang diinginkan
                if (input[j] == ang) {
                    // untuk memindahkan terlebih dahulu arraynya
                    for (k = n ; k > j ; k--) {
                        input[k] = input[k-1];
                    }
                    // untuk menginsert x*100
                    for (k = j ; k <= j ; k++) {
                        input[k+1] = ang * 100;
                    }
                }
            }
            n++; // array nya nambah karena di insert
        } else if (per == 'd') { // jika delete
            // for untuk searching
            for (j = 0 ; j < n ; j++) {
                // jika sama si array sama yang diinginkan
                if (input[j] == ang) {
                    // untuk ngereplace dengan indeks selanjutnya
                    for (k = j ; k < n ; k++) {
                        input[k] = input[k+1];
                    }
                }
            }
            n--; // arraynya ngurang karena di delete satu
        } else if (per == 'c') { // jika count
            // for untuk searching
            for (j = 0 ; j < n ; j++) {
                // jika sama si array sama yang diinginkan
                if (input[j] == ang) {
                    // kenapa +1 ? karena j nya dari 0;
                    count = j+1;
                }
            }
        }
    }

    // output
    for (i = 0 ; i < n ; i++) {
        printf("%d\n", input[i]);
    }
    printf("count: %d\n", count);

    return 0;
}
/*
//JANJI
/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Evaluasi 1,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */
