#include <stdio.h>

int main () {
    int i; // var loop
    int n; // var untuk jumlah inputan
    int input[100]; // unutk menampung inputan
    int max=0,min=999;
    // max itu pasang varnya nilai paling kecil
    // min itu pasang varnya nilai paling besar

    // input berapa jumlah inputan
    scanf("%d", &n);

    printf("=================================\n");
    // input angka sebanyak n
    for (i = 0 ; i < n ; i++) {
        scanf("%d", &input[i]); 
        // input [i] ini yaitu kita inputkan sebauh masukan
        // ke variable input indeks ke - i
        // jadi kalo i nya 0 berarti kita masukin ke input[0]
        // kalo i nya 1 berarti kita masukin ke input[1]
        // dst...
    }

    // loop lagi untuk cari max
    for (i = 0 ; i < n ; i++) {
        // jika max lebih kecil dari inputan
        // maka si var max nya diganti sama input indeks ke i
        // misal input = 3, max = 0
        // nah nanti max diganti jadi 3
        // trus bandingin lagi sama input indeks selanjutnya 
        // selama n kali
        // misal input = 5, max = 3
        // nanti maxnya bakal ganti jadi 5
        if (max < input[i]) {
            max = input[i];
        }
    }
    // loop untuk cari minimal
    for (i = 0 ; i < n ; i++) {
        // jika min lebih besar dari inputan
        // maka si var min nya diganti sama input indeks ke i
        // misal input = 6, min = 999
        // nah nanti min diganti jadi 6
        // trus bandingin lagi sama input indeks selanjutnya 
        // selama n kali
        // misal input = 2, min = 6
        // nanti minnya bakal ganti jadi 2
        if (min > input[i]) {
            min = input[i];
        }
    }

    printf("===================\n");
    // ouput
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}
