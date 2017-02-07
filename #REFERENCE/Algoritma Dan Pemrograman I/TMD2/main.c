#include "faisal.h"
//Kode Hitungan Detektif Alpro!

/*Saya Faisal Syaiful  tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
TDMD, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/
int main(){
	//declaration
	int n,i,j,k,l;
	int tebal;
	scanf("%d",&n); //input n
	char arr1[n][100]; //deklrasi array string sebanyak n
	for(i=0;i<n;i++){
		scanf("%s",&arr1[i]); //input array sejumlah n
	} 
	scanf("%d",&tebal); //input 
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	
	//declar value from procedure function
	int hasil=angka(n,arr1);
	int digit=digat(hasil);
	tmd hasil1; //variable bungkusan
	hasil1 = stringx(hasil,digit);
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	printf("%d\n",hasil); //print hasil
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<tebal;i++){
		printf("\n"); //print spasi sebanyak tebal
	}
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	if(digit==0){ //jika digit 0
		nol(digit,tebal); //memanggil fungsi  nol
	}else{
		baris1(tebal,digit,hasil1,hasil); //memanggil fungsi baris 1
		baris2(tebal,digit,hasil1,hasil); //memanggil fungsi baris 2
		baris3(tebal,digit,hasil1,hasil); //memanggil fungsi baris 3
		baris4(tebal,digit,hasil1,hasil); //memanggil fungsi baris 4
		baris5(tebal,digit,hasil1,hasil); //memanggil fungsi baris 5
		
	}
	return 0;
	//alhamdulillah terimakasih TMD. Saya bangga mengerjakan TMD dengan sukses hehe 
	//terimakasih alpro1
	//terimakasih bu rosa
	//terimakasih tugas besar
	//semoga kita bertemu lagi di alpro2 :D
}
