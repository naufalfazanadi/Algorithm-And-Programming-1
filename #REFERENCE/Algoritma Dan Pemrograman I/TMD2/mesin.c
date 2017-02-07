#include "faisal.h"
//bagian mesin program

//fungsi menghitung operasi TMD
int angka(int n,char arr[n][100]){ 
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	//bagian deklarasi
	int i,j,jumlah=0;
	int plus=0,minus=0,kali=1;				//untuk plus variabel=0, minus =0, untuk kali = 1 karena 0 x integer hasilnya akan 0
	int angka;
	char operasi;
	int status=0;							//status ini untuk pemberhentian while
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	//ini bagian mencari tanda operasi
	for(i=0;i<n;i++){
		j=0;
		while(j<strlen(arr[i]) && status!=1){
			if(arr[i][j]=='+'){ 
				operasi='+'; 					//jika bertemu + maka tandai variabel operasi dengan +
				status=1;	
			}
			else if(arr[i][j]=='-'){
				operasi='-';					//jika bertemu - maka tandai variabel operasi dengan -
				status=1;	
			}
			else if(arr[i][j]=='x'){
				operasi='x';					//jika bertemu x maka tandai variabel operasi dengan x
				status=1;	
			}
			j++;
		}
	}
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	//disini mesin untuk menjumlahkan,mengurangkan atau mengalikan
	int neg=0;				//variabel ini khusus untuk kondisi pengurangan
	int angkaneg=0;			//variabel ini juga
	int hasil;
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i]);j++){
			if(operasi=='+'){ 							//jika operasi sebanding dengan +
				if(arr[i][j]>='0' && arr[i][j]<='9'){	//maka cari seluruh angka dalam string dan jumlahkan
					angka=arr[i][j];
					angka=angka-48;
					plus=plus+angka;
					hasil=plus;
				}
			}
			if(operasi=='-'){							//jika operasi sebanding dengan -
				if(arr[i][j]>='0' && arr[i][j]<='9'){	//maka lakukan operasi pengurangan
					//-------------------------
					//untuk bagian negatif terdapat perbedaan di patokan awal
					if(neg==0){					//kondisi ini mengharuskan angka pertama yg muncul di input menjadi variabel sum operasi minus
						angkaneg=arr[i][j];
						angkaneg=angkaneg-48; 
						neg=1;					//membuat neg menjadi true sehingga akan terus ke kondisi else.
						minus=angkaneg;
						hasil=minus;
					//-------------------------
					}else{						//kondisi ini pengurangan biasa
						angka=arr[i][j];
						angka=angka-48;
						minus=minus-angka;		//sum pengulangan operasi minus.
						hasil=minus;
					}
				}
				
			}
			if(operasi=='x'){							//jika operasi sebanding dengan x
				if(arr[i][j]>='0' && arr[i][j]<='9'){	//maka lakukan operasi perkalian
						angka=arr[i][j];
						angka=angka-48;
						kali=kali*angka;	//sum perkalian dengan operasi(tanda hitung) *.
						hasil=kali;
					}
				}
				
		}
	}
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	return hasil; //mengembalikan hasil berupa integer ke MAIN.
}
//fungsi menkonversi hasil integer, menjadi character persatuan huruf.
tmd stringx(int hasil,int digit){
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	//Declaration
	
	tmd kembali; //membuat variabel bungkusan untuk dilempar
	
	int help1=1; //help 1 adalah variabel yg membantu untuk membagi integer menjadi string
	int help2; 
	int i;
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<digit-1;i++){ //mencari help1, help1 sama dengan puluhan angka dari integer ex(44) help1 = 40;
		help1=help1*10;	//mengalikan help1 sebanyak digit.
	}
	//kondisi yang membuat character pertama menjadi minus
	if(hasil<0){	
		kembali.hsl[0]='-'; 
		i=1;
	}else{
		i=0;
	}
	
	while(help1>0){
		if(hasil<0){
			hasil=hasil*-1;
		}
		help2=hasil/help1;
		kembali.hsl[i]=help2+48;
		hasil=hasil-(help2*help1);
		help1=help1/10;
		i++;
	}
	kembali.hsl[i]='\0';
 	return kembali;
}  
 int digat(int hasil){ //fungsi penghitung digit angka
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	//logic : seluruh angka dibagi 10, ketika angka tsb sudah 0,9(desimal) maka perulangan berhenti
	int digit=0;
	while(hasil!=0){ 
		hasil=hasil/10; 
		digit++;	//counter digit
	}
	return digit;
} 
//---------------------------------------------------------------------------------------------------------------------------------------------------------
//prosedur baris 1
void baris1(int tebal,int digit,tmd hasil1,int hasil){
	//deklarasi
	int i,j,k,l;
	int status=0;
	
	if(hasil<0){ //kondisi ini menambah jumlah digit, ketika angka minus, ex(-36).digit=3
		digit++;
	}
	int batas1=digit;			//membuat variabel batas tiap baris
	char string1[batas1];
	strcpy(string1,hasil1.hsl);	//string copy agar variabel yg dipake mudah
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	//looping ini dikondisikan untuk mengurangi batas, ketika bertemu angka2 yang full kosong.
	//logic: ex 1444, pada baris 1. semua pola pada angka tersebut tidak ada maka, dari batas1 yang asalnya 4 digit, menjadi 0 digit.
	i=digit-1; //countdown
	while(i>=0 && status!=1){
		if(string1[i]=='1' || string1[i]=='4'){ //perbedaan ada pada angka 1 & 4
			batas1=batas1-1;
		}else{									//jika bertemu salah satu angka saja yg bukan maka berhenti
			status=1;
		}		
		i--; //iterasi --
	}
	string1[batas1]='\0';						//bagian paling penting untuk kelangsungan pengurangan spasi di pola adalah membuat null karakter sesuai batas
	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<tebal;i++){	//for i untuk tebal
		// baris 1
		//logic : membuat kemungkinan per,angka. jika character tsb merupakan angka itu maka print pola sesuai tebal.
		for(k=0;k<batas1;k++){ //looping untuk array karakter
			if(string1[k]=='1'){ //jika 1
				if(k==0){		 //pengecualian untuk angka 1 dan 3
					if(string1[k+1]!='\0'){ 
						for(j=0;j<tebal;j++){ //logika ini adalah ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola 0 saja
							printf(" ");
						}
					}
				}else{
					if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string1[k]=='2'){ //jika 2 maka print sebanyak tebal
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string1[k]=='3'){ //jika 3 maka print sebanyak tebal
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
							}
					}
				}
			}else if(string1[k]=='4'){ //jika 4 maka print sebanyak tebal
				if(k==0){
					if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
					
				}else{
					if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string1[k]=='5'){ //jika 5 maka print sebanyak tebal
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string1[k]=='6'){ //jika 6 maka print sebanyak tebal
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string1[k]=='7'){ //jika 7 maka print sebanyak tebal
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string1[k]=='8'){ //jika 8 maka print sebanyak tebal
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			
			}else if(string1[k]=='9'){ //jika 9 maka print sebanyak tebal
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string1[k]=='0'){
				for(j=0;j<tebal;j++){ //jika 0 maka print sebanyak tebal
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string1[k]=='-'){ //jika string negatif 
				if(string1[k+1]!='\0'){ //jika didepannya masih ada char
					//print pola
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}
			//spasi
			if(k<batas1-1){ //this one spaces for every character
				for(j=0;j<tebal;j++){ //sebanuak tebal
					printf(" ");
				}
			}	
		}
		printf("\n"); //newline every row
	}
}
//prosedur baris ke 2
void baris2(int tebal,int digit,tmd hasil1,int hasil){
	//-----------------------------------------------------------------------------------------------------------------------------------
	//DECLARATION
	//di baris 2 tidak ada pengecualian pola yg kosong semua
	int i,j,k,l;
	int status=0;
	if(hasil<0){							//jika hasilnya negatif maka jumlah digit bertambah. ex(-36) digit=3
		digit++;
	}
	int batas2=digit;						//batas
	char string2[batas2];				
	strcpy(string2,hasil1.hsl);				//string copy agar mudah menjadi variabel string2
	string2[batas2]='\0';				
	//-----------------------------------------------------------------------------------------------------------------------------------
	// baris 2
	//Logic : Membuat semua kondiisi dari angka 1-9, jika angka hasil penjumlahan adalah angka tsb maka print pola
	//pola itu sesuai tebal ke samping dan sesuai tebal ke bwh
	for(i=0;i<tebal;i++){ 
		for(k=0;k<batas2;k++){	//batas atau digit, looping k.
			if(string2[k]=='1'){ //jika 1 maka pola
				if(k==0){
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string2[k]=='2'){ //jika 2 maka pola
				
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string2[k]=='3'){ //jika 3 maka pola
				if(k==0){
					
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}			
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string2[k]=='4'){ //jika 4 maka pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}				
			}else if(string2[k]=='5'){ //jika 5 maka pola
			
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string2[k+1]!='\0'){		//ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string2[k]=='6'){ //jika 6 maka pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string2[k+1]!='\0'){		//ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string2[k]=='7'){ //jika 7 maka pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string2[k]=='8'){ //jika 8 maka pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}else if(string2[k]=='9'){ //jika 9 maka pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string2[k]=='0'){ //jika 0 maka pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string2[k]=='-'){ //jika - maka pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}
			//SPASI
			//kondisi spasi print setiap sesudah angka
			if(k<batas2-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		printf("\n");	//newline every character
	}
}
//prosedur baris 3
void baris3(int tebal,int digit,tmd hasil1,int hasil){
	//-----------------------------------------------------------------------------------------------------------------------------------
	//DECLARATION
	int i,j,k,l;
	int status=0;
	if(hasil<0){ //jika hasilnya negatif maka digit bertambah ex(-36) digit 3;
		digit++;
	}
	int batas3=digit;
	char string3[batas3];
	strcpy(string3,hasil1.hsl); //string copy untuk memudahkan variabel
//-----------------------------------------------------------------------------------------------------------------------------------
//untuk baris 3 terdapat pengecualian angka kosong
	i=digit-1;
	while(i>=0 && status!=1){ //looping hingga status true
		if(string3[i]=='1' || string3[i]=='0' || string3[i]=='7'){ //pengecualian di baris 3 adalah angka 1,0 dan 7
			batas3=batas3-1;
		}else{
			status=1;
		}
		
		i--;
	}
	string3[batas3]='\0'; //bagian terpenting, adalah membuat null di array batas.
//---------------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<tebal;i++){
		// baris 3
		//Logic : Membuat semua kondiisi dari angka 1-9, jika angka hasil penjumlahan adalah angka tsb maka print pola
		//pola itu sesuai tebal ke samping dan sesuai tebal ke bwh
		for(k=0;k<batas3;k++){
			if(string3[k]=='1'){ //jika 1 maka cetak pola
				if(k==0){
					if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string3[k]=='2'){ //jika 2 maka cetak pola
				
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string3[k]=='3'){ //jika 3 maka cetak pola
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
							}
					}
				}
			}else if(string3[k]=='4'){ //jika 4 maka cetak pola
			
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}		
			}else if(string3[k]=='5'){ //jika 5 maka cetak pola
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string3[k]=='6'){ //jika 6 maka cetak pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string3[k]=='7'){ //jika 7 maka cetak pola
				if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string3[k]=='8'){ //jika 9 maka cetak pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			
			}else if(string3[k]=='9'){ //jika 9 maka cetak pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string3[k]=='0'){ //jika 0 maka cetak pola
				if(string3[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}				
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string3[k]=='-'){	 //jika - maka cetak pola juga			
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}
			//SEMUA POLA DI PRINT SEBANYAK TEBAL :D
			//SPASI
			//spasi ini akan dicetak sehabis setiap angka
			if(k<batas3-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		printf("\n"); //NEWLINE EVERY CHARACTER
	}
}
//prosedur baris 4
void baris4(int tebal,int digit,tmd hasil1,int hasil){
	//BARIS 4
	//DI SINI TIDAK ADA PENGECUALI POLA KOSONG

	//----------------------------------------------------------------------------------------------------------------------------------------
	//DECLARATION
	int i,j,k,l;
	if(hasil<0){ //jika hasil negatif maka digit bertambah ex(-36) digit=3;
		digit++;
	}
	int batas4=digit; //membuat variabel batas agar mudah dan sama
	char string4[batas4]; //membuat variabel char string sesuai batas (efisien :D)
	strcpy(string4,hasil1.hsl);
	string4[batas4]='\0'; //membuat null array ke batas
	//----------------------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<tebal;i++){ // baris 4
		for(k=0;k<batas4;k++){
			if(string4[k]=='1'){ //jika 1 maka cetak pola
				if(k==0){
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string4[k]=='2'){ //jika 2 maka cetak pola
				
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string4[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string4[k]=='3'){ //jika 3 maka cetak pola
				if(k==0){
					
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}			
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string4[k]=='4'){ //jika 4 maka cetak pola
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}				
			}else if(string4[k]=='5'){ //jika 5 maka cetak pola
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}		
				
			}else if(string4[k]=='6'){ //jika 6 maka cetak pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
		
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			
			}else if(string4[k]=='7'){ //jika 7 maka cetak pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string4[k]=='8'){ //jika 8 maka cetak pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}else if(string4[k]=='9'){ //jika 9 maka cetak pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string4[k]=='0'){ //jika 0 maka cetak pola
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string4[k]=='-'){ //jika - maka cetak pola
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}
			//SPASI
			//SPASI INI DI CETAK SETIAP SESUDAH CHARACTER
			if(k<batas4-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		printf("\n"); //newline after every character
	}
}
//prosedur baris 5
void baris5(int tebal,int digit,tmd hasil1,int hasil){
	//-------------------------------------------------------------------------------------------------------------------------
	
	//BARIS 5
	//DIBARIS INI ADA PENGECUALIAN ANGKA KOSONG YAITU 1 DAN 7
	//SEMUA POLA DICETAK SESUAI TEBAL
	//deklarasi
	int i,j,k,l;
	int status=0;
	if(hasil<0){ //jika angka negatif maka digit bertambah ex(-36) digit 3;
		digit++;
	}
	int batas5=digit; //membuat variabel ini agar sama dengan yg lain juga memudahkan
	char string5[batas5]; //membuat variabel ini agar sama dengan yg lain juga memudahkan
	strcpy(string5,hasil1.hsl); //string copy
	//-------------------------------------------------------------------------------------------------------------------------
	//BATAS PROSES
	i=digit-1;
	while(i>=0 && status!=1){ //looping sampai status true
		if(string5[i]=='1' || string5[i]=='7'){ //jika angka adalah 1 dan 7 maka batas berkurang
			batas5=batas5-1;
		}else{
			status=1;
		}
		
		i--;
	}
	string5[batas5]='\0';  //bagian paling penting, membuat null string5 di array batas
	//-------------------------------------------------------------------------------------------------------------------------
	for(i=0;i<tebal;i++){
		// baris 1
		for(k=0;k<batas5;k++){
			if(string5[k]=='1'){
				if(k==0){
					if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string5[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string5[k]=='3'){
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
						for(j=0;j<tebal;j++){
							printf(" ");
							}
					}
				}
			}else if(string5[k]=='4'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
							
			}else if(string5[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string5[k]=='6'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){ 
						printf(" ");
					}			
				}
			}else if(string5[k]=='7'){
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}

					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string5[k]=='8'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			
			}else if(string5[k]=='9'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string5[k]=='0'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){ //ketika angka selanjutnya adalah null maka, ini angka terakhir jadi print sampai pola "0" saja
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string5[k]=='-'){
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}
			//SPASI
			//SPASI INI DI CETAK SETIAP SESUDAH ANGKA
			if(k<batas5-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		printf("\n"); //newline every character
	}
}
//fungsi nol
void nol(int digit,int tebal){
	//-----------------------------------------------------------------------------------------------------------------------------
	//fungsi ini dibuat ketika penjumlahan atau pengurangan berjumlah 0. 
	int i,j;
	
	if(digit==0){
		for(i=0;i<tebal;i++){ //print pola sebanyak tebal
			//baris 1
			for(j=0;j<tebal;j++){ //print pola
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("0");
			}
			printf("\n");
		}
		//baris 2
		for(i=0;i<tebal;i++){
			for(j=0;j<tebal;j++){ //print pola
				printf("0");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("0");
			}
			printf("\n");
		}
		//baris 3
		for(i=0;i<tebal;i++){
			printf("\n"); //print hanya newline
		}
		//baris 4
		for(i=0;i<tebal;i++){
			for(j=0;j<tebal;j++){ //print pola
				printf("0");
			}
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("0");
			}
			printf("\n");
		}
		//baris5
		for(i=0;i<tebal;i++){
			for(j=0;j<tebal;j++){ //print pola
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("0");
			}
			printf("\n"); //NEWLINE
		}
	}
}
//Alhamdulillah mesinnya beres. mohon maaf kalau belum efisien.. 
//semoga ilmu ilmu semakin bertambah agar lebih efisien lagi Amiin

/*Saya Faisal Syaiful  tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
TDMD, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/