#include <stdio.h>
#include <string.h>

int main () {
    int i,j,k,n;
    
    scanf("%d", &n);
    
    char str[n][100];
    char temp[n][100];
    for (i = 0 ; i < n ; i++) {
        scanf("%s", str[i]);
        if (i % 2 == 1 ) { 
            for (j = 0 ; j < strlen(str[i]) ; j++) {
                switch (str[i][j]) {
                    case 'o' : str[i][j] = '0';break;
                    case 'i' : str[i][j] = '1';break;
                    case 'e' : str[i][j] = '3';break;
                    case 'a' : str[i][j] = '4';break;
                    default : str[i][j] = str[i][j];
                }
            }
            for (j = 0 ; j < strlen(str[i]) ; j++) {
                temp[i][j] = str[i][j];
            }
            for (j = strlen(str[i])-1 ; j >= 0 ; j--) {
                str[i][j] = temp[i][strlen(str[i])-1-j];
            }
        }
    }
    int reng = 0;

    for (i = 0 ; i < n ; i++) {
    
        if (i != 0) { 
            reng = reng + (strlen(str[i-1]))/2;
                for (k = 0 ; k < reng ; k++) {
                    printf(" ");
                }
                printf("%s\n", str[i]);
        } else {
            for (k = 0 ; k < reng ; k++) {
                printf(" ");
            }
            printf("%s\n", str[i]);
        }
    }

    return 0;
}
/*
Diberikan sebuah array of string. Tampilkan sebagai pola berikut jika masukan isi string adalah 4 string yaitu aku, adalah, anak gembala. Batas penulisan adalah jika panjang string sebelumnya ganjil maka dimulai dari huruf tengah, jika string sebelumnya genap jumlah hurufnya maka dimulai dari huruf awal paruh kedua. String dengan posisi genap ditulis terbalik dan di alay-kan dengan aturan a menjadi 4, e menjadi 3, i menjadi 1, dan o menjadi 0.

Format Masukan:

n, 0 < n < 50, banyaknya string
n baris string masukan

Format Keluaran:

pola keluaran array of string

Contoh Masukan

4
aku
adalah
anak
gembala


Contoh Keluaran

aku
 h4l4d4
    anak
      4l4bm3g
 */
