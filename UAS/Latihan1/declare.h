#include <stdio.h>
#include <string.h>

int angka (char str[]);

void print (char str[], int x);

/*
Gunakan prosedur/fungsi dalam mengerjakan soal ini. Diberikan array of string. periksalah ada karakter angka berapa (dalam setiap string ada 1 karakter angka) di dalam setiap string, lalu cetaklah pola string senilai karakter angka itu yang ada di dalam setiap string. Pola dapat dilihat pada contoh input dan output. (tidak diijinkan menggunakan fungsi itoa arou atoi)

Format Masukan:

n, 0 < n < 50, banyaknya string dalam array of string
n baris string

Format Keluaran:

pola tertentu, dimana karakter angka adalah 1 maka string hanya ditampilkan sekali dan di rata kiri. Jika karakter angka 0 maka tidak ditampilkan string-nya.

Contoh Masukan

8
4ku
ada1ah
an4k
komput3r
selal0
rian9
d2n
ge8mbira


Contoh Keluaran

4ku
   4ku
 4ku
    4ku
ada1ah
an4k
    an4k
 an4k
     an4k
komput3r
        komput3r
 komput3r
rian9
     rian9
 rian9
      rian9
  rian9
       rian9
   rian9
        rian9
    rian9
d2n
   d2n
ge8mbira
        ge8mbira
 ge8mbira
         ge8mbira
  ge8mbira
          ge8mbira
   ge8mbira
           ge8mbira

 */
