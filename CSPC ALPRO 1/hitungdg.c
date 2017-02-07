#include <stdio.h>

int main () {
	int dom[3],men[3],i,hasil,jam,menit;

	for (i=1;i<=3;i++) {
		scanf("%d", &dom[i]);
	}
	for (i=1;i<=3;i++) {
		scanf("%d", &men[i]);
	}

	hasil = (dom[1]*men[1])+(dom[2]*men[2])+(dom[3]*men[3]);
	menit = hasil%60;
	jam = hasil/60;

	printf("%.2d:%.2d:00\n",jam,menit);
	return 0;
}

/*
Miss Ola tidak bisa tidur karena memikirkan domba garut miliknya, Miss Ola menghitung domba garut miliknya untuk membantunya mengantuk. Miss Ola membayangkan memiliki n ekor domba garut besar jantan, m ekor domba garut betina, dan p ekor domba garut kecil.

Setiap jenis domba garut memiliki waktu untuk melompat masuk ke kandangnya sebesar a menit untuk domba besar jantan, b menit untuk domba besar betina, dan c menit untuk domba kecil. Hitunglah berapa lama Miss Ola bisa tertidur setelah menghitung seluruh dombanya berhasil masuk ke kandang.

Misal:
n = 3, m = 2, p = 1
a = 30, b = 20, c = 10
maka jika dijumlahkan waktunya menjadi:
(3 * 30) + (2 * 20) + (1 * 10) = 90 + 40 + 10 = 140 menit
maka akan menghasilkan keluaran 02:20:00

Format Masukan:

n, 0 <= n <= 1000
m, 0 <= m <= 1000
p, 0 <= p <= 1000
a, 0 <= a <= 1000
b, 0 <= b <= 1000
c, 0 <= c <= 1000

Format Keluaran:

waktu semua domba bisa masuk ke kandang dengan format 2 dijit jam:2 dijit menit:2 dijit detik 

Contoh Masukan

3
2
1
30
20
10


Contoh Keluaran

02:20:00

*/