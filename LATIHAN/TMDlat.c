#include <stdio.h>
#include <string.h>

int i,j,k,n;
int count;
int x[32];

// ----------------- 1. TOLONG ------------------
    void tolong_row_1 () {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void tolong_row_2 () {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void tolong_row_3 () {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void tolong_row_4 () {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void tolong_row_5 () {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
// -----------------------------------------
// 
// ----------------2. KIRIM--------------------
    void kirim_row_1() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void kirim_row_2() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void kirim_row_3() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void kirim_row_4() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void kirim_row_5() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
// -----------------------------------------
// 
// ----------------3. BERITA--------------------
    void berita_row_1() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void berita_row_2() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void berita_row_3() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void berita_row_4() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void berita_row_5() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
// -----------------------------------------
//
// ----------------4. KOSONG--------------------
    void kosong_row_1() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void kosong_row_2() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void kosong_row_3() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void kosong_row_4() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void kosong_row_5() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
// -----------------------------------------
// 
// ----------------5. MATAMATA--------------------
    void matamata_row_1() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void matamata_row_2() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void matamata_row_3() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void matamata_row_4() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void matamata_row_5() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
// -----------------------------------------
// 
// ----------------6. PASUKAN--------------------
    void pasukan_row_1() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void pasukan_row_2() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void pasukan_row_3() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void pasukan_row_4() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void pasukan_row_5() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
// -----------------------------------------
// 
// ----------------7. AMAN--------------------
    void aman_row_1() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void aman_row_2() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void aman_row_3() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void aman_row_4() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void aman_row_5() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
// -----------------------------------------
//
// ----------------8. MASUK--------------------
    void masuk_row_1() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void masuk_row_2() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void masuk_row_3() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void masuk_row_4() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void masuk_row_5() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
// -----------------------------------------
//
// ----------------9. TAHAN--------------------
    void tahan_row_1() {
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void tahan_row_2() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void tahan_row_3() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
    }
    void tahan_row_4() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
    void tahan_row_5() {
        for (k = 0; k < n; k++) {
            printf("-");
        }
        for (k = 0; k < n; k++) {
            printf("0");
        }
        for (k = 0; k < n; k++) {
            printf("-");
        }
    }
// -----------------------------------------
// 
// ==========================PROCESS============================= 
void row_1 () {
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            switch (x[j]) {
                case 1 : tolong_row_1();break;
                case 2 : kirim_row_1();break;
                case 3 : berita_row_1();break;
                case 4 : kosong_row_1();break;
                case 5 : matamata_row_1();break;
                case 6 : pasukan_row_1();break;
                case 7 : aman_row_1();break;
                case 8 : masuk_row_1();break;
                case 9 : tahan_row_1();break;
            }
            if ((j != count - 1) && (x[j] != 10)) {
                for (k = 0; k < n; k++) {
                    printf("/");
                }
            }
        }
        if (x[0] != 10) {
            printf("\n");        
        }
    }    
} 

void row_2 () {
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            switch (x[j]) {
                case 1 : tolong_row_2();break;
                case 2 : kirim_row_2();break;
                case 3 : berita_row_2();break;
                case 4 : kosong_row_2();break;
                case 5 : matamata_row_2();break;
                case 6 : pasukan_row_2();break;
                case 7 : aman_row_2();break;
                case 8 : masuk_row_2();break;
                case 9 : tahan_row_2();break;
            }
            if ((j != count - 1) && (x[j] != 10)) {
                for (k = 0; k < n; k++) {
                    printf("/");
                }
            }
        }
        if (x[0] != 10) {
            printf("\n");
        }
    }
}

void row_3 () {
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            switch (x[j]) {
                case 1 : tolong_row_3();break;
                case 2 : kirim_row_3();break;
                case 3 : berita_row_3();break;
                case 4 : kosong_row_3();break;
                case 5 : matamata_row_3();break;
                case 6 : pasukan_row_3();break;
                case 7 : aman_row_3();break;
                case 8 : masuk_row_3();break;
                case 9 : tahan_row_3();break;
            }
            if ((j != count - 1) && (x[j] != 10)) {
                for (k = 0; k < n; k++) {
                    printf("/");
                }
            }
        }
        if (x[0] != 10) {
            printf("\n");
        }
    }
}

void row_4 () {
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            switch (x[j]) {
                case 1 : tolong_row_4();break;
                case 2 : kirim_row_4();break;
                case 3 : berita_row_4();break;
                case 4 : kosong_row_4();break;
                case 5 : matamata_row_4();break;
                case 6 : pasukan_row_4();break;
                case 7 : aman_row_4();break;
                case 8 : masuk_row_4();break;
                case 9 : tahan_row_4();break;
            }
            if ((j != count - 1) && (x[j] != 10)) {
                for (k = 0; k < n; k++) {
                    printf("/");
                }
            }
        }
        if (x[0] != 10) {
            printf("\n");
        }
    }
}

void row_5 () {
    for (i = 0; i < n; i++) {
        for (j = 0; j < count; j++) {
            switch (x[j]) {
                case 1 : tolong_row_5();break;
                case 2 : kirim_row_5();break;
                case 3 : berita_row_5();break;
                case 4 : kosong_row_5();break;
                case 5 : matamata_row_5();break;
                case 6 : pasukan_row_5();break;
                case 7 : aman_row_5();break;
                case 8 : masuk_row_5();break;
                case 9 : tahan_row_5();break;
            }
            if ((j != count - 1) && (x[j] != 10)) {
                for (k = 0; k < n; k++) {
                    printf("/");
                }
            }
        }
        if (x[0] != 10) {
            printf("\n");
        }
    }
}  

int cek_pesan (char cpy[64]) {
    if (strcmp(cpy,"tolong") == 0) {
        return 1;
    } else if (strcmp(cpy,"kirim") == 0) {
        return 2;
    } else if (strcmp(cpy,"berita") == 0) {
        return 3;
    } else if (strcmp(cpy,"kosong") == 0) {
        return 4;
    } else if (strcmp(cpy,"matamata") == 0) {
        return 5;
    } else if (strcmp(cpy,"pasukan") == 0) {
        return 6;
    } else if (strcmp(cpy,"aman") == 0) {
        return 7;
    } else if (strcmp(cpy,"masuk") == 0) {
        return 8;
    } else if (strcmp(cpy,"tahan") == 0) {
        return 9;
    } else {
        // kalau tidak sama seperti kamus
        return 10;
    }
}

void array_string () {
    int ar;
    scanf("%d", &ar);

    char str[ar][64];

    for (i = 0; i < ar; i++) {
        scanf("%s", &str[i]);
    }

    scanf("%d", &count);

    int pesan;

    char cpy[64][64];

    for (i = 0; i < count; i++) {
        scanf("%d", &pesan);

        // pindahkan
        strcpy(cpy[i], str[pesan-1]);
        
        x[i] = cek_pesan(cpy[i]);
    }
    scanf("%d", &n);

    for (i = 0; i < count; i++) {
        if (i != 0) {
            printf(" %s", cpy[i]);
        } else {
            printf("%s", cpy[i]);
        }
    }
    printf("\n");

    if (x[0] != 10) {
        for (i = 0; i < n; i++) {
            printf("\n");
        }
    }

}

int main () {

    // inputan string + prosesnya
    array_string();

    // bikin pola per baris
    row_1();
    row_2();
    row_3();
    row_4();
    row_5();

    return 0;
}
