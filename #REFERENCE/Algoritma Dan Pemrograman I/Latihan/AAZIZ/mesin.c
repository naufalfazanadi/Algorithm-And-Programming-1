#include "header.h"//memamnggil library yang ada pada header.h
/*
=====================================================================================================================================
				0  0 0 000 000 000 	00000 000 000 000	000  000 000 000 0   0	000 0   000 000   000	00
			   000 0 0 0 0 0 0 0	0 0 0 0 0 0   0 0	0  0 0   0 0 0 0 00  0	0 0 0   0 0 0 0   0 0     0
				0  0 0 000 000 000	0 0 0 000 000 000	0  0 000 000 000 0 0 0 	000 0   000 000   0 0     0
				0  0 0   0 0 0   0	0 0 0 0 0   0 0 0	0  0 0   0   0 0 0  00 	0 0 0   0   0  0  0 0     0
				00 000 000 0 0 000	0 0 0 0 0 000 0 0	000  000 0   0 0 0   0 	0 0 000 0   0   0 000    000
	
	Saya Abdul Aziz Priatna(1307123) tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas Masa Depan Alpro 1, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
=====================================================================================================================================
*/
int main(){
	
	scanf("%d",&n);//banyaknya inputan
	
	kode alay[n];
	
	//perulangan inputan kata sebanyak n
	for(i=0;i<n;i++){
		scanf("%s",&alay[i].karakter);//inputan kata sebanyak indeks
	}
	scanf("%d",&tebal);//untuk menebalkan pola
		
	//pengecekan kata bila ada tanda +/-/x
	for(i=0;i<n;i++){
		//dicek tiap array satu2
		for(j=0;j<strlen(alay[i].karakter);j++){
			if(alay[i].karakter[j]=='+'){//jika ada tanda +
				hasil=tambah(n,alay);//maka panggil fungsi tambah
			}else if(alay[i].karakter[j]=='x'){//atau jika ada tanda x
				hasil=kali(n,alay);//maka panggil fungsi kali
			}else if(alay[i].karakter[j]=='-'){//atau jika ada tanda -
				hasil=kurang(n,alay);//maka panggil fungsi kurang
			}
		}
	}
	
	kode digit;
	digit=ubahhasilkestring(hasil);
	
	//lalu hasil yang dijadikan string angka digunakan untuk memamnggil prosedur yang akan menjadi pola
	hasilpola(digit,hasil,tebal);//pemanggilan prosedur pola
	
return 0;
}
/*
=====================================================================================================================================
													  *****    *****
													 *******  *******
													******************
													******************
													******************
													******************
													 ****************
													  **************
													   ************
														**********
														 ********
														  ******
														   ****
															**
															
												Terima kasih yah bu :)
							semoga ilmu yang diberikan bisa bermanfaat untuk masa depan yang lebih baik lagi
														amien....O:)
														
=====================================================================================================================================
*/