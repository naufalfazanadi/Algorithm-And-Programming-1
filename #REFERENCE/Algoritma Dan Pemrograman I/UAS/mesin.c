#include "faisal.h"

aduh vokel(int n,char str[n][100]){
	//fungsi utk menghitung vokal setiap string
	aduh kembali; //membuat variabel untuk dilempar
	int i,j; //deklar indeks
	//-----------------------------------------------------------------------------
	//menghitung vokal
	for(i=0;i<n;i++){ 
		kembali.vokal[i]=0; //meng-0-kan;
		for(j=0;j<strlen(str[i]);j++){ 
			if(str[i][j]=='a' || str[i][j]=='i' || str[i][j]=='u' || str[i][j]=='e' || str[i][j]=='o'){
				kembali.vokal[i]++; //jika huruf adalah vokal maka vokal ++;
			} 
		}
	}
	//----------------------------------------------------------------------------
	return kembali; //mengembalikan bungkusan
}

void hasil(int n,char str[n][100],aduh jawaban){
	//prosedur print hasil
	int i,j,k;
	//spasi
	int spasi=0;
	for(i=0;i<n;i++){ //for i sebanyak jumlah string
		//---------------------------------------
		//bagian 1
		spasi=0;
		for(j=0;j<jawaban.vokal[i];j++){
			for(k=0;k<spasi;k++){
				printf(" "); //printf spasi sebanyk var spasi :DDD
			}
			printf("%s",str[i]); //printf string
			spasi=spasi+strlen(str[i]); //spasi bertambah sejumlah strlen str;
			printf("\n");
		}
		//-------------------------------------------
		//bagian 2
		i++;
		spasi=0; //meng-0-kan spasi
		
		for(j=0;j<jawaban.vokal[i]-1;j++){
			spasi=spasi+strlen(str[i]); //spasi adalah senbakyak spasi*vokal-1;
		}
		for(j=0;j<jawaban.vokal[i];j++){
			for(k=0;k<spasi;k++){ 
				printf(" "); //print spasi 
			}
			printf("%s",str[i]); //print string
			spasi=spasi-strlen(str[i]); //spasi terus berkurang
			printf("\n");
		}
		//---------------------------------------------
		
	}
	
}