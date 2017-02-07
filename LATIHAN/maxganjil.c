#include <stdio.h>

int main () {
    int i; // untuk for
    int n; // jumlah input
    int input[100]; // kita sediakan saja array nya 100
    int max=0; // var untuk nilai maksimal kita set untuk yang pertama
               // kali nilai paling kecil

    // input jumlah inputan
    scanf ("%d", &n);

    // input angka
    for (i = 0 ; i < n ; i++) {
        scanf("%d", &input[i]);
    }

    // loop sebanyak n untuk dicek masing masing isi array
    for (i = 0 ; i < n ; i++) {
        // if untuk angka ganjil
        if (input[i]%2==1) {
            // jika ganjil terpenuhi maka masuk ke if untuk nilai max
            if (max < input[i]) {
                max = input[i];
            }
        }
    }

    // ouput bil ganjil
    for (i = 0 ; i < n ; i++) {
        if (input[i] % 2 ==1) {
            printf("%d ",input[i]);
        }
    }
    printf("\n");
    
    // output nilai max
    printf("Max = %d\n", max);
    return 0;
}
