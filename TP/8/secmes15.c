/////////////////////////////////////////////////////////
///           [Alpro1] Tugas Praktikum 8             ////
///      SECMES15.C (PUTAR STRING, PUTAR CHAR)       ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h> // buka library string

int main () {
    int i,j,k; // untuk looping
    int m,n,x; // jumlah string dan pemutaran

    // input jumlah string pertama
    scanf("%d", &m);

    char str1[m][64]; // deklarasi

    // input string pertama
    for (i = 0; i < m; i++) {
        scanf("%s", &str1[i]);
    }

    // input jumlah string kedua
    scanf("%d", &n);

    char str2[n][64]; // deklarasi

    // input string kedua
    for (i = 0; i < n; i++) {
        scanf("%s", &str2[i]);
    }

    // input pemutaran
    scanf("%d", &x);

    // -------------------------JIKA PUTAR 0-----------------------------------

    // jika pemutarannya 0
    if (x == 0) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < strlen(str1[i]); j++) {
                /* menghapus char ganjil*/
                for (k = j; k < strlen(str1[i]); k++) {
                    str1[i][k] = str1[i][k+1];
                }
            }
            str1[i][j]='\0'; // BACKSLASH 0!!!
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < strlen(str2[i]); j++) {
                /* menghapus char ganjil*/
                for (k = j; k < strlen(str2[i]); k++) {
                    str2[i][k] = str2[i][k+1];
                }
            }
            str2[i][j]='\0'; // BACKSLASH 0!!!
        }

    } else {
        // jika pemutarannya tidak 0

        // ------------------------GABUNG STRING-----------------------------------

        int count=0;
        char fusion[64][64];
        // gabungin kedua string kedalam satu variabel baru
        for (i = 0; i < m; i++) {
            strcpy(fusion[count], str1[i]);
            count++;
        }
        for (i = 0; i < n; i++) {
            strcpy(fusion[count], str2[i]);
            count++;
        }

        // ------------------------PUTAR STRING-----------------------------------

        char temp[64][64];

        // ambil char sebnayak x ke temp
        for (i = 0; i < x; i++) {
            strcpy(temp[i], fusion[i]);
        }

        // geser char
        for (i = 0; i < (count-x); i++) {
            strcpy(fusion[i], fusion[i + x]);
        }

        // dari temp ke ujung
        for (i = (count-x); i < count; i++) {
            strcpy(fusion[i], temp[i - (count-x)]);
        }

        // ------------------------PECAH STRING-----------------------------------

        count = 0;
        // balikan kembali string string nya
        for (i = 0; i < m; i++) {
            strcpy(str1[i], fusion[count]);
            count++;
        }
        for (i = 0; i < n; i++) {
             strcpy(str2[i], fusion[count]);
             count++;
        }

        // ------------------------GABUNG CHAR-------------------------------------

        char fusion_char[2][128];

        // penggabungan char untuk diurutkan
        count=0;
        for (i = 0; i < m; i++) {
            for (j = 0; j < strlen(str1[i]); j++) {
                fusion_char[0][count] = str1[i][j];
                count++;
            }
        }
        fusion_char[0][count] = '\0'; // BACKSLASH 0!!!

        count=0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < strlen(str2[i]); j++) {
                fusion_char[1][count] = str2[i][j];
                count++;
            }
        }
        fusion_char[1][count] = '\0'; // BACKSLASH 0!!!

        // ------------------------PUTAR CHAR-------------------------------------

        char temp_char[2][128];

        // string 1
        for (j = 0; j < x; j++) {
           temp_char[0][j] = fusion_char[0][j];
        }
        for (i = 0; i < (strlen(fusion_char[0]) - x); i++) {
            fusion_char[0][i] = fusion_char[0][(i + x)];
        }
        for (i ; i < strlen(fusion_char[0]); i++) {
            fusion_char[0][i] = temp_char[0][(i - (strlen(fusion_char[0]) - x))];
        }

        // string 2
        for (j = 0; j < x; j++) {
           temp_char[1][j] = fusion_char[1][j];
        }
        for (i = 0; i < (strlen(fusion_char[1]) - x); i++) {
            fusion_char[1][i] = fusion_char[1][(i + x)];
        }
        for (i ; i < strlen(fusion_char[1]); i++) {
            fusion_char[1][i] = temp_char[1][(i - (strlen(fusion_char[1]) - x))];
        }

        // -------------------------PECAH CHAR-----------------------------------

        // kembalikan charnya
        count=0;
        for (i = 0; i < m; i++) {
            for (j = 0; j < strlen(str1[i]); j++) {
                str1[i][j] = fusion_char[0][count];
                count++;
            }
            str1[i][j]='\0'; // BACKSLASH 0!!!
        }

        count=0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < strlen(str2[i]); j++) {
                str2[i][j] = fusion_char[1][count];
                count++;
            }
            str2[i][j]='\0'; // BACKSLASH 0!!!
        }
    }

     // --------------------------OUTPUT------------------------------------

    printf("1\n");
    for (i = 0; i < m; i++) {
        if (i == 0) { // untuk nempel ke tembok

            printf("%s", str1[0]);

        } else if (str1[i-1][0] == '\0') { // jika 1 char atau habis inputannya

            printf("%s", str1[i]);

        } else { // pake spasi

            printf(" %s", str1[i]);

        }
    }

    printf("\n");

    printf("2\n");
    for (i = 0; i < n; i++) {
        if (i == 0) { // untuk nempel ke tembok

            printf("%s", str2[0]);

        } else if (str2[i-1][0] == '\0'){ // jika 1 char atau habis inputannya

            printf("%s", str2[i]);

        } else { // pake spasi

            printf(" %s", str2[i]);

        }
    }

    printf("\n");

    return 0;

}
/*
Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 8,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya,
dan saya bersedia menerima hukumanNya. Aamiin.
===================================================================================================
Hepi dan Tobi adalah agen-agen rahasia sebuah badan intelegen. Suatu hari, mereka harus bertukar informasi dengan saling bertukar pesan menggunakan sebuah alat. Alat itu harus menggunakan program yang bisa mengenkripsi dua kalimat informasi yang akan disampaikan menjadi sebuah pesan rahasia yang hanya bisa dimengerti oleh badan intelegen mereka sendiri.
Cara pengenkripsian tersebut adalah dengan memutar kata dalam setiap kalimat, dan huruf dalam setiap kata, sebanyak x putaran. Kamu sebagai programmer badan intelegen tersebut, ditugas untuk segera membuat program pengenkripsian ini sehingga berjalan sebagaimana yang diinginkan.

Format masukan :
n, jumlah baris array of string pertama
string-string yang akan dimasukkan ke array of string pertama
m, jumlah baris array of string kedua
string yang akan dimasukkan ke array of string kedua
x, jumlah putaran

Contoh :
input :
4
aku
adalah
anak
gembala
3
selalu
riang
gembira
2

PUTARAN STRING SEBANYAK 2 KALI
isi arr of string ke-1 menjadi :
anak
gembala
selalu
riang

isi arr of string ke-2 menjadi :
gembira
aku
adalah

PUTARAN CHAR SEBANYAK 2 KALI
isi arr of string ke-1 menjadi :
akge mbalase laluri angan

arr of string ke-2 menjadi :
mbiraak uad alahge

sehingga output-nya adalah :
1
akge mbalase laluri angan
2
mbiraak uad alahge

Untuk mengamankan informasi, seandainya Hepi/Tobi meminta 0 putaran,
maka hapus huruf yang urutannya ganjil pada setiap string.
Contoh Masukan

5
ridwan
fikry
mira
fauzi
faisal
3
aku
cinta
alpro
3

Contoh Keluaran

1
zifai salaku cin taalp rofau
2
wanfik rymir arid
Contoh Masukan 2

4
ridwan
fikry
fauzi
faisal
2
kamu
dia
0

Contoh Keluaran 2

1
iwn ir az asl
2
au i
 */
