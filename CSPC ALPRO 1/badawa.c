#include <stdio.h>
#include <string.h>

int main () {
    int i,j,k,l;
    int n;
    char str[100];

    scanf("%s", &str);
    scanf("%d", &n);

    int tinggi[n];
    char bangun[100];
    int sum[n];
    // ==================================================
    for (i = 0 ; i < n ; i++) {
        sum[i]=0;
    } 
    // ==================================================
    int jum[100];
    int tamp[100],reng=0;
    // ==================================================
    for (i = 0 ; i < 100 ; i++) {
        jum[i]=0;
        tamp[i]=0;
    } 
    // ==================================================

    for (i = 0 ; i < n ; i++) {
        scanf("%s %d", &bangun, &tinggi[i]);
        // compare
        if ((strcmp(bangun,"kotak")==0)||(strcmp(bangun,"segitiga")==0)) {
            for (j = 0 ; j < (tinggi[i] * tinggi[i]) ; j++) {
                if (j % strlen(str) == 0) {
                    sum[i]++;
                }
            }
        } else if (strcmp(bangun,"segidelapan")==0) {
            tamp[i] = tinggi[i] - 2;
            for (j = 0 ; j < tinggi[i] ; j++) {
                tamp[i] = tamp[i] + 2;
                jum[i] = jum[i] + tamp[i];
            }
            reng = tamp[i];
            
            if (tinggi[i] != 1) {
                jum[i] = jum[i] * 2;
            }
            
            for (j= 3 ; j <= tinggi[i] ; j++) {
                for (k = 0 ; k < reng ; k++) {
                    jum[i] = jum[i] + 1;
                }
            }
            for (j = 0 ; j < jum[i] ; j++) {
                if (j % strlen(str) == 0) {
                    sum[i]++;
                }
            }
        }
    }
    for(i = 0 ; i < n ; i++) {
        printf("%d\n", sum[i]);
    }
    return 0;
}

/*
Dawala ingin membuat bangun datar dari huruf. Bangun datarnya terdiri dari kotak, segitiga, dan segidelapan. Misalkan kata yang akan digunakan untuk membuat bangun adalah ilkompc maka ketika terdapat masukan kotak 5 artinya adalah membuat kotak dengan sisi yang sama sebanyak 5 (kolom 5 huruf, kebawah 5 baris) huruf sebagai berikut:

ilkom
pcilk
ompci
lkomp
cilko
jika ada segitiga 7 membuat bangun segitiga dengan tinggi 7 baris seperti berikut:

      i
     lko
    mpcil
   kompcil
  kompcilko
 mpcilkompci
lkompcilkompc
jika ada segidelapan 3 maka berarti membuat segi delapan dengan sisi 3 huruf seperti berikut:

   ilk
  ompci
 lkompci
 lkompci
 lkompci
  lkomp
   cil
keluaran adalah berapa kali kata digunakan untuk membangun bangun dawala

Format Masukan

string kata
n, 0 < n < 100, banyaknya bangun dawala yang akan dibuat
n baris bangun dawala

Format Keluaran

n baris banyakanya kata yang digunakan untuk membuat bangun dawala

Contoh Masukan

ilkompc
3
kotak 5
segitiga 7
segidelapan 3


Contoh Keluaran

4
7
6
 */
