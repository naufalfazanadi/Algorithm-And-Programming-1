#include <stdio.h>
#include <string.h>

int main () {
    int i,n;

    scanf("%d", &n);

    char tag_div[n][16];
    int buka = 0;
    int tutup = 0;
    int bol = 0;

    for (i = 0; i < n; i++) {
        scanf("%s", &tag_div[i]);
    }

    i = 0;
    while (i < n && tutup <= buka){
        if (strcmp(tag_div[i], "</div>") == 0) {
            tutup++;
        } else if (strcmp(tag_div[i], "<div>") == 0) {
            buka++;
        }

        if (tutup > buka) {
            bol = 0;
        } else if (tutup < buka) {
            bol = 0;
        } else if (tutup == buka) {
            bol = 1;
        }
        i++;
    }

    if (bol == 1) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    return 0;
}
/*
6
<div>
<div>
</div>
<div>
</div>
</div>

4
</div>
<div>
</div>
<div>

5
<div>
</div>
<div>
<div>
</div>

Hepi adalah seorang proffesional deisgner web. Dia sangat handal dalam membuat suatu web, dan sangat mahir dalam bahasa pemrograman HTML. Namun ketika Hepi mengetikan kode program yg sangat panjang ia seringkali kesulitan dalam mengecek apakah kode program HTML yg dia ketikan sudah sempurna atau belum. Maka dari itu, Hepi meminta bantuan temannya Tobi untuk membuat program pengecek tag HTML.

Tag yang akan di cek yaitu tag Div. Penulisan tag div ini, hampir sama
dengan penulisan tag2 HTML lainya, yaitu:
diawali dengan  tag
< div>
dan di akhiri dengan 
< /div>
Bantulah Tobi untuk membuat program pengecek tag yg diinginkan Hepi.
Program akan menghasilkan keluaran valid jika tag yg dimasukan sudah tertutup sempurna, dan
akan menghasilkan keluaran tidak valid jika belum tertutup. Contoh:
Input:
6
< div>
< div>
< /div>
< div>
< /div>
< /div>

< div>  ... (tag1)
< div>  ... (tag2)
< /div> ... (tutup tag2)
< div>  ... (tag3)
< /div> ... (tutup tag3)
< /div> ... (tutup tag1)
Karena setiap tag sudah tertutup sempurna, maka program akan menghasilkan keluaran: valid
TIDAK ADA SPASI ANTARA < dan d

Contoh Masukan

6
< div>
< div>
< /div>
< div>
< /div>
< /div>


Contoh Keluaran

valid

Contoh Masukan 2

4
< /div>
< div>
< /div>
< div>


Contoh Keluaran 2

tidak valid

       
Contoh Masukan 3

5
< div>
< /div>
< div>
< div>
< /div>


Contoh Keluaran 3

tidak valid 
 */
