//yuk mari string!!!
#include<stdio.h>
#include<string.h>
/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan str22014, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
int main(){
	//deklarasi variabel dan indeks
	char str[100];
	int i=0;;
	char angka[11]="0123456789"; //ini deklarasi angka nya untuk digantikan!!
	scanf("%s",&str); //input biasa
	int x=0;
	for(i=0;i<strlen(str);i++){ // for untuk mengecek seluruh panjang string 
		if(x==10){ //jika udah sampe 9 balik lg ke 0 :D
			x=0;
		}
		if(str[i]=='a' || str[i]=='i' || str[i]=='u' || str[i]=='e' || str[i]=='o'){ //jika string huruf vokal
			str[i]=angka[x]; //diganti jadi angka
			x++; 
			
		}else{
			x++; //jika bukan vokal x++ juga tapi ga diganti :D
		}
	}
	printf("%s\n",str); // print hasil lalala yeyeye


//alhamdulillah :D
	return 0;
}
