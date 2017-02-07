#include "declare.h"

// Procedure - Function
int min (int n, int angka[n]) {
    int low = angka[0];

    for (i = 0; i < n; i++) {
        if (low > angka[i]) {
            low = angka[i];
        }
    }
    
    return low;
}

int max (int n, int angka[n]) {
    int high = angka[0];

    for (i = 0; i < n; i++) {
        if (high < angka[i]) {
            high = angka[i];
        }
    }

    return high;
}

void thx (int n) {
    for (i = 0; i < n; i++) {
        printf("%d THX!\n", i+1);
    }
}
