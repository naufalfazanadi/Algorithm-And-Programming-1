/////////////////////////////////////////////////////////
///               [Alpro1] Meet-9                    ////
///              WHILE - PRACTICE 2                  ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    int n;

    scanf("%d", &n);

    int input[n];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    int count=0;

    while ((input[count] != 999) && (count < n)) {
        printf("%d\n", input[count]);
        count++;
    }
    return 0;
}
