// bismillahirrahmaanirrahiim
#include <stdio.h>

//type struct untuk waktu
typedef struct {
	int jam;
	int menit;
	int detik;
}waktu;

int main () {

	//waktu per kendaraan
	//mobil = 7 jam 20 menit 33 detik
	waktu mobil;
	mobil.jam = 7;
	mobil.menit = 20;
	mobil.detik = 33;
	
	// bus = 9 jam 10 menit 15 detik
	waktu bus;
	bus.jam = 9;
	bus.menit = 10;
	bus.detik = 15;

	// pesawat = 2 jam 40 menit 10 detik
	waktu pesawat;
	pesawat.jam = 2;
	pesawat.menit = 40;
	pesawat.detik = 10;
	
	//untuk input
	int kendaraan;
	int hari;
	int jam, menit, detik;
	// total akhir
	int jamx, menitx, detikx;

	//inputan
	scanf("%d", &kendaraan);
	scanf("%d", &hari);
	scanf("%d %d %d", &jam, &menit, &detik);

	//kondisi
	switch (kendaraan) {
		
		//mobil
		case 1 : {
			printf("mobil\n");
			
			//temp total
			jamx = jam + mobil.jam;
			menitx = menit + mobil.menit;
			detikx = detik + mobil.detik;

			// agar detik nya sesuai
			if (detikx >= 60) {
				menitx++;
				detikx = detikx % 60;
			}

			// agar menitnya sesuai
			// dan jamnya tidak >=24
			if (menitx >= 60) {
				jamx++;
				jamx = jamx % 24;
				menitx = menitx % 60;
			} else {
				jamx = jamx % 24;
			}

			// untuk pindah hari
			if (jam > jamx) {
				hari = (hari + 1) % 7;
			}

			//ouput
			printf("%d\n", hari);
			printf("%d %d %.2d\n", jamx, menitx, detikx);
		}break;

		//bus
		case 2 : {
			printf("bus\n");
			
			//temp total
			jamx = jam + bus.jam;
			menitx = menit + bus.menit;
			detikx = detik + bus.detik;

			// agar detik nya sesuai
			if (detikx >= 60) {
				menitx++;
				detikx = detikx % 60;
			}

			// agar menitnya sesuai
			// dan jamnya tidak >=24
			if (menitx >= 60) {
				jamx++;
				jamx = jamx % 24;
				menitx = menitx % 60;
			} else {
				jamx = jamx % 24;
			}
			
			// untuk pindah hari
			if (jam > jamx) {
				hari = (hari + 1) % 7;
			}

			// output
			printf("%d\n", hari);
			printf("%d %d %.2d\n", jamx, menitx, detikx);
		}break;
		
		//pesawat
		case 3 : {
			printf("pesawat\n");
			
			//temp total
			jamx = jam + pesawat.jam;
			menitx = menit + pesawat.menit;
			detikx = detik + pesawat.detik;

			// agar detik nya sesuai
			if (detikx >= 60) {
				menitx++;
				detikx = detikx % 60;
			}

			// agar menitnya sesuai
			// dan jamnya tidak >=24
			if (menitx >= 60) {
				jamx++;
				jamx = jamx % 24;
				menitx = menitx % 60;
			} else {
				jamx = jamx % 24;
			}

			// untuk pindah hari
			if (jam > jamx) {
				hari = (hari + 1) % 7;
			}

			// ouput
			printf("%d\n", hari);
			printf("%d %d %.2d\n", jamx, menitx, detikx);
		}break;
		
		//jika tidak ada pilihan
		default : printf("pilihan tidak ada\n");break;
	}
	
	return 0;
}

/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 3,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */

/**
 *
Moni mengagendakan jadwal pulang kampung pada pekan yang akan datang.
Untuk menuju kampung halamannya, ada 3 opsi kendaraan yang bisa dijadikan transportasi, yaitu :
1. mobil, dengan waktu tempuh 7 jam 20 menit 33 detik
2. bus, dengan waktu tempuh 9 jam 10 menit 15 detik
3. pesawat, dengan waktu tempuh 2 jam 40 menit 10 detik

Buatlah program untuk menghitung hari dan jam kedatangan Moni di kampung halamannya, jika ia 
menggunakan mobil, bus atau pesawat. 

Format masukan :
n = pilihan kendaraan (n=1, 2 atau 3)
m = hari keberangkatan Moni (1<=m<=7)
waktu keberangkatan (jam (spasi) menit (spasi) detik)

Format keluaran : 
nama kendaraan yang dipilih (mobil, bus atau pesawat)
hari kedatangan Moni
waktu kedatangan Moni (jam (spasi) menit (spasi) detik) 

Gunakan konsep switch case dan tipe bungkusan untuk menyelesaikan masalah ini.
Gunakan persen .2d untuk detik
Contoh Masukan

1
3
13 20 30


Contoh Keluaran

mobil
3
20 41 03

Contoh Masukan 2

2
7
23 10 15


Contoh Keluaran 2

bus
1
8 20 30

       
Contoh Masukan 3

4
5
20 00 00


Contoh Keluaran 3

pilihan tidak ada
 */