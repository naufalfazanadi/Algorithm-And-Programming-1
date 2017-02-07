#include <stdio.h>

int nilai_max (int n, int num[n]) {
    int i, j;
    int max = 0;

    for (i = 0; i < n; i++) {
        if (max < num[i]) {
            max = num[i];
        }
    }

    return max;
}

int status (int max) {
    int stats;

    if (max % 2 == 1) {
        stats = 1;
    } else {
        stats = 0;
    }

    return stats;
}

int main () {
    int n;

    scanf("%d", &n);

    int i,j;
    int number1[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &number1[i]);
    }

    int m;

    scanf("%d", &m);

    int number2[m];

    for (i = 0; i < m; i++) {
        scanf("%d", &number2[i]);
    }    

    int maksimal1 = nilai_max(n, number1);
    int maksimal2 = nilai_max(m, number2);

    int status1 = status(maksimal1);
    int status2 = status(maksimal2);

    if (status1 == status2) {
        printf("Valid\n");
    } else {
        printf("Tidak Valid\n");
    }

    return 0;
}
