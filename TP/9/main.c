#include "declare.h"

int main () {
    // ------------------------INPUT------------------------------
    char str[64][64];

    // INPUT SETRING
    count = -1;

    // loop
    do {
        count++;
        scanf("%s", &str[count]);
    } while ((strcmp(str[count], "end") != 0) && (strcmp(str[count], "END") != 0));

    // jika lebih dari 10
    if (count > 10) {
        count = 10;
    }

    // JUMLAH CHAR DISAMARKAN
    int n;
    scanf("%d", &n);

    // --------------------MENGGANTI CHAR / GESER--------------------
    // N = 0 dan N != 0
    if (n != 0) {
        
        char x[n], y[n];
        // input char diganti & yang mengganti
        for (i = 0; i < n; i++) {
            scanf(" %c", &x[i]);
            scanf(" %c", &y[i]);
        }

        // MENGGANTI CHAR NYA
        exchange (n, x, y, str);
    
    } else {

        // menggeser vokal, puter, dan membalikan
        slide (str);

    }

    return 0;
}

/*
Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 9,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin.
*/

// ============================================================================================

/*
Jadi gini ceritanya, si Hepi ini lagi mencari pekerjaan dan tiba-tiba dia direkrut oleh orang iseng misterius untuk menjadi programmer sebuah badan intelijen. Hepi mempunyai sebuah konsep mesin sandi yang belum pernah dia coba, dan badan intelijen tersebut ternyata tertarik dan setuju dengan konsep yang Hepi punya.
Konsep yang dimiliki Hepi adalah sebuah program yang menerima pesan hingga ada kata end yang menandakan pesan tersebut selesai dan pesan yang diterima program hanya 10 kata untuk sedikit menyamarkan pesan aslinya.
Lalu program tersebut akan meminta masukan berupa angka yang menjadi banyaknya karakter yang akan disamarkan menjadi kode sandi.
Namun Hepi punya agenda terselubung, sehingga dia membuat fitur khusus untuk dirinya sendiri dengan syarat memasukkan angka banyaknya karakter yang disamarkan dengan nilai 0, sehingga hanya hepi yang tahu kebenaran dari isi pesan tersebut. 
Fitur ini memindahkan huruf vokal dari pesan tersebut ke belakang, dan huruf vokal terakhir menjadi huruf vokal pertama. Kemudian setelah huruf vokal disamarkan, pesan tersebut dicetak secara terbalik baik dari urutan kata maupun urutan karakternya.
Buatlah mesin tersebut dan kalahkan Hepi dengan mesin buatan kalian agar Hepi bisa kembali ke jalan yang benar! Ingat ini hanya sebuah cerita fiktif belaka.
Gunakan konsep prosedur dalam membuat program ini.

Detail fitur rahasia : 
> ada perang di dapur (4 string)
> uda pareng da dipar (huruf vokal di dorong ke belakang)
> adu gnerap ad rapid (urutan huruf dibalik)
> rapid ad gnerap adu (urutan kata dibalik)
Format masukan :
string, berhenti ketika ada input end
n, banyaknya karakter yang akan disamarkan
x y, x = karakter yang akan disamarkan, y = karakter penyamar
Contoh Masukan

we
need
ward
end
4
w i
a 2
r 3
d x

Contoh Keluaran

ie neex i23x

Contoh Masukan 2

ada
unicorn
di
dalam
gedung
negara
api
end
0

Contoh Keluaran 2

apa aregun gnedag malid od nricuna adi
       
Contoh Masukan 3

ada
ufo
di
belakang
rumah
presiden
lama
negeri
atlantis
kemarin
siang
setelah
ada
gempa
end
4
u r
o i
f v
x w

Contoh Keluaran 3

ada rvi di belakang rrmah presiden lama negeri atlantis kemarin


 */
