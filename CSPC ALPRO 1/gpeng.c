#include <stdio.h>

int main () {
	int gehu=100;
	int bala=150;
	int pisang=75;
	int cireng=175;

	int n,m,k,h,r;
	int lgehu,lbala,lpisang,lcireng,total;

	scanf("%d", &n);
	lgehu=n * gehu;
	scanf("%d", &m);
	lbala=m * bala;
	scanf("%d", &k);
	lpisang=k * pisang;
	scanf("%d", &h);
	lcireng=h * cireng;
	scanf("%d", &r);

	total = (lgehu + lbala + lpisang + lcireng) * r;

	if (((n>=0) && (n<=100)) && ((m>=0) && (m<=100)) && ((k>=0) && (k<=100)) && ((h>=0) && (h<=100)) && ((r>=0) && (r<=100)))
	printf ("%d\n", total);

	return 0;
}

/*Pak Engkus berjualan gorengan di kantin Ilmu Komputer UPI. Ada beberapa jenis gorengan yaitu gehu, bala-bala, pisang goreng, dan cireng. Setiap gorengan dijual dengan harga Rp. 500 rupiah.


sebuah gehu menghasilkan laba Rp. 100
sebuah bala-bala menghasilkan laba Rp. 150
sebuah pisang goreng menghasilkan laba Rp. 75
sebuah cireng menghasilkan laba 175

setiap hari Pak Engkus berhasil menjual

n buah gehu, m buah bala-bala, k buah pisang goreng, h buah cireng
berapa keuntungan Pak Engkus setelah r hari

Misal 

n = 2
m = 2
k = 2
h = 2
r = 2

maka keuntungan Pak Engkus
2000

Format Masukan:


n, 0 <= n <= 100
m, 0 <= n <= 100
k, 0 <= n <= 100
h, 0 <= n <= 100
r, 0 <= n <= 1000

Format Keluaran:


laba gorengan Pak Engkus

Contoh Masukan

2
2
2
2
2


Contoh Keluaran

2000

*/