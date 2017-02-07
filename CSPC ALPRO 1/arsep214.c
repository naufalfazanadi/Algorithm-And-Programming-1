/**
 * Jadi di arsep ini tuh kita bandingin
 * si jumlah bagian ke-1 array ke-1
 * sama si jumlah bagian ke-2 array ke-2
 * misal :
 * array 1= 2,3,4,5
 * array 2= 5,4,3,2
 *
 * nah kita bandingin apakah jumlah nya sama?
 * dari array ke-1 bag1 : 2+3 = 5
 * dari array ke-2 bag2 : 3+2 = 5
 * sama
 *
 * notes : bagian ke-1 itu dari awal sampe tengah
 * nah bagian ke-2 itu dari tengah sampe akhir
 */
#include <stdio.h>

int main () {
	int ar1[20]; // var untuk array part 1
	int ar2[20]; // var untuk array part 2
	int i; // untuk loop
	int n,m; // untuk jumlah inputan array part 1 dan 2
	int ar1total=0,ar2total=0;

	// input kan pengulangan untuk array part 1
	scanf("%d", &n);

	// loop untuk input array part 1 sebanyak n
	for (i = 0 ; i < n ; i++) {
		scanf("%d", &ar1[i]);
	}

	// input kan pengulangan untuk array part 2
	scanf("%d", &m);

	// loop untuk input array part 2 sebanyak n
	for (i = 0 ; i < m ; i++) {
		scanf("%d", &ar2[i]);
	}

	// ----------------tingali looping na, sarua jiga ieu-----------------
	// 
	// loop untuk menjumlahkan array 1 bag 1
	for (i = 0 ; i < n/2 ; i++) {
		ar1total = ar1total + ar1[i];
	}
	// loop untuk menjumlahkan array 2 bag 2
	for (i = m/2 ; i < m ; i++) {
		ar2total = ar2total + ar2[i];	
	}
	// ======================================================================

	// jika sama maka valid jika tidak tidak valid
	if (ar1total==ar2total) {
		printf("valid\n");
	} else {
		printf("tidak valid\n");
	}
	return 0;
}

/*Diberikan 2 buah array integer. Jumlah banyaknya elemen array selalu genap. Periksa apakah jumlah (sum) nilai elemen separuh array pertama bagian depan dan jumlah (sum) nilai elemen separuh array kedua bagian belakang adalah sama. Jika ya maka tampilkan valid, jika tidak maka tampilkan tidak valid.
Format Masukan:

n, 0 < n < 20, banyaknya bilangan di array pertama
n baris angka isi dari array pertama
m, 0 < m < 20, banyaknya bilangan di array kedua
m baris angka isi dari array kedua

Format Keluaran:

valid atau tidak valid

Contoh Masukan

4
1
2
3
4
2
4
3


Contoh Keluaran

valid

Contoh Masukan 2

4
1
2
3
4
4
5
6
0
3


Contoh Keluaran 2

valid

       
Contoh Masukan 3

6
1
2
3
4
5
6
2
4
7


Contoh Keluaran 3

tidak valid

        
*/
