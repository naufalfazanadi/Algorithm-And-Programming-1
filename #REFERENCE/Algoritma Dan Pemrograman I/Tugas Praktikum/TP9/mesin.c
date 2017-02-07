#include "faisal.h"  //panggil library faisal.h

int polin(int banyak, char str[100][100]){ //fungsi melempar jumlah palindrom :DD
	int i,j; //indeks dan teman teman
	int counter1; //counter pembantu :D
	int counter2;
	int polindrom=0; //declar polindrom=0;
	int yes=0;  //yes itu apa ya~_~
	char str2[100][100]; //duplikat string untuk pengkopian
	for(i=0;i<banyak;i++){ //diduplikat dulu semua isi str ke str2 :DD
		strcpy(str2[i],str[i]);
	}
	for(i=0;i<banyak;i++){
		yes=0; //meng0kan seluruh perangkat counter
		counter1=0;
		counter2=strlen(str2[i])-1;
		if(str2[i][counter1] == str2[i][counter2]){ //jika huruf pertama sama dengan huruf terakhir berarti itu tanda2 udah mau polindrom
			for(j=0;j<strlen(str2[i])/2;j++){
				if(str2[i][counter1] == str2[i][counter2]){
					yes++; //nah di cek lg deh semua sampe tengah bener ga polindrom :D
				}
				counter1++; //counter huruf awal terus bertambah
				counter2--; //counter huruf akhir terus berkurang
			}
			if(yes==strlen(str2[i])/2){
				polindrom++; //jika ya maka!!! polindrom
				
			}
		}
	}
	
	return polindrom; //lempar jmlh polindrom
}
void hasil(int banyak,char str[100][100]){
	int i,j; //indekss
	int help;
	int counter1; //perangkat juga
	int counter2;
	int counter3;
	int yes=0;
	char str2[100][100];
	for(i=0;i<banyak;i++){ //duplikat lagi lagi lagi :D
		strcpy(str2[i],str[i]);
	}
	// codingan ini sama seperti diatas karena saya ga misahin polindrom itu ada di i keberapa:DD
	// jadi copas aja hehe jadinya ada fungsi prosedur kan :DDD
	for(i=0;i<banyak;i++){
		yes=0; //disini meng 0 kan counter
		counter1=0;
		counter2=strlen(str2[i])-1;
		if(str2[i][counter1] == str2[i][counter2]){ //sama seperti yang di atas :DD 
			for(j=0;j<strlen(str2[i])/2;j++){
				if(str2[i][counter1] == str2[i][counter2]){
					yes++; //yes!!! tanda2 polindrom
				}
				counter1++; //plus plus
				counter2--; //minus minus
 			}
			if(yes==strlen(str2[i])/2){ //disini perbedaannya
				strcpy(str2[i-1],str[i+1]); //dituker stringnya atas sama bawah
				strcpy(str2[i+1],str[i-1]);// bawah sama atas :'D
				strcpy(str2[i],"\0"); //polinya di NULL KAN :D
				
			}
		}
	}
//---------------------------------------------------------------------------------------------------------------------------------------------------
//ini codingan pola
	for(i=0;i<banyak-1;i++){ //for ya seperti biasa 
		if(str2[i][0]!='\0'){ //ini pake if karena supaya agar polindromnya ga ke print null nya 
			if(i>0){ //ini supaya ndak ado spasi di awale
				printf(" ");
			}
			printf("%s",str2[i]);
		}	
	}
	printf("\n");

}