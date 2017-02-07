#include <stdio.h>

int main () {
    int i, j, n;

    scanf("%d", &n);

    int angka[n];

    printf("=======\n");

    for (i = 0 ; i < n ; i++) {
      scanf("%d", &angka[i]);
    }
    // =====================
    for (i = n/2-1 ; i >= 0 ; i--) {
      printf("%d ", angka[i]);
    }
    printf("\n");
    for (i = n/2 ; i < n ; i++) {
      printf("%d ", angka[i]);
    }
    printf("\n");
    // =====================
    return 0;
}
