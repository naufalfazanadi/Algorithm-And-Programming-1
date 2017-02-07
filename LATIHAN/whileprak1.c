/////////////////////////////////////////////////////////
///          [Alpro1] Praktikum Meet-9               ////
///         WHILE - PRACTICE 2 (STOP 0)              ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    /*pake array*/

    int input[100];

    int count=0,sum=0;
    while ((count < 100) && (input[count-1] != 0)) {
        scanf("%d", &input[count]);
        sum = sum + input[count];
        count++;
    }
    printf("%d\n", sum);

    /*ga pake array*/
    /*int inputs=1; // bebas awalnya
    int jum=0;

    while (inputs!=0) {
        scanf("%d", &inputs);
        jum = jum + inputs;
    }
    printf("%d\n", jum);*/
    return 0;
}
