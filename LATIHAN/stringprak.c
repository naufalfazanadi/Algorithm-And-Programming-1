#include <stdio.h>
#include <string.h>

int main () {
    char makan[32];
    int total=0;

    do {
        scanf("%s", &makan);
        if ((strcmp(makan,"tango") == 0) || (strcmp(makan,"TANGO") == 0)) {
            total = total + 1000;
        } else if ((strcmp(makan,"aqua") == 0) || (strcmp(makan,"AQUA") == 0)) {
            total = total + 3000;
        } else if ((strcmp(makan,"gehu") == 0) || (strcmp(makan,"GEHU") == 0)) {
            total = total + 500;
        }
    } while (strcmp(makan,"sudah") != 0);

    printf("%d\n", total);
    return 0;
}
/*
Di warung Pa Engkus Moni akan jajan tango, AQUA, dan gehu.
Bantulah moni untuk menghitung total yang dibelinya:
tango : 1000
AQUA : 3000
gehu : 500
*masukkan akan berakhir jika moni berkata "sudah"
 */
