#include "header.h"

aduh vokel(int m,char string[m][100]){
	//--------------------------------------------------------------------------------------------------------------------------------------
	//deklarasi
	aduh hasil;
	int i,j;
	hasil.max=0; //meng-0-kan max;
	//--------------------------------------------------------------------------------------------------------------------------------------
	//proses
	for(i=0;i<m;i++){
		hasil.jumlah[i]=0;  //0 kan jumlah, agar bisa di proses SUM.
		for(j=0;j<strlen(string[i]);j++){
			if(string[i][j]>='0' && string[i][j]<='9'){ 			// jika ada angka tipe char maka
				hasil.jumlah[i]=hasil.jumlah[i]+(string[i][j]-48); 	// lakukan operasi sum , tetapi di -48 kan dulu. karena
				//48 adalah angka decimal dari CHAR '0', jadi ketika kita bertemu angka0 dalam tipe char, dikurangi 48 maka menjadi "0 dalam tipe int,dst"
			}
		}
	//--------------------------------------------------------------------------------------------------------------------------------------
		if(hasil.jumlah[i]>hasil.max){ 								//mencari nilai max
			hasil.max=hasil.jumlah[i]; 								
		}
	}
	return hasil; //lempar bhasil
}
void hasil(int n,int angka[n],int m,char string[m][100],aduh jawaban){
	//--------------------------------------------------------------------------------------------------------------------------------------
	int i,j;
	int status=0;
	//--------------------------------------------------------------------------------------------------------------------------------------
	//proses
	for(i=0;i<m;i++){ 										//for sebanyak string (m)
		j=0;
		while(status!=1 && j<n){							//while sebanyak angka (n)
			if(jawaban.jumlah[i]==angka[j]){				//jika jawaban(hasil operasi SUM di fungsi) sama dengan angka
	//--------------------------------------------------------------------------------------------------------------------------------------
				if(jawaban.jumlah[i]==jawaban.max){			//jika jawaban tersebut merupakan huruf max juga 
															//tadi WA disini gara2 gabaca soal:((
															//bagian VITAL
	//--------------------------------------------------------------------------------------------------------------------------------------
					printf("%s %d\n",string[i],angka[j]);	//printf angka tersebut bersama dengan angkanya
					status=1; 								//berhentikan status;
				}
			}			
			j++;
		}
	}
	//--------------------------------------------------------------------------------------------------------------------------------------
	if(status==0){ 											//jika status nya tidak berubah, berarti tidak ada angka yg sama atau angka trsbt bukan MAX
		printf("tidak valid\n");							//printf tidak valid 
	}
}