#include <stdio.h>

int main () {
	
	int gen[3] = {0, 0, 0 }; // variable untuk menampung genap
	int gan[3]={0,0,0}; // variable untuk menampung genap
	int jumgan=0,jumgen=0; // variabe untuk jumlah ganjil dan genap
	int i,j; // untuk perulangan
	int input[6]; // variable array untuk menampung inputan

	// looping sebanyak 6 kali
	for (i = 0; i < 6; i++) {
		// input
		scanf("%d", &input[i]);
		if (input[i]%2==0) {
			// jika genap
			// untuk variable perbandingan
			jumgen++;
			// jika arraynya masih kosong maka isi
			// kalo misalnya arraynya udah ada yang isi
			// lanjut ke array selanjutnya
			if (gen[0]==0) {
				gen[0] = input[i];
			} else if (gen[1]==0) {
				gen[1] = input[i];
			} else if (gen[2]==0) {
				gen[2] = input[i];
			}
		} else { //jika ganjil
			// untuk variable perbandingan
			jumgan++;
			// jika arraynya masih kosong maka isi
			// kalo misalnya arraynya udah ada yang isi
			// lanjut ke array selanjutnya
			if (gan[0]==0) {
				gan[0] = input[i];
			} else if (gan[1]==0) {
				gan[1] = input[i];
			} else if (gen[2]==0) {
				gan[2] = input[i];
			}
		}
	}
	// ================================
	// notes : kenapa harus pake gan[] sama gen[] ?
	// agar nantinya terurut mana yang diinput duluan mana yang engga
	// kita liat di outputnya
	// =================================
	
	// jika genap sama dengan ganjil
	if ((jumgan==3)&&(jumgen==3)) {
		// masuk ke ouput dengan looping
		// kenapa sampe 3 karena array
		// gen sama gan cuma sampe 3
		for (i = 0 ; i < 3 ; i++) {
			printf("%d\n", gen[i]);
			printf("%d\n", gan[i]);
		}
	} else {
		printf("tidak valid\n");
	}
	return 0;
}

/*Diberikan 6 buah angka, dimana secara acak merupakan angka ganjil dan genap. Tampilkan di layar angka-angka itu dengan menampilkan angka genap, kemudian diikuti angka ganjil begitu seterusnya jika angka masukan memiliki 3 angka ganjil dan 3 angka genap. Jika tidak memenuhi syarat maka tampilkan tidak valid.

Format Masukan:

6 buah angka masukan

Format Keluaran:

angka dengan format genap ganjil atau tidak valid

Contoh Masukan

41
23
35
22
12
44


Contoh Keluaran

22
41
12
23
44
35

Contoh Masukan 2

1
33
4
55
11
2
77


Contoh Keluaran 2

tidak valid
*/

