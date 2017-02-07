#include <stdio.h>

int main () {
	int i,n,m,p,r;

	scanf("%d %d %d %d",&n,&m,&p,&r);
	for (i=1;i<=r;i++) {
		n=n + (m*(n/2));
	}
	if (r>2) {
		r=r-2;
		for (i=1;i<=r;i++) {
			n=n-p;
		}
	}
	printf("%d\n",n);
	return 0;
}

/*Kang Cecep memiliki n domba garut, setiap dua ekor domba menghasilkan m ekor anak dalam setahun. Setiap tahun Kang Cecep menjual p ekor domba dan baru bisa dijual setelah tahun ke 2 (mulai tahun ke- 3).


Tampilkan jumlah domba Kang Cecep pada tahun ke r

misalkan 

n = 2
m = 2
p = 2
r = 2

maka akan menampilkan
8

Format Masukan:


n, 2 < n <= 100, jumlah domba awal, n bilangan genap
m, 0 < m <= 6, m bilangan genap
p, 0 < p <= 6, p bilangan genap
r, 0 < r <= 50

Format Keluaran:


jumlah domba

Contoh Masukan

2
2
2
2


Contoh Keluaran

8

*/