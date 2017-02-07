#include <stdio.h>
#include <string.h>

int main () {
    char str[64];
    int i;
    int kapital=0,kecil=0;

    scanf("%s", &str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            kapital++;
        } else if (str[i] >= 97 && str[i] <= 122) {
            kecil++;
        }
    }

    printf("Kapital : %d\n", kapital);
    printf("Kecil : %d\n", kecil);
    return 0;
}
