#include <stdio.h>
#include <string.h>

int main () {
	char str[100];
	int i,j=0,vokal=0,konsonan=0;
	int kali;

	scanf("%s", &str);

	for (i = 0 ; i < strlen(str) ; i++) {
		if ((str[i]=='a')||(str[i]=='i')||(str[i]=='u')
			||(str[i]=='e')||(str[i]=='o')) {
			vokal++;
		} else {
			konsonan++;
		}
	}

	kali = (konsonan * vokal) % 2 ;
	// printf("%d\n", kali);
	
	if (kali == 1) {
		while(j<strlen(str)) {
			for (i = 0 ; i < 3 ; i++) {
				if (j<strlen(str)) {
					printf("%c",str[j]);
					j++;	
				}
			}
			printf("\n");
		}
	} else if (kali==0){
		while(j<strlen(str)) {
			for (i = 0 ; i < 4 ; i++) {
				if (j<strlen(str)) {
					printf("%c",str[j]);
					j++;	
				}
			}
			printf("\n");
		}
	}
	return 0;
}

/*
Diberikan sebuah string. Hitung jumlah huruf vokal dikali jumlah huruf konsonan. Jika hasil kali itu adalah genap maka tampilkan pola seperti contoh dan jika hasil kalinya adalah ganjil maka tampilkan pola seperti contoh.

Siapkan jumlah karakter dalam string sebanyak 100 huruf.

misalkan string => akuadalahanakgembalaselaluriang

15 vokal

16 konsonan

maka hasil 15 x 16 adalah genap

jika genap maka tampilannya (per 4 huruf)

akua
dala
hana
kgem
bala
sela
luri
ang
misalkan string => akuadalahanagembalaselaluriang

15 vokal

15 konsonan

maka hasil 15 x 15 adalah ganjil

jika ganjil maka tampilannya (per 3 huruf)

aku
ada
lah
ana
gem
bal
ase
lal
uri
ang
Format Masukan:

String masukan

Format Keluaran:

pola keluaran string

Contoh Masukan

akuadalahanakgembalaselaluriang


Contoh Keluaran

akua
dala
hana
kgem
bala
sela
luri
ang
Contoh Masukan 2

akuadalahanagembalaselaluriang


Contoh Keluaran 2

aku
ada
lah
ana
gem
bal
ase
lal
uri
ang
 */
