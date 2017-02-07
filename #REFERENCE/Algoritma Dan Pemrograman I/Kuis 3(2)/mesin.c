#include "faisal.h"
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
STRKOE, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
int proses(int n, char array[n][100]){

	int i,j; //indeks
	int vokal1=0; //ini semua adalah penghitung vokal maupun konso :DD
	int vokal2=0;
	int konso1=0;
	int konso2=0;
	int status=0; //ini status untuk dilempar nanti ke main
	for(i=0;i<strlen(array[0]);i++){ //for untuk mengecek string awal saja :DD
		if(array[0][i]=='a' || array[0][i]=='i' || array[0][i]=='u' || array[0][i]=='e' || array[0][i]=='o'){
			vokal1++;  // jika vokal makaaa plus plus
		}else{
			konso1++; // jika konso makaaa plus plus
		}
	}
	for(i=0;i<strlen(array[n-1]);i++){  //for untuk mengecek string akhir saja :DD
		if(array[n-1][i]=='a' || array[n-1][i]=='i' || array[n-1][i]=='u' || array[n-1][i]=='e' || array[n-1][i]=='o'){
			vokal2++; //jika vokal makaa plus plus
		}else{
			konso2++; //jika konso makaa plus plus
		}
	}
	if(vokal1==vokal2){ //ini langsung di cek ajah supaya ga ngelempar 2 variabel ke main... ehehe
		if(konso1==konso2){ 
			status=1; //jika sama maka! status true;
		}
	}
	
	return status; //kembalikan status ke main

}

void hasil(int status,int n,char array[n][100]){ // void untuk print hasil
	int i,j; //ini indeks for
	char vokal[100]; //ini untuk menampung vokal dan konso :DD
	char konso[100];
	int counter1=0; //ini counter untuk mengisi vokal
	int counter2=0; //ini counter untuk mengisi konso
	if(status==1){ //langsung saja ketika status di fungsi ya. maka lakukan dibawah ini..
		for(i=0;i<strlen(array[0]);i++){ //ini mengecek isi konso/vokal kata pertama
			if(array[0][i]=='a' || array[0][i]=='i' || array[0][i]=='u' || array[0][i]=='e' || array[0][i]=='o'){ 
				vokal[counter1]=array[0][i]; //disini mengecek apakah vokal maka tampung di variabel vokal;
				vokal[counter1+1]='\0'; //meng"NULL"kan isi array didepannya agar sesuai dengan strlen katanya.
				counter1++;
			}else{
				konso[counter2]=array[0][i]; //disini mengecek apakah vokal maka tampung di variabel konso;
				konso[counter2+1]='\0'; //NULL didepannya.
				counter2++;
			}
		}
		for(i=0;i<strlen(array[n-1]);i++){ //ini mengecek isi konso/vokal kata terakhir
			if(array[n-1][i]=='a' || array[n-1][i]=='i' || array[n-1][i]=='u' || array[n-1][i]=='e' || array[n-1][i]=='o'){
				vokal[counter1]=array[n-1][i]; //jika vokal maka tampung
				vokal[counter1+1]='\0';
				counter1++;
			}else{
				konso[counter2]=array[n-1][i]; //jika konso maka tampung
				konso[counter2+1]='\0';
				counter2++;
			}
		}
		printf("%s\n",vokal); //di print aja langsung supaya tinggal dipanggil di main :D
		printf("%s\n",konso);		
	}else{
		//nah ini jika tidak samaa. jadi kalau status tidak 1 maka langsung aja kesini gausah kerjakan yg atas :D
		printf("tidak sama\n"); 
	}
	
}