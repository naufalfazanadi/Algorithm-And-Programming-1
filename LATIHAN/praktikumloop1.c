#include <stdio.h>

int main () {
    int i, j, n, o, p;

    // minta input
    printf("Nilai awal\t: ");
    scanf("%d", &n);
    printf("Batas\t\t: ");
    scanf("%d", &o);
    printf("Iterasi\t\t: ");
    scanf("%d", &p);

    for (i = n ; i < o ; i+=p) {
      printf("%d ", i);
    }
    printf("\n");

    return 0;
}
