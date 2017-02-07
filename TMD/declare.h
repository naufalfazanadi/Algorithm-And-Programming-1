#include <stdio.h>
#include <string.h>

int cek_pesan (char str[]); // FUNGSI cek pesan
int exception (int x); // FUNGSI jika ujung nya yang kosong se bariseun
int cek_0 (int n, int x[n]); // FUNGSI untuk cek apakah string yang asli tidak sama seperti kamus semua

// PROSEDUR output string
void print_string (int n, char str[n][64], int nol);

// PROSEDUR POLA
void tolong     (int n, int col, int row, int tebal, int nplus, int exc[n]);
void kirim      (int n, int col, int row, int tebal, int nplus, int exc[n]);
void berita     (int n, int col, int row, int tebal, int nplus, int exc[n]);
void kosong     (int n, int col, int row, int tebal, int nplus, int exc[n]);
void matamata   (int n, int col, int row, int tebal, int nplus, int exc[n]);
void pasukan    (int n, int col, int row, int tebal, int nplus, int exc[n]);
void aman       (int n, int col, int row, int tebal, int nplus, int exc[n]);
void masuk      (int n, int col, int row, int tebal, int nplus, int exc[n]);
void tahan      (int n, int col, int row, int tebal, int nplus, int exc[n]);
// 9 POLA 

// PROSEDUR untuk output spasi
void spasi      (int n, int col, int row, int tebal, int nplus, int x, int exc[n]);
// PROSEDUR untuk semua output setelah stirng (pemanggilan pola pola dan spasi)
void print_pola (int n, int x[n], int tebal, int nol,  int exc[n]);

//JANJI
/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan yang
dispesifikasikan pada tugas masa depan Algoritma dan Pemrograman I
pada saat mengerjakan Tugas Masa Depan Algoritma dan Pemrograman I.
Jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya,
dan saya bersedia menerima hukumanNya. Aamiin. */ 
