#include <stdio.h>

int main () {
	//deklarasi var inputan angka ribuan
	int inputan;
	//deklarasi var untuk setiap jenis angka (ribuan, ratusan, dst)
	int satuan, puluhan, ratusan, ribuan;
	//deklarasi var untuk waktu
	int detik, jam, menit;
	//deklarasi var untuk membalikan inputan
	int balik;

	//meminta inputan untuk angka
	scanf("%d", &inputan);

	//perolehan untuk setiap jenis angka
	ribuan = inputan / 1000;
	ratusan = (inputan / 100) % 10;
	puluhan = (inputan / 10) % 10;
	satuan = inputan % 10;
	//perolehan pembalikan hasil inputan
	balik = (satuan * 1000) + (puluhan * 100) + (ratusan * 10) + ribuan;
	//perolehan hasil konversi
	jam = balik / 3600;
	menit = balik / 60;
	detik = balik % 60;

	//output
	if ((inputan >= 1000) && (inputan <= 9999)) 

{	printf("%d\n",balik);
	//if untuk mencegah terjadinya >= 60 menit saat jam >=1
	if (menit >= 60) {menit = menit - (jam * 60);}

	printf("%.2d:%.2d:%.2d\n",jam,menit,detik);
}
	return 0;

}

/* Saya Muhammad Naufal Fazanadi tidak melakukan kecurangan seperti yang telah dispesifikasikan
pada mata kuliah Algoritma dan Pemograman 1 dalam mengerjakan Tugas Praktikum 1,
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, 
dan saya bersedia menerima hukumanNya. Aamiin. */

//===================================================================================================

/*Buatlah program:
-Untuk membalikan angka bilangan integer (n) / masukan.
-Konversi bilangan integer (n) yang sudah di balikan ke jam.
*Untuk jam gunakan .2d
*Jangan menggunakan yang aneh-aneh seperti string dan lain-lain. Cukup pake operasi aritmatika

Format Masukan

1000<=n<=9999
Format Keluaran

angka yang di balik
jam:menit:detik dari hasil membalikan bilangan (n)

Contoh Masukan

1992


Contoh Keluaran

2991
00:49:51

Contoh Masukan 2

1000


Contoh Keluaran 2

1
00:00:01

       


*/