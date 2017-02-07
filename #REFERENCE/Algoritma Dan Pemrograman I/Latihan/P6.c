#include <stdio.h>

/*Saya Fidela Zhafirah tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
TP6, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/

typedef struct{ //bungkusan array level dan harga nasi goreng
	int level;
	int harga;
}kriteria;

int main(){
	
	int i; //iterasi
	char tipe; //tipe yang dicari
	int terpedas=0; //kotak terpedas
	int termahal=0; //kotak termahal
	kriteria nasgor[i]; //deklarasi nama bungnkusan
	int stop=0; //perumpamaan stop
	
	i = 0; //pengisian iterasi
	while(stop == 0){ //proses input level dan harga nasi goreng
		scanf("%d",&nasgor[i].level); //input level nasi goreng
			if(nasgor[i].level == 0){ //apabila diinput angka 0 pada level maka stop
				stop=1; //perumpamaan stop
			}else{ //apabila blm ada nol maka trs melakukan input harga
				scanf("%d",&nasgor[i].harga);
			}
		i++; //iterasi pengulangan
	}
	
	scanf(" %c",&tipe); //input tipe yang di cari A=terpedas B=termahal
	
	if(tipe == 'A'){//apabila tipe A maka dilakukan proses berikut
		if(nasgor[i].level > terpedas){
			terpedas = nasgor[i].level; //seleksi nasi goreng terpedas
			printf("%d\n",nasgor[i].level);//output level nasi goreng terpedas
			printf("%d\n",nasgor[i].harga); //output harga nasi goreng terpedas
		}
	}else if(tipe == 'B'){//apabila tipe B maka dilakukan proses berikut
		if(nasgor[i].harga > termahal){
			termahal = nasgor[i].harga;//seleksi nasi goreng termahal
			printf("%d\n",nasgor[i].level);//output level nasi goreng termahal
			printf("%d\n",nasgor[i].harga);//output harga nasi goreng termahal
		}
	}else{
		printf("tidak ada yang dicari\n"); //apabila tidak ada dalam pilihan
	}
	
return 0;
}
