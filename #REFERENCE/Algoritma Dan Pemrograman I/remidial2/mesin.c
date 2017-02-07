#include "header.h"
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
remidial2, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
void prosedur(int n, int angka[n],int status){
	int i; //deklarasi
	int hasil=0;
	int logic;
	if(status%2==0){ //status ganjil/tidak ganjil
		logic=0;
	}else{
		logic=1;
	}
	for(i=0;i<n;i++){
		hasil=hasil+angka[i];
	}
	if(hasil%2==0){ //jika genap 
		if(logic==0){ //jika status juga maka
			printf("valid\n");
		}else{
			printf("tidak valid\n");
		}
	}else{ //jika sebaliknya
		if(logic==1){
			printf("valid\n");
		}else{
			printf("tidak valid\n");
		}
	}


}