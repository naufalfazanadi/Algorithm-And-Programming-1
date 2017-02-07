/////////////////////////////////////////////////////////
///         [Alpro1] Quiz 1 - 2nd Question           ////
///      4INT15.C (KELIPATAN 2 DARI ANGKA LAIN)      ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

int main () {
	//deklarasi variabel;
	int a,b,c,d;
	//variabel untuk boolean
	int x=0;
	//input data integer;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	//pengecekan kondisi

	//a terlebih dahulu
	if (a%b==0) {
		x++;
	}
	if (a%c==0) {
		x++;
	}
	if (a%d==0) {
		x++;
	}

	//b
	if (b%a==0) {
		x++;
	}
	if (b%c==0) {
		x++;
	}
	if (b%d==0) {
		x++;
	}

	//c
	if (c%a==0) {
		x++;
	}
	if (c%b==0) {
		x++;
	}
	if (c%d==0) {
		x++;
	}

	//d
	if (d%a==0) {
		x++;
	}
	if (d%b==0) {
		x++;
	}
	if (d%c==0) {
		x++;
	}
	//pengoutputan
	if (x>=2) {
		printf("memenuhi\n");
	} else {
		printf("tidak memenuhi\n");
	}
	return 0;
}

//JANJI
/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Kuis 1,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */

//==================================================================================================

/*Diberikan masukan berupa 4 buah integer, periksa apakah ada sebuah bilangan yang merupakan kelipatan dari 2 buah bilangan lainnya. Jika ada maka tampilkan memenuhi, jika tidak ada maka tampilkan tidak memenuhi.

Format Masukan:

4 buah integer masukan.

Format Keluaran:

memenuhi atau tidak memenuhi

misalnya:

2 3 6 5

maka hasilnya:

memenuhi

karena 6 adalah kelipatan dari dua bilangan lainnya yaitu 2 dan 3.
Contoh Masukan

3 4 10 12


Contoh Keluaran

memenuhi

Contoh Masukan 2

5 6 7 8


Contoh Keluaran 2

tidak memenuhi

       
*/
