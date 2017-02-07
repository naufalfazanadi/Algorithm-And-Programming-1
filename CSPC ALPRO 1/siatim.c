#include <stdio.h>
#include <string.h>

int main () {
	char sub[6];
	char deret[100];
	int i,j,x=0,n=0;

	// input
	scanf("%s",&sub);
	scanf("%s",&deret);

	//for untuk semua char
	for (i = 0;i < strlen(deret);i++) {
		// untuk masuk ke pengecekan
		if (deret[i]==sub[0]) {
			x++;
			// for untuk pengecekan
			for (j=i+1;j<strlen(sub)+i;j++) {
				if (deret[j]==sub[j-i]) {
					x++;
				} else if (deret[j]!=sub[j-i]) {
					x=0;
				}
			}
		}
		//boolean
		if (x==strlen(sub)) {
			n++;
			x=0;
		}
	}
	
	printf("%d\n",n);

	return 0;
}

/*Si Atim seekor orang utan di Kebun Binatang Bandung sedang belajar menghitung jumlah bagian dari sebuah deret huruf. Misalkan Deret huruf si Atim adalah sebagai berikut:


kebunbinatangbandungtamansari

sub yang akan dihitung misalnya an

maka akan menampilkan jumlah an pada deret huruf:

3 

karena jumlah an pada deret huruf ada 3

Format Masukan:


sub, terdiri dari 2 - 5 huruf
deret huruf

Format Keluaran:


jumlah sub

Contoh Masukan

an
kebunbinatangbandungtamansari


Contoh Keluaran

3

*/