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
                temp[i][j] = str[i][j];
            }
            for (j = strlen(str[i])-1 ; j >= 0 ; j--) {
                str[i][j] = temp[i][strlen(str[i])-1-j];
            }
        }
    }
    int reng = 0;

    for (i = 0 ; i < n ; i++) {
        if (i%2==0) {
            for (j = 0 ; j < strlen(str[i]) ; j++) {
                for (k = 0 ; k < reng ; k++) {
                    printf(" ");
                }
                for (k = 0 ; k < j ; k++) {
                    printf(" ");
                }
                printf("%c", str[i][j]);
                printf("\n");
            }
            reng = reng + strlen(str[i]);
        } else {
            for (j = 0 ; j < reng ; j++) {
                printf(" ");
            }
            printf("%s\n", str[i]);
            reng = reng + strlen(str[i]);
        }
    }

    return 0;
}
/*
buatlah pola dengan menggunakan array of string (tidak ada newline di bagian atas).

Format Masukan:

n, 0 < n < 100, banyaknya string
n baris string

Format Keluaran:

pola string
Contoh Masukan

6
aku
adalah
anak
gembala
riang
gembira


Contoh Keluaran

a
 k
  u
   halada
         a
          n
           a
            k
             alabmeg
                    r
                     i
                      a
                       n
                        g
                         aribmeg

 */
