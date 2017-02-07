#include <stdio.h>
#include <string.h>

int main () {
    int i,j,k;

    char depan[2][64];
    char belakang[2][64];

    for (i = 0; i < 2; i++) {
        scanf("%s", &depan[i]);
        scanf("%s", &belakang[i]);
    }

    // PROCESS
    
    int vokal[2] = {0};
    int konsonan[2] = {0};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < strlen(depan[i]); j++) {
            if (depan[i][j] == 'a' || depan[i][j] == 'i' || 
                depan[i][j] == 'u' || depan[i][j] == 'e' || 
                depan[i][j] == 'o' || depan[i][j] == 'A' || 
                depan[i][j] == 'I' || depan[i][j] == 'U' || 
                depan[i][j] == 'E' || depan[i][j] == 'O') {
                vokal[i] ++;
            }
        }
        for (j = 0; j < strlen(depan[i]); j++) {
            if (depan[i][j] != 'a' && depan[i][j] != 'i' && 
                depan[i][j] != 'u' && depan[i][j] != 'e' && 
                depan[i][j] != 'o' && depan[i][j] != 'A' && 
                depan[i][j] != 'I' && depan[i][j] != 'U' && 
                depan[i][j] != 'E' && depan[i][j] != 'O') {
                konsonan[i] ++;
            }
        }
    }

    if (vokal[0] == vokal[1] && konsonan[0] == konsonan[1]) {
        printf("KUA yuk\n");
    } else {
        printf("dadah :)\n");
    }

    return 0;
}

/*
Diberikan 2 nama yang masing-masing terdiri dari 2 kata, yaitu nama depan dan nama kepanjangan. Jika nama depan dari nama-nama tersebut memiliki jumlah huruf vokal yang sama, dan nama belakangnya memiliki jumlah huruf konsonan yang sama, maka tampilkan KUA yuk. Namun jika salah satunya tidak sama, maka tampilkan dadah :)

Contoh Masukan

Lala Berliana
Yudi Supardi


Contoh Keluaran

KUA yuk

Contoh Masukan 2

PiyuYang CelaluTersakiti
Moni ApalahApalah


Contoh Keluaran 2

dadah :)

 */
