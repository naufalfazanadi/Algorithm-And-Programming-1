/////////////////////////////////////////////////////////
///           [Alpro1] Tugas Praktikum 7             ////
///       SPERH15.C (DEL, BIKIN POLA STRING)         ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
/* EDITED (FIX THE PATTERN THAT EVEN) */
/* AND FIX THE CODE OF DELETION */

#include <stdio.h>
#include <string.h> // untuk mengakses library fungsi string

int main () {
    char str[64]; // var string
    char del[64]; // var string untuk delete
    int i,j,k; // untuk dalam looping

    /* INPUT */
    scanf("%s", &str);
    scanf("%s", &del);

    int count=0; // untuk menghitung charnya, coba ikut alur nya kalo belum
                 // kurang jelas fungsi nya :D

    /* LOOP AND DELETE */
    i = 0;
    while (i < strlen(str)) { // mengakses semua char str
        /* WHEN 1ST CHAR SAME */
        if (del[0] == str[i]) {
            j = 0;
            k = i; 
            /* AFTER THE 1ST CHAR SAME */
            while (del[j] == str[k] && del[j] != '\0' && str[k] != '\0') {
                j++;
                k++;
                count++; // <--- count untuk ini
            }

            /* DELETING */
            if (count == strlen(del)) {
                for (j = i ; j < strlen(str)-count ; j++) {
                    str[j] = str[j+count]; // geser indeks
                }
                str[j] = '\0'; // untuk memotong string
            }
            count = 0; // direset lagi
        } 
        i++; // iterasi
    }

    /* OUTPUT AFTER DELETING JUST FOR 1 LINE */
    printf("%s\n", str);

    /* OUTPUT AFTER DELETING WITH PATTERN*/
    /* ========= OPTIONAL FOR EVEN (GENAP) ===============*/

    if (strlen(str) % 2 == 0) {
        for (i = 0; i < strlen(str)/2; i++) {
            for (j = 0; j < i; j++) { // spasi segitiga
                printf(" ");
            }

            // ouput per-char
            if (i < strlen(str)/2) {
                printf("%c", str[i]);
            }        

            for (j = strlen(str)/2; j > i+1; j--) { // spasi segitiga balik
                printf(" ");
            }
            for (j = strlen(str)/2; j > i+1; j--) { // spasi segitiga balik
                printf(" ");
            }
            if (i < strlen(str)/2) { // ouput per-char
                printf("%c\n", str[strlen(str)-i-1]);
            }
        }
    /* =================FOR ODD=================== */
    } else {
        for (i = 0; i < strlen(str)/2+1; i++) {
            for (j = 0; j < i; j++) { // spasi segitiga
                printf(" ");
            }

            // ouput per-char
            if (i < strlen(str)/2) {
                printf("%c", str[i]);
            }        

            for (j = strlen(str)/2; j > i+1; j--) { // spasi segitiga balik
                printf(" ");
            }
            for (j = strlen(str)/2; j > i; j--) { // spasi segitiga balik
                printf(" ");
            }
            printf("%c\n", str[strlen(str)-i-1]);
        }
    }

    /* TIME FOR PIRPIYUUUU!!!! JUST COPYPASTE IT AND A LITTLE BIT MODIFICATION */
    /* ================ CHECK MY PIRPIYU CODE, 95% SAME :D =================== */

    int bef=-1 /*bef = before*/, baris=0, deret=0, n=0, range=1; // all variable that needed

    /* COUNTING HOW MANY LINE */
    while(deret < strlen(str)) {
        baris++;
        bef = bef + 2;
        deret = deret + bef;
    }
                                      /*yang diubah*/
    /* OUTPUT IT */                   /*|||||||||||*/
    for (i = 0 ; i < baris ; i++) {   /*vvvvvvvvvvv*/
        for (j =  strlen(str) ; j > i+strlen(str)/2+1; j--) {
            printf(" ");
        }
        // membuat segitiga
        for (j = 0 ; j < range ; j++) {
            if (n < strlen(str)) {
                printf("%c",str[n]);
                n++;
            }
        }
        range+=2;
        printf("\n");
    }
    return 0;
}
/* 1a2a3a4a5a6a7a8a9a */
/*
Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 7,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin.

================================================================================================

Hepi adalah teman baik piyu, kali ini hepi dituntut untuk jadi penerjemah sebuah sandi di perusahaannya.
Hepi selalu diberikan sebuah string(kata) yang sangat panjang dan harus menghilangkan semua kata-kata rahasia yang tidak perlu dalam sandi tersebut.
Bantulah Hepi untuk menerjemahkan kodenya.

Format Masukan :

s1 -> Sandi Rahasia 
s2 -> Kata yang harus dihilangkan 

Format Keluaran :
Pola sesuai dengan contoh.

Note:
: Karakter - (dash) diganti dengan spasi
: Length string hasil SELALU GANJIL

Contoh : 
nanananananonanox
nana

nanananananonanox
nanonanox -> strlen = 9(ganjil) 
Contoh Masukan

nanananananonanox
nana


Contoh Keluaran

nanonanox
n       x
 a     o
  n   n
   o a
    n
    n
   ano
  nanox
Contoh Masukan 2

1a2a3a4a5a6a7a8b9b
a


Contoh Keluaran 2

12345678b9b
1         b
 2       9
  3     b
   4   8
    5 7
     6
     1
    234
   5678b
  9b
       
Contoh Masukan 3

akukamudandia
kamu


Contoh Keluaran 3

akudandia
a-------a
-k-----i
--u---d
---d-n
----a
----a
---kud
--andia
 */
