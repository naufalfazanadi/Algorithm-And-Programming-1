/////////////////////////////////////////////////////////
///               [Alpro1] Meet-9                    ////
///          TYPE STRUCTURED - PRACTICE 1            ////
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

    int sumx=0,sumy=0;
    for (i = 0; i < n; i++) {
        printf("x %d : ", i+1);
        scanf("%d", &titik[i].x);
        printf("y %d : ", i+1);
        scanf("%d", &titik[i].y);

        sumx = sumx + titik[i].x;
        sumy = sumy + titik[i].y;
    }

    printf("%d\n", sumx);
    printf("%d\n", sumy);
    return 0;
}
