#include "declare.h"

int palindrom (int n, char str[64]) {
    int i;
    int hitung;
    for (i = 0; i < strlen(str)/2; i++) {
        if (str[i] == str[strlen(str)-1-i]) {
            hitung = 1;
        } else {
            hitung = 0;
        }
    }

    return hitung;
}
