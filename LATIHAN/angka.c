#include <stdio.h>
 
int main () {
	float inputan; //variabel penginputan bilangan ribuan
	int satuan, puluhan, ratusan, ribuan;
	
	printf("Masukan angka yang diinginkan : ");
		scanf("%f", &inputan);
	ribuan = inputan / 1000;
	ratusan = inputan / 100 - ribuan * 10;
	puluhan = inputan / 10 - (ribuan * 100 + ratusan * 10);
	satuan = inputan - (ribuan * 1000 + ratusan * 100 + puluhan * 10);
	printf ("ribuan %d\n",ribuan);
	printf ("ratusan %d\n",ratusan);
	printf ("puluhan %d\n",puluhan);
	printf ("satuan %d\n",satuan);
	
	return 0;
}

//soal latihan pdf...