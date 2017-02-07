#include "declare.h"


// PENGECEKAN string
int cek_pesan (char str[]) {
    if (strcmp(str,"tolong") == 0 || strcmp(str,"TOLONG") == 0) {
        return 1;
    } else if (strcmp(str,"kirim") == 0 || strcmp(str,"KIRIM") == 0) {
        return 2;
    } else if (strcmp(str,"berita") == 0 || strcmp(str,"BERITA") == 0) {
        return 3;
    } else if (strcmp(str,"kosong") == 0 || strcmp(str,"KOSONG") == 0) {
        return 4;
    } else if (strcmp(str,"matamata") == 0 || strcmp(str,"MATAMATA") == 0) {
        return 5;
    } else if (strcmp(str,"pasukan") == 0 || strcmp(str,"PASUKAN") == 0) {
        return 6;
    } else if (strcmp(str,"aman") == 0 || strcmp(str,"AMAN") == 0) {
        return 7;
    } else if (strcmp(str,"masuk") == 0 || strcmp(str,"MASUK") == 0) {
        return 8;
    } else if (strcmp(str,"tahan") == 0 || strcmp(str,"TAHAN") == 0) {
        return 9;
    } else {
        // kalau tidak sama seperti kamus
        return 0;
    }
}

// CEK ujungnya
int exception (int x) {
    int count = 0;
    if (x == 1 || x == 7) {
        count++;
    }
    return count;
}

// CEK jika semua nya tidak sama dengan kamus
int cek_0 (int n, int x[n]) {
    int i = 0;
    int bol = 0;

    while (i < n && bol == 0) {
        if (x[i] != 0) {
            bol = 1;
        }
        i++;
    }

    return bol;
}

// PROSEDUR untuk output string
void print_string (int n, char str[n][64], int nol) {
    int i;

    for (i = 0; i < n; i++) {
        // untuk yang paling awal atau string sebelumnya kosong
        if (i == 0 || str[i-1][0] == '\0' || str[i][0] == '\0') {
            printf("%s", str[i]);
        } else {
            // next
            printf(" %s", str[i]);
        }
    }
    
    // jika string asli tidak 0 (min salah satu ada di kamus)
    if (nol != 0) {
        printf("\n");
    }
}

// --------------------------PROSEDUR POLA - POLA---------------------------------

// NOTE : exc[] untuk pengecekan true false pola yang kosong itu dari ujungya kosong
// POLA 1 : TOLONG
void tolong(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {

            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 7 || exc[col+1] != 1)  && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 5
        case 4 : {
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

    }
}

// POLA 2 : KIRIM
void kirim(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

    }
}

// POLA 3 : BERITA
void berita(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

    }
}

// POLA 4 : KOSONG
void kosong(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

    }
}

// POLA 5 : MATAMATA
void matamata(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;    

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

    }
}

// POLA 6 : PASUKAN
void pasukan(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 7 || exc[col+1] != 1)  && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

    }
}

// POLA 7 : AMAN
void aman(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 7 || exc[col+1] != 1)  && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

    }
}

// POLA 8 : MASUK
void masuk(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

    }
}

// POLA 9 : TAHAN
void tahan(int n, int col, int row, int tebal, int nplus, int exc[n]) {

    int i;

    switch(row) {
        // BARIS 1
        case 0 : {
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 2
        case 1 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 7 || exc[col+1] != 1)  && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 3
        case 2 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
        } break;

        // BARIS 4
        case 3 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

        // BARIS 5
        case 4 : {
            for (i = 0; i < tebal; i++) {
                printf("-");
            }
            for (i = 0; i < tebal; i++) {
                printf("0");
            }
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        } break;

    }
}
// -------------------------------------------------------------------------------

// UNTUK OUTPUT SPASI ANTAR POLA
void spasi (int n, int col, int row, int tebal, int nplus, int x, int exc[n]) {
    int i;

    switch (row) {
        // BARIS 1
        case 0 : {
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && (nplus != 7 || exc[col+1] != 1) && x != 0 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        }break;

        // BARIS 2
        case 1 : {
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 7 || exc[col+1] != 1) && x != 0 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        }break;

        // BARIS 3
        case 2 : {
            // Cek jika belum diujung / yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && x != 0 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        }break;

        // BARIS 4
        case 3 : {
            // Cek jika belum diujung / yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && x != 0 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        }break;

        // BARIS 5
        case 4 : {
            // Cek jika belum diujung / depannya bukan yang pengecualian pola yg kosong / 
            // yang depannya tidak kosong maka tampilkan spasinya
            if (col != n - 1 && (nplus != 1 || exc[col+1] != 1) && x != 0 && nplus != 0) {
                for (i = 0; i < tebal; i++) {
                    printf("-");
                }
            }
        }break;
        
    }
}

// ===============PROSEDUR OUTPUT SEMUANYA SETELAH OUTPUT STRING================
void print_pola (int n, int x[n], int tebal, int nol, int exc[n]) {
    int i, j, k;
    
    // jika string asli tidak 0 (min salah satu ada di kamus)
    if (nol != 0) {
        for (i = 0; i < tebal; i++) {
            printf("\n");
        }
    }

    for (i = 0; i < 5; i++) {           // loop sebanyak baris pola
        for (j = 0; j < tebal; j++) {   // loop sebanyak tebal pola
            for (k = 0; k < n; k++) {   // loop sebanyak pola yang diminta
                switch (x[k]) {
                    // OUTPUT
                    case 1 : tolong(n, k, i, tebal, x[k+1], exc);break;
                    case 2 : kirim(n, k, i, tebal, x[k+1], exc);break;
                    case 3 : berita(n, k, i, tebal, x[k+1], exc);break;
                    case 4 : kosong(n, k, i, tebal, x[k+1], exc);break;
                    case 5 : matamata(n, k, i, tebal, x[k+1], exc);break;
                    case 6 : pasukan(n, k, i, tebal, x[k+1], exc);break;
                    case 7 : aman(n, k, i, tebal, x[k+1], exc);break;
                    case 8 : masuk(n, k, i, tebal, x[k+1], exc);break;
                    case 9 : tahan(n, k, i, tebal, x[k+1], exc);break;
                }
                // OUTPUT SPASI ANTAR POLA
                spasi (n, k, i, tebal, x[k+1], x[k], exc);
            } 
            // jika string asli tidak 0 (min salah satu ada di kamus)
            if (nol != 0) {
                printf("\n");
            }
        }
    }

}

/*
9
tolong
kirim
berita
kosong
matamata
pasukan
aman
masuk
tahan
9
1
2
3
4
5
6
7
8
9
2
 */
