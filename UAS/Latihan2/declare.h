#include <stdio.h>
#include <string.h>

int vokal (char str[]);

void print (int n, char str[n][64], int x[n]);

/*
Gunakan prosedur/fungsi dalam mengerjakan soal ini. Diberikan array of string. Hitunglah ada berapa huruf vokal di dalam setiap string, lalu cetaklah pola string sebanyak jumlah huruf vokal yang ada di dalam setiap string. Pola dapat dilihat pada contoh input dan output.

Format Masukan:

n, 0 < n < 50, banyaknya string dalam array of string
n baris string

Format Keluaran:

pola tertentu, dimana jika hanya terdiri dari 1 huruf vokal maka string hanya ditampilkan sekali dan di rata kiri. Jika tidak memiliki huruf vokal maka tidak ditampilkan string-nya.

Contoh Masukan

8
aku
adalah
anak
komputer
selalu
riang
dan
gembira


Contoh Keluaran

aku
   aku
            adalah
      adalah
adalah
anak
    anak
                komputer
        komputer
komputer
selalu
      selalu
            selalu
     riang
riang
dan
              gembira
       gembira
gembira

 */
