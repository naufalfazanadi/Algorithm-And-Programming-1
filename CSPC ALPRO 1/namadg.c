#include <stdio.h>
#include <string.h>

int main () {
	char konsonan[11]="sndmbtngks\0";
	char vokal[7]="eioaaa\0";

	int n ,m;
	int i ,j;

	scanf("%d", &n);
	scanf("%d", &m);

	char nama[n+1][5];
	int huruf[5];
	
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < 4 ; j++) {
			if (j % 2 == 0) {
				huruf[j] = (i+1) * (j+1) * m;
				nama[i][j] = konsonan[((huruf[j]-1)%10)];
				huruf[j] = 0;	
			} else {
				huruf[j] = (i+1) * (j+1) * m;
				nama[i][j] = vokal[((huruf[j]-1)%6)];
				huruf[j] = 0;
			}
		}

	}

	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < 4 ; j++) {
			printf("%c",nama[i][j]);		
		}
		printf("\n");
	}
	return 0;
}

/*
Si Cepot ingin membuat nama untuk n domba garut kesayangannya. Si Cepot sangat menyukai seni domba tangkas maka dari itu si Cepot ingin menamai n domba tangkasnya dengan melakukan acak huruf yang ada pada kalimat senidombatangkas. Untuk setiap nama domba harus terdiri dari 4 huruf. Susunan huruf harus konsonan-vokal-konsonan-vokal. Cara mengacaknya adalah dengan cara memisahkan huruf konsonan dan vokal.

konsonan: sndmbtngks
vokal: eioaaa

pemilihan huruf menggunakan rumus domba ke- * huruf ke- * m

m adalah bilangan pengali

misal jika n = 1 dan m = 3

pilih huruf konsonan dengan posisi pertama dengan rumus 1 * 1 * 3 = 3 maka cari huruf ke 3 dari huruf konsonan dengan memutar urutan kembali ke depan jika huruf konsonan habis. Huruf konsonan ke 3 adalah d

untuk huruf vokal dengan posisi kedua dengan rumus 1 * 2 * 3 = 6 maka cari huruf ke 6 dari huruf vokal dengan memutar urutan kembali ke depan jika huruf vokal habis. Huruf vokal ke 6 adalah a

pilih huruf konsonan dengan posisi ketiga dengan rumus 1 * 3 * 3 = 9 maka cari huruf ke 9 dari huruf konsonan dengan memutar urutan kembali ke depan jika huruf konsonan habis. Huruf konsonan ke 9 adalah k

untuk huruf vokal dengan posisi keempat dengan rumus 1 * 4 * 3 = 12 maka cari huruf ke 12 dari huruf vokal dengan memutar urutan kembali ke depan jika huruf vokal habis. Huruf vokal ke 12 adalah a

maka nama domba yang berhasil dibuat adalah daka

Format Masukan:

n jumlah domba, 0 <= n <= 100
m bilangan pengali, 0 <= m <= 10000
Format Keluaran:

nama domba garut sebanyak n baris
Contoh Masukan

1
3


Contoh Keluaran

daka

 */
