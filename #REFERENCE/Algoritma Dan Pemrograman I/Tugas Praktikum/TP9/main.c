#include "faisal.h"
/*Saya Faisal Syaiful  tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
tp9, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/
int main(){
	//deklarasi perangkat program
	char str[100][100];
	int i;
	int banyak=0; //counter jumlah
	i=0;
	while(strcmp(str[i-1],"selesai")!=0){ //ketika input belum selesai
		scanf("%s",&str[i]); //
		i++;
		banyak++;
	}
	int polindrom=polin(banyak,str); //memanggil fungsi
	printf("%d\n",polindrom); //printf polindrom
	hasil(banyak,str); //memanggil prosedur
	return 0;
}