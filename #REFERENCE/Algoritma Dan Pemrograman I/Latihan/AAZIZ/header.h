//ini adalah library untuk mesin dan main
#include <stdio.h>//library untuk standar input output
#include <string.h>//libary untuk string

//variabel global(bisa digunakan di mesin dan di main)
int n,i,j,k,l,tebal,hasil;

//bungkusan digunakan untuk menampung isi string yang akan di proses di fungsi ubahasil dan membuat variabel bungkusan string of typedef
typedef struct{
	char karakter[100];
}kode;//nama bungkusan

//fungsi digunakan untuk mengecek adakah karakter angka di dalam string
int tambah(int ,kode []);//fungsi untuk tambah
int kali(int ,kode []);//fungsi untuk kurang
int kurang(int ,kode []);//fungsi untuk kali

//fungsi yang menggunakan bungkusan
kode ubahhasilkestring(int );//fungsi untuk mengubah integer angka menjadi string angka

//prosedur digunakan untuk membuat pola sesua hasil yang ada di fungsi yang dijadikan string angka
void hasilpola(kode ,int ,int);