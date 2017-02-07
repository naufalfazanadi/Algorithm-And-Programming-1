/////////////////////////////////////////////////////////
///               [Alpro1] Meet-9                    ////
///          TYPE STRUCTURED - PRACTICE 2            ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

typedef struct {
    int x,y;
} dot;

int main () {
    int i,n;
    scanf("%d", &n);

    dot titik[n];

    for (i = 0; i < n; i++) {
        printf("x %d : ", i+1);
        scanf("%d", &titik[i].x);
        printf("y %d : ", i+1);
        scanf("%d", &titik[i].y);

    }
    for (i = 0; i < n; i++) {
        if ((titik[i].x % 2 == 1) && (titik[i].y > titik[i].x)) {
            printf("x%d nya %d\n", i+1, titik[i].x);
            printf("y%d nya %d\n", i+1, titik[i].y);
        }
    }

    return 0;
}
