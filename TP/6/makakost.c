/////////////////////////////////////////////////////////
///        [Alpro1] Tugas Praktikum 6 *(REV)         ////
///          MAKAKOST.C (PILIH MAKAN ZIAH)           ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h> 

// deklarasi bungkusan
typedef struct {
    int rating; // rating
    int price; // harga
} varmakan; // nama bungkusan

// main
int main () {
    varmakan makanan[100]; // variabel bertipe bungkusan array
    int input; // untuk inputan
    int count=0; // counter

    // ===================PROCESS AND INPUT======================//
    scanf("%d", &input); // input

    while (input != 0) { // perkondisian
        makanan[count].rating = input; // pemasukan input ke rating
        scanf("%d", &makanan[count].price); // input harga makanan
        count++; // iterasi untuk indeks
        scanf("%d", &input); // input lagi dalam while
    }
    // ==========================================================//
    
    char rasa, mahmur; // var untuk rasa dan mahal murah
    int uang; // var untuk uang

    scanf(" %c %c", &rasa, &mahmur); // input rasa mahal murah
    scanf("%d", &uang); // input uang

    int i=0; // untuk looping
    int max=0, min=999999999; // untuk nilai MAX dan MIN
    int har=0;
    int bol; // untuk ratingnya

    // ========================PROCESS=============================//
    
    // jika enak
    if (rasa == 'e' || rasa == 'E') {
        // looping sebanyak inputan
        while (i < count) {
            // range yang enak
            if (makanan[i].rating > 5 && makanan[i].rating <= 10) {
                // jika uangnya masuk
                if (uang >= makanan[i].price) {
                    // kalo mahal
                    if (mahmur == 'j' || mahmur == 'J') {
                        // untuk tau harga max
                        if (max < makanan[i].price) {
                            max = makanan[i].price;
                            har = max; // // harga = max
                            bol = makanan[i].rating;
                        }
                    // kalo murah
                    } else if (mahmur == 'k' || mahmur == 'K') {
                        // untuk tau harga min
                        if (min > makanan[i].price) {
                            min = makanan[i].price;
                            har = min; // harga = min
                            bol = makanan[i].rating;
                        }
                    }
                }
            }
            i++; // iterasi
        }
    // jika sedang
    } else if (rasa == 's' || rasa == 'S') {
        // looping sebanyak inputan
        while (i < count) { 
            // range yang sedang
            if (makanan[i].rating > 0 && makanan[i].rating <= 5) {
                // jika uangnya masuk
                if (uang >= makanan[i].price) {
                    // kalo mahal
                    if (mahmur == 'j' || mahmur == 'J') {
                        // untuk tau harga max
                        if (max < makanan[i].price) {
                            max = makanan[i].price;
                            har = max; // harga = max
                            bol = makanan[i].rating;
                        }
                    // kalo murah
                    } else if (mahmur == 'k' || mahmur == 'K') {
                        // untuk tau harga min
                        if (min > makanan[i].price) {
                            min = makanan[i].price;
                            har = min; // harga = min
                            bol = makanan[i].rating;    
                        }
                    }
                }
            }
            i++; // iterasi
        }
    }
    // ===========================================================//
    
    // ========================OUTPUT=============================//
    if (har != 0) { // jika harga nya masuk
        printf("%d\n", bol);        // print
        printf("%d\n", har);        // print
    } else { // jika ga masuk harganya
        printf("Kelaparan\n"); // lappaaarrr
    }
    // ===========================================================//
    return 0;
}
/*
Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 6,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin.

================================================================================================

Ziah adalah seorang mahasiswa yang ngekost. Dia suka sekali membanding-bandingkan harga makanan 
yang akan dia beli dengan uang yang dia punya. Ziah ingin sekali makanan yang sangat enak, 
terkadang dia juga ingin sekali makanan yang enak tapi murah dan sebagainya. 
Bantulah ziah untuk memilih makanan tersebut!

Format Masukan :
n -> Rating makanan (1-5 = Sedang) (6-10 = Enak)
m -> Harga makanan

Ket: input akan berhenti bila ada angka 0(nol).

x -> yang di cari Ziah( E = Enak , S = Sedang )
y -> yang di cari Ziah( J = Mahal, K = Murah )
z -> uang yang Ziah punya

Mahal = cari yang paling mahal dari Enak / Sedang ( harus sesuai dengan uang yang Ziah punya )
Murah = cari yang paling murah dari Enak / Sedang ( harus sesuai dengan uang yang Ziah punya )
Jika uang yang Ziah punya tidak mencukupi maka tampilkan Kelaparan

Format keluaran :
lihat contoh dibawah

Ket : pakai Array Of Bungkusan dan While 
Contoh Masukan

1
10000
6
13000
9
11000
0
E J
9000


Contoh Keluaran

Kelaparan

Contoh Masukan 2

1
10000
6
13000
9
11000
0
E J
12000


Contoh Keluaran 2

9
11000

       
Contoh Masukan 3

1
10000
2
9000
6
13000
9
11000 
0
S K
12000


Contoh Keluaran 3

2
9000


 */
