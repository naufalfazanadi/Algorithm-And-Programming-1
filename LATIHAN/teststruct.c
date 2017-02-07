#include <stdio.h>

typedef struct {
	int nim;
	int umur;
	char jenis;
}siswa;

typedef struct {
	char paket;
	int urut;
}menus;

int main () {
	siswa kesatu;
	siswa kedua;
	menus first;
	menus second;
	
	scanf("%d %d %c", &kesatu.nim, &kesatu.umur, &kesatu.jenis);
	scanf(" %c %d", &first.paket, &first.urut);
	scanf("%d %d %c", &kedua.nim, &kedua.umur, &kedua.jenis);
	scanf(" %c %d", &second.paket, &second.urut);

	switch(first.paket) {
		case 'a' : {
			switch(first.urut) {
				case 1 : printf("%d-Lotek-%c\n",kesatu.nim,kesatu.jenis);break;
				case 2 : printf("%d-Steak-%c\n",kesatu.nim,kesatu.jenis);break;
				default : printf("%d-Tidak ada paket-%c\n",kesatu.nim,kesatu.jenis);break;
			}
		}break;
		case 'b' : {
			switch(first.urut) {
				case 1 : printf("%d-gehu-%c\n",kedua.nim,kedua.jenis);break;
				case 2 : printf("%d-bala bala-%c\n",kedua.nim,kedua.jenis);break;
				case 3 : printf("%d-comro-%c\n",kedua.nim,kedua.jenis);break;
				case 4 : printf("%d-beng-beng-%c\n",kedua.nim,kedua.jenis);break;
				default : printf("%d-tidak ada paket-%c\n",kedua.nim,kedua.jenis);break;
			}
		}
	}

	switch (second.paket) {
		case 'a' : {
			switch(second.urut) {
				case 1 : printf("%d-Lotek-%c\n",kesatu.nim,kesatu.jenis);break;
				case 2 : printf("%d-Steak-%c\n",kesatu.nim,kesatu.jenis);break;
				default : printf("%d-Tidak ada paket-%c\n",kesatu.nim,kesatu.jenis);break;
			}
		}break;
		
		case 'b' : {
			switch(second.urut) {
				case 1 : printf("%d-gehu-%c\n",kedua.nim,kedua.jenis);break;
				case 2 : printf("%d-bala bala-%c\n",kedua.nim,kedua.jenis);break;
				case 3 : printf("%d-comro-%c\n",kedua.nim,kedua.jenis);break;
				case 4 : printf("%d-beng-beng-%c\n",kedua.nim,kedua.jenis);break;
				default : printf("%d-tidak ada paket-%c\n",kedua.nim,kedua.jenis);break;
			}
		}
	}
		

	return 0;
}

/**
 * input : 2 orang 
 * (NIM)(umur)(jenis)
 * nim - lotek - l
 *
 * gehu
 * bala
 * comro
 * beng beng
 * 
 * (menu)
 */

