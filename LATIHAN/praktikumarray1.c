#include <stdio.h>

int main () {
    int i, j, n;

    scanf("%d", &n);

    int angka[n];

    printf("=========\n");

    for (i = 0 ; i < n ; i++) {
      scanf("%d", &angka[i]);
    }

    int max = 0;

    for (i = 0 ; i < n ; i++) {
      if (max < angka[i]) {
        max = angka[i];
      }
    }

    printf("=========\n");
    
    printf("%d\n", max);
    return 0;
}
