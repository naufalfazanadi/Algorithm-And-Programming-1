#include "faisal.h"
//UASA114 !!!
/*Saya Faisal Syaiful  tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
UASA114, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/
int main(){ 
	//DEKLARASI
	int n,i;
	//-------------------------------------------------------------------
	scanf("%d",&n); //input
	char str[n][100];
	for(i=0;i<n;i++){ //input string sebanyak n
		scanf("%s",&str[i]);
	}
	//--------------------------------------------------------------------
	aduh jawaban; // deklar variabel jawaban untuk menampung fungsi bungkusan
	jawaban = vokel(n,str); // kopi fungsi vokel ke jawaban
	hasil(n,str,jawaban); //memanggil prosedur

	return 0;
}
/* alhamdulillah mata kuliah alpro1 sudah beres bu :D terimakasih bimbingannya,
semoga kedepan sama ibu terus soalnya asik dan menantang :D
terimakasih juga atas nilai yang ibu berikan :D 
wassalamualaikum */