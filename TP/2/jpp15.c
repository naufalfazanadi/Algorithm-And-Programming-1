/*Bismillahirrahmaanirrahiim*/
#include <stdio.h>

int main () {
	//var untuk proses
	int interval;
	//var untuk inputan
	int n,p,q,r;
	char paket;
	//var untuk perhitungan
	int kembalian,pajak,total,harga;

	//input
	scanf("%d",&n); //hari
	scanf(" %c",&paket); //paket
	scanf("%d",&p); //jam masuk
	scanf("%d",&q); //jam keluar
	scanf("%d",&r); //bayar

	//if untuk berapa lama parkir
	if (p>q) {
		interval=24-p+q;
	} else {
		interval=q-p;
	}

	//if untuk harga
	if (paket == 'a') {
		if (interval>2) {
			harga=(2*1500)+(interval-2)*500;
		} else {
			harga=interval*1500;
		}
	} else if (paket == 'b') {
		if (interval>1) {
			harga=3000+(interval-1)*1000;
		} else {
			harga=interval*3000;
		}
	}

	//if untuk pajak
	if ((n==6)||(n==7)) {
		pajak=harga*25/100;
	} else {
		pajak=0;
	}

	//total harga dan kembalian piyu
	total=harga+pajak;
	kembalian=r-total;

	//ouput baris pertama
	if (n==1) {
		if (paket=='a') {
			printf("senin kelabu\n");
		} else if (paket=='b') {
			printf("senin ceria\n");
		}
	} else if (n==2) {
		if (paket=='a') {
			printf("selasa kelabu\n");
		} else if (paket=='b') {
			printf("selasa ceria\n");
		}
	} else if (n==3) {
		if (paket=='a') {
			printf("rabu kelabu\n");
		} else if (paket=='b') {
			printf("rabu ceria\n");
		}
	} else if (n==4) {
		if (paket=='a') {
			printf("kamis kelabu\n");
		} else if (paket=='b') {
			printf("kamis ceria\n");
		}
	} else if (n==5) {
		if (paket=='a') {
			printf("jumat kelabu\n");
		} else if (paket=='b') {
			printf("jumat ceria\n");
		}
	} else if (n==6) {
		if (paket=='a') {
			printf("sabtu kelabu\n");
		} else if (paket=='b') {
			printf("sabtu ceria\n");
		}
	} else if (n==7) {
		if (paket=='a') {
			printf("minggu kelabu\n");
		} else if (paket=='b') {
			printf("minggu ceria\n");
		}
	}

	//output baris kedua
	if (kembalian>=0) {
		printf("%d\n",kembalian);
	} else {
		printf("tidak valid\n");
	}
	return 0;
}

/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 2,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */

//========================================================================================


/*
Piyu dan teman-temannya adalah orang yang gemar dan suka bepergian.
Namun piyu dan teman-temannya sering kali kerepotan untuk menghitung
berapa harga parkir untuk setiap tempat yang mereka kunjungi.
Ada beberapa pilihan paket sesuai kendaraan yg piyu pakai, dengan keterangan paket dan hari:

Keterangan Paket:
a. kendaraan umum = paket kelabu ---> Biaya parkir, 2 jam pertama Rp.1500 dan Rp.500 untuk perjam selanjutnya
b. kendaraan pribadi = paket ceria ---> Biaya parkir, 1 jam pertama Rp.3000 dan Rp.1000 untuk perjam selanjutnya 

Keterangan Hari:
1. senin
2. selasa
3. rabu
4. kamis
5. jumat
6. sabtu
7. minggu

Khusus untuk akhir pekan (sabtu/minggu) total biaya parkir akan ditambah pajak sebesar 25 persen.
Bantulah piyu untuk membuat program penghitung biaya parkir dengan:

Format Masukan:
n, 1<= n <=7, hari piyu parkir
paket yg piyu pilih
p, 0<= p <= 24, jam masuk kendaraan piyu
q, 0<= q <= 24, jam keluar kendaraan piyu
r, 0< r <1000000 uang yg piyu bayar

Format keluaran:
nama hari dan paket
uang kembalian atau tidak valid, jika biaya parkir > uang piyu

NB: gunakan scanf spasi persen c untuk inputan char
Contoh Masukan

1
b
10
12
10000


Contoh Keluaran

senin ceria
6000

Contoh Masukan 2

6
a
22
4
6250


Contoh Keluaran 2

sabtu kelabu
0

       
Contoh Masukan 3

7
b
10
16
8000


Contoh Keluaran 3

minggu ceria
tidak valid

        
*/