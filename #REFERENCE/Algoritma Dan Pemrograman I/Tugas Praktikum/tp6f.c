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
	
	int i,j; //iterasi
	char tipe; //tipe yang dicari
	int terpedas=0,terpedas2=0; //kotak terpedas
	int termahal=0,termahal2=0; //kotak termahal
	kriteria nasgor[100]; //deklarasi nama bungnkusan
	j = 0;
	i = 0; //pengisian iterasi
	scanf("%d",&nasgor[i].level);
	while(nasgor[i].level!=0){ //proses input level dan harga nasi goreng
		scanf("%d",&nasgor[i].harga); //input level nasi goreng
		scanf("%d",&nasgor[i+1].level);
	i++;
	j++;
	}
	i=0;
	scanf(" %c",&tipe); //input tipe yang di cari A=terpedas B=termahal
	while(i<j){
			if(tipe == 'A'){
				if(nasgor[i].level > terpedas){
					
					terpedas = nasgor[i].level; //seleksi nasi 	goreng terpedas
					terpedas2 = nasgor[i].harga; //jika ini nasi goreng terpedas maka harga akan mengikuti
				}
			}
			if(tipe == 'B'){
				if(nasgor[i].harga > termahal){
					termahal2 = nasgor[i].harga;//seleksi nasi goreng termahal
					termahal = nasgor[i].level;//jika ini nasi goreng termahal, maka level akan mengikuti			
				}
			}
		i++;
	}
	

	if(tipe == 'A'){//apabila tipe A maka dilakukan output berikut
		printf("%d\n",terpedas);//output level nasi goreng terpedas
		printf("%d\n",terpedas2); //output harga nasi goreng terpedas	
	}else if(tipe == 'B'){//apabila tipe B maka dilakukan output berikut
		printf("%d\n",termahal);//output level nasi goreng termahal
		printf("%d\n",termahal2);//output harga nasi goreng termahal
	}else{
		printf("tidak ada yang dicari\n"); //apabila tidak ada dalam pilihan
	}
	
return 0;
}
