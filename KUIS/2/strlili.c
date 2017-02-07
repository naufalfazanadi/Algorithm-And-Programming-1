/////////////////////////////////////////////////////////
///         [Alpro1] Quiz 2 - 1st Question           ////
///        STRLILI.C (CEK KONSO VOKAL SAMA)          ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h> // UNTUK MENGAKSES LIBRARY STRING

int main () {
    char str1[64]; // STRING KE 1 SEBANYAK 64 CHAR
    char str2[64]; // STRING KE 1 SEBANYAK 64 CHAR
    int i; // UNTUK PERULANGAN
    int konso[2]={0},vokal[2]={0}; // UNTUK JUMLAH VOKAL DAN KONSONAN

    // ----------------------INPUT-------------------------
    scanf("%s", &str1);
    scanf("%s", &str2);

    // ----------------------PROCESS-----------------------
    // CEK PER-CHAR
    for (i = 0; i < strlen(str1); i++) { // LOOP HINGGA PANJANG STRING
        // PENGECEKAN APABILA VOKAL
        if (str1[i] == 'a' || str1[i] == 'A' || 
            str1[i] == 'i' || str1[i] == 'I' || 
            str1[i] == 'u' || str1[i] == 'U' || 
            str1[i] == 'e' || str1[i] == 'E' || 
            str1[i] == 'o' || str1[i] == 'O') {
            vokal[0]++;
        } else { // PENGECEKAN APABILA KONSONAN
            konso[0]++;
        }
    }

    for (i = 0; i < strlen(str2); i++) { // LOOP HINGGA PANJANG STRING
        // PENGECEKAN APABILA VOKAL
        if (str2[i] == 'a' || str2[i] == 'A' || 
            str2[i] == 'i' || str2[i] == 'I' || 
            str2[i] == 'u' || str2[i] == 'U' || 
            str2[i] == 'e' || str2[i] == 'E' || 
            str2[i] == 'o' || str2[i] == 'O') {
            vokal[1]++;
        } else { // PENGECEKAN APABILA KONSONAN
            konso[1]++;
        }   
    }

    // ----------------OUTPUT------------------
    // PENGECEKAN APABILA JUMLAH KONSONAN SAMA
    if (konso[0] == konso[1]) {

        printf("sama konsonan\n");
    
    } else if (vokal[0] == vokal[1]) { // PENGECEKAN APABILA JUMLAH VOKAL SAMA
    
        printf("sama vokal\n");
    
    } else { // PENGECEKAN APABILA TIDAK ADA YANG SAMA
    
        printf("tidak ada yang sama\n");
    
    }

    return 0;
}

//JANJI
/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Kuis 2,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */
