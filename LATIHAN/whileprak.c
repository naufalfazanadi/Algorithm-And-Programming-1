/////////////////////////////////////////////////////////
///          [Alpro1] Praktikum Meet-9               ////
///          WHILE - PRACTICE 1 (DIGIT)              ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
    int input;
    scanf("%d", &input);

    int count=0;
    int digit=0;
    while (count <= input) { 
        digit++;
        // iterasi
        if (count != 0) {
           count = count*10;
        } else {
            count = count+10;
        }
    }
    printf("%d digit\n", digit);

    return 0;
}
