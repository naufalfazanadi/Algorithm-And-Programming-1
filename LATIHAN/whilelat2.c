/////////////////////////////////////////////////////////
///               [Alpro1] Meet-9                    ////
///              WHILE - PRACTICE 3                  ////
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
    int cgenap=0;

    /*while (count < n) {
        if (input[count] % 2 == 0) {
            if(cgenap < 3) {
                cgenap++;
                printf("%d\n", input[count]);
            }
        } else {
            printf("%d\n", input[count]);
        }
        count++;
    }*/
    while((count < n) && (cgenap < 3)) {
        if (input[count] % 2 == 0) {
            cgenap++;
            printf("%d\n", input[count]);
        } // else {
        //     printf("%d\n", input[count]);
        // }

        count++;
    }

    return 0;
}
