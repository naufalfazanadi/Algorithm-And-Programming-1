#include <stdio.h>

int main () {
    int i, j, n;

    scanf("%d", &n);

    int angka[n];

    printf("=========\n");

    for (i = 0 ; i < n ; i++) {
      scanf("%d", &angka[i]);
    }

    int min = 9999;

    for (i = 0 ; i < n ; i++) {
      if (angka[i] < min) {
        min = angka[i];
      }
    }

    printf("=========\n");
    
    printf("%d\n", min);
    return 0;
}
