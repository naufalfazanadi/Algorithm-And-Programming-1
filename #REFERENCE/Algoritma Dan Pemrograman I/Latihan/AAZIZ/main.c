#include "header.h"//memanggil library yang ada pada header.h

int tambah(int n, kode huruf[n]){//fungsi untuk penambahan

	hasil=0;//untuk menampung hasil
	//perulangan untuk penambahan jika ada karakter angka
	for(i=0;i<n;i++){
		//lalu di cek satu2 tiap array
		for(j=0;j<strlen(huruf[i].karakter);j++){
			if(huruf[i].karakter[j]=='1'){//jika ada angka 1
				hasil=hasil+1;//maka hasil akan ditambah 1
			}else if(huruf[i].karakter[j]=='2'){//atau jika ada angka 2
				hasil=hasil+2;//maka hasil akan ditambah 2
			}else if(huruf[i].karakter[j]=='3'){//atau jika ada angka 3
				hasil=hasil+3;//maka hasil akan ditambah 3
			}else if(huruf[i].karakter[j]=='4'){//atau jika ada angka 4
				hasil=hasil+4;//maka hasil akan ditambah 4
			}else if(huruf[i].karakter[j]=='5'){//
				hasil=hasil+5;//maka hasil akan ditambah 5
			}else if(huruf[i].karakter[j]=='6'){//atau jika ada angka 6
				hasil=hasil+6;//maka hasil akan ditambah 6
			}else if(huruf[i].karakter[j]=='7'){//atau jika ada angka 7
				hasil=hasil+7;//maka hasil akan ditambah 7
			}else if(huruf[i].karakter[j]=='8'){//atau jika ada angka 8
				hasil=hasil+8;//maka hasil akan ditambah 8
			}else if(huruf[i].karakter[j]=='9'){//atau jika ada angka 9
				hasil=hasil+9;//maka hasil akan ditambah 9
			}else if(huruf[i].karakter[j]=='0'){//atau jika ada angka 0
				hasil=hasil+0;//maka hasil akan ditambah 0
			}
		}
	}

//lalu hasil akan dilempar ke fungsi cektambah
return hasil;
}

int kurang(int n,kode huruf[n]){//fungsi untuk pengurangan
	
	int negatif=0,angka,angkamin=0,minus=0;
	for(i=0;i<n;i++){
		for(j=0;j<strlen(huruf[i].karakter);j++){
			if(huruf[i].karakter[j]>='0' && huruf[i].karakter[j]<='9'){
				if(negatif==0){		
					angkamin=huruf[i].karakter[j];
					angkamin=angkamin-'0';
					negatif=1;
					minus=angkamin;
					hasil=minus;
				}else{
					angka=huruf[i].karakter[j];
					angka=angka-'0';
					minus=minus-angka;
					hasil=minus;
				}
			}
		}
	}

//lalu hasil akan dilempar ke fungsi cekkurang
return hasil;
}

int kali(int n,kode huruf[n]){//fungsi untuk perkalian

	hasil=1;//inisialisasi hasil untuk perkalian

	//perulangan untuk melakukan perkalian jika ada karakter angka
	for(i=0;i<n;i++){
		//di cek setiap array satu2
		for(j=0;j<strlen(huruf[i].karakter);j++){
			if(huruf[i].karakter[j]=='1'){//jika ada angka 1
				hasil=hasil*1;//maka hasil akan dikalikan 1
			}else if(huruf[i].karakter[j]=='2'){//atau jika ada angka 2
				hasil=hasil*2;//maka hasil akan dikalikan 2
			}else if(huruf[i].karakter[j]=='3'){//atau jika ada angka 3
				hasil=hasil*3;//maka hasil akan dikalikan 3
			}else if(huruf[i].karakter[j]=='4'){//atau jika ada angka 4
				hasil=hasil*4;//maka hasil akan dikalikan 4
			}else if(huruf[i].karakter[j]=='5'){//atau jika ada angka 5
				hasil=hasil*5;//maka hasil akan dikalikan 5
			}else if(huruf[i].karakter[j]=='6'){//atau jika ada angka 6
				hasil=hasil*6;//maka hasil akan dikalikan 6
			}else if(huruf[i].karakter[j]=='7'){//atau jika ada angka 7
				hasil=hasil*7;//maka hasil akan dikalikan 7
			}else if(huruf[i].karakter[j]=='8'){//atau jika ada angka 8
				hasil=hasil*8;//maka hasil akan dikalikan 8
			}else if(huruf[i].karakter[j]=='9'){//atau jika ada angka 9
				hasil=hasil*9;//maka hasil akan dikalikan 9
			}else if(huruf[i].karakter[j]=='0'){//atau jika ada angka 0
				hasil=hasil*0;//maka hasil akan dikalikan 0
			}
		}
	}

//lalu hasil akan dilempar ke fungsi cekkali
return hasil;
}

//fungsi untuk mengubah nilai integer menjadi string
kode ubahhasilkestring(int hasil){
	
	kode mesin;//memanggil bungkusan kode dengan nama mesin
	
	//variabel
	int tampung;
	char c;//untuk menampung kode mesin agar bisa membalikan

	tampung=hasil;//hasil akan di tampung di variabel tampung
	
	if (tampung<0){//jika tampung lebih kecil dari 0
        hasil=hasil*-1;//maka hasil dikalikan -1 agar menjadi postif(untuk meencari setiap digit harus di buat postif agar bisa membuat string '-')
	}

	i=0;//inisialisasi
   
	do{//melakukan pencarian per digit dengan perulangan do while 
        mesin.karakter[i]=hasil%10+'0';//mesin.karakter akan melakukan modulus hasil agar bisa mendapat kode string angka dengan ditambah karakter '0'(dalam ASCII karakter '0'=48) 
		i++;//maka iterasi terus berjalan
    }while((hasil/=10)>0);//maka proses berhenti jika hasil/=10 lebih besar dari 0
	
	//lalu mencari karakter'-'
	if(tampung<0){//jika tampung lebih kecil dari 0
        mesin.karakter[i] = '-';//maka mesin.karakter akan mendapatkan karakter '-'
		i++;//iterasi akan terus bertambah
	}
    mesin.karakter[i]='\0';//mesin akan di null kan bila terdapat karakter yang aneh2 

	//perulangan untuk membalikan karakter mesin agar sama dengan hasil
	 for (i=0,j=strlen(mesin.karakter)-1;i<j;i++,j--) {
        c=mesin.karakter[i];//c akan menampung string mesin satu2
        mesin.karakter[i]=mesin.karakter[j];//mesin karakter sebanyak i akan sama dengan mesin karakter sebanyak j
        mesin.karakter[j]=c;//lalu mesin karakter sebanyak j akan membalikan huruf dengan sesuai tampungan c
    }
	
	//lalu mesin akan dilemparkan ke fungsi bungkusan kode
	
	return mesin;
}

//prosedur digunakan untuk membuat pola yang sesuai dengan hasil yang dijadikan string angka
void hasilpola(kode angka,int hasil,int tebal){


	//output angka
	printf("%s\n",angka.karakter);

//////////////////////////////////////////////////////MEMBUAT POLA/////////////////////////////////////////////////////////////////

	//pola menggunakan array string
	
	char awal11[1]="-"; 
	char awal12[1]="0"; 
	char awal13[1]="-"; 
	char awal14[1]="0"; 
	char awal15[1]="-"; 
	
	
	//pola untuk angka awal dan selanjutnya(bila lebih dari satu digit)
			/*pola min   	 pola 0 		pola 1			pola 2	 		pola 3	 		pola 4	 		pola 5*/
	char minus1[3]="---", nol1[2]="-0" , satu1[2]="--", dua1[2]="-0" , tiga1[1]="0" , empat1[3]="---", lima1[2]="-0" ;
	char minus2[3]="---", nol2[3]="0-0", satu2[2]="-0", dua2[3]="--0", tiga2[2]="-0", empat2[3]="0-0", lima2[1]="0"  ;
	char minus3[3]="000", nol3[3]="---", satu3[2]="--", dua3[2]="-0" , tiga3[1]="0" , empat3[2]="-0" , lima3[2]="-0" ;
	char minus4[3]="---", nol4[3]="0-0", satu4[2]="-0", dua4[1]="0"  , tiga4[2]="-0", empat4[3]="--0", lima4[3]="--0";
	char minus5[3]="---", nol5[2]="-0" , satu5[2]="--", dua5[2]="-0" , tiga5[1]="0" , empat5[3]="--0", lima5[2]="-0" ;

		   /*pola 6	 		pola 7	   			pola 8   			pola 9*/
	char enam1[2]="-0" ,  tujuh1[2]="00",  delapan1[2]="-0" , sembilan1[2]="-0" ;
	char enam2[1]="0"  ,  tujuh2[3]="--0", delapan2[3]="0-0", sembilan2[3]="0-0";
	char enam3[2]="-0" ,  tujuh3[3]="---", delapan3[2]="-0" , sembilan3[2]="-0" ;
	char enam4[3]="0-0",  tujuh4[3]="--0", delapan4[3]="0-0", sembilan4[3]="--0";
	char enam5[2]="-0" ,  tujuh5[3]="---", delapan5[2]="-0" , sembilan5[2]="-0" ;	

	//pola spasi(untuk pemisah)
	char spasi[1]="-";

//////////////////////////////////////////////////////MEMBUAT POLA/////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////baris spasi

	//baris spasi digunakan untuk memberi jarak antara output hasil dengan pola
for(i=0 ;  i<tebal ; i++){
	printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////baris spasi


int batas1=strlen(angka.karakter);
int status=0;
i=strlen(angka.karakter)-1;
while(status!=1){
	if(angka.karakter[i]=='-' || angka.karakter[i]=='1' || angka.karakter[i]=='4'){
		batas1--;
	}else{
		status=1;
	}
	i--;
}
angka.karakter[batas1]='\0';
for(i=0 ; i<tebal ; i++){
	for(l=0 ;l<batas1 ; l++ ){
		if(angka.karakter[l]=='-'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",minus1[j]);
				}
			}	
		}else if(angka.karakter[l]=='0'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",nol1[j]);
				}
			}			
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}
		}else if(angka.karakter[l]=='1'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",awal11[j]);
					}
				}
			}else{
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",satu1[j]);
					}
				}
			}	
		}else if(angka.karakter[l]=='2'){
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",dua1[j]);
					}
				
				}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='3'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga1[j]);
					}
				}
				if(angka.karakter[l+1]!='\0'){
					for(j=0 ; j<1 ;j++){
						for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
					}
				}
			}else{
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga1[j]);
					}
				}
				if(angka.karakter[l+1]!='\0'){
					for(j=0 ; j<1 ;j++){
						for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
					}
					
				}
			}	
		}else if(angka.karakter[l]=='4'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",empat1[j]);
				}
			}			
		}else if(angka.karakter[l]=='5'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",lima1[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='6'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",enam1[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='7'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",tujuh1[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='8'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",delapan1[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}
		}else if(angka.karakter[l]=='9'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",sembilan1[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}					
		}
		if(l<batas1-1){
			for(k=0 ; k<tebal ; k++){
				printf("-");
			}
		}
	}
printf("\n");	
}

int batas2=strlen(angka.karakter);
int status2=0;
i=strlen(angka.karakter)-1;
while(status2!=1){
	if(angka.karakter[i]=='-'){
		batas2--;
	}else{
		status2=1;
	}
	i--;
}
angka.karakter[batas2]='\0';
for(i=0 ; i<tebal ; i++){
	for(l=0 ;l<batas2; l++ ){
		if(angka.karakter[l]=='-'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",minus2[j]);
				}
			}
		}else if(angka.karakter[l]=='0'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",nol2[j]);
				}
			}			
		}else if(angka.karakter[l]=='1'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",awal12[j]);
					}
				}
			}else{
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",satu2[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='2'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",dua2[j]);
				}
			}			
		}else if(angka.karakter[l]=='3'){
			if(l==0){
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga2[j]);
					}
				}
			}else{
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga2[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='4'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",empat2[j]);
				}
			}		
		}else if(angka.karakter[l]=='5'){
			for(j=0 ; j<1 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",lima2[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}		
		}else if(angka.karakter[l]=='6'){
			for(j=0 ; j<1 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",enam2[j]);
				}
			}		
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}			
		}else if(angka.karakter[l]=='7'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",tujuh2[j]);
				}
			}			
		}else if(angka.karakter[l]=='8'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",delapan2[j]);
				}
			}			
		}else if(angka.karakter[l]=='9'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",sembilan2[j]);
				}
			}			
		}
		if(l<batas2-1){
			for(k=0 ; k<tebal ; k++){
				printf(" ");
			}
		}
	}
printf("\n");	
}

int batas3=strlen(angka.karakter);
int status3=0;
i=strlen(angka.karakter)-1;
while(status3!=1){
	if(angka.karakter[i]=='1'|| angka.karakter[i]=='0' || angka.karakter[i]=='7'){
		batas3--;
	}else{
		status3=1;
	}
	i--;
}

angka.karakter[batas3]='\0';

for(i=0 ; i<tebal ; i++){
	for(l=0 ;l<batas3 ; l++ ){
		if(angka.karakter[l]=='-'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",minus3[j]);
				}
			}			
		}else if(angka.karakter[l]=='0'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",nol3[j]);
				}
			}			
		}else if(angka.karakter[l]=='1'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",awal13[j]);
					}
				}
			}else{
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",satu3[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='2'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",dua3[j]);
				}
			}
			if(angka.karakter[batas3]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='3'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga3[j]);
					}
				}		
				if(angka.karakter[l+1]!='\0'){
					for(j=0 ; j<1 ;j++){
						for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
					}
				}
			}else{
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga3[j]);
					}
				}		
				if(angka.karakter[l+1]!='\0'){
					for(j=0 ; j<1 ;j++){
						for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
					}
				}
			}	
		}else if(angka.karakter[l]=='4'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",empat3[j]);
				}
			}				
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='5'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",lima3[j]);
				}
			}				
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='6'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",enam3[j]);
				}
			}		
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='7'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",tujuh3[j]);
				}
			}		
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}			
		}else if(angka.karakter[l]=='8'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",delapan3[j]);
				}
			}		
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='9'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",sembilan3[j]);
				}
			}		
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",spasi[j]);
					}
				}
			}			
		}
		if(l<batas3-1){
			for(k=0 ;k<tebal ; k++){
				printf(" ");
			}
		}
	}
printf("\n");	
}


int batas4=strlen(angka.karakter);
int status4=0;
i=strlen(angka.karakter)-1;
while(status2!=1){
	if(angka.karakter[i]=='-'){
		batas4--;
	}else{
		status2=1;
	}
	i--;
}
angka.karakter[batas4]='\0';
for(i=0 ; i<tebal ; i++){
	for(l=0 ;l<batas4 ; l++ ){
		if(angka.karakter[l]=='-'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",minus4[j]);
				}
			}	
		}else if(angka.karakter[l]=='0'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",nol4[j]);
				}
			}			
		}else if(angka.karakter[l]=='1'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",awal14[j]);
					}
				}
			}else{
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",satu4[j]);
					}
				}
			}		
		}else if(angka.karakter[l]=='2'){
			for(j=0 ; j<1 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",dua4[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}						
		}else if(angka.karakter[l]=='3'){
			if(l==0){
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga4[j]);
					}
				}
			}else{
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga4[j]);
					}
				}
			}					
		}else if(angka.karakter[l]=='4'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",empat4[j]);
				}
			}							
		}else if(angka.karakter[l]=='5'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",lima4[j]);
				}
			}							
		}else if(angka.karakter[l]=='6'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",enam4[j]);
				}
			}					
		}else if(angka.karakter[l]=='7'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",tujuh4[j]);
				}
			}					
		}else if(angka.karakter[l]=='8'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",delapan4[j]);
				}
			}					
		}else if(angka.karakter[l]=='9'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",sembilan4[j]);
				}
			}					
		}
		if(l<batas4-1){
			for(k=0 ; k<tebal ; k++){
				printf(" ");
			}
		}
	}
printf("\n");	
}

int batas5=strlen(angka.karakter);
int status5=0;
i=strlen(angka.karakter)-1;
while(status5!=1){
	if(angka.karakter[i]=='-' || angka.karakter[i]=='1' || angka.karakter[i]=='7'){
		batas5--;
	}else{
		status5=1;
	}
	i--;
}

angka.karakter[batas5]='\0';

for(i=0 ; i<tebal ; i++){
	for(l=0 ;l<batas5 ; l++ ){
		if(angka.karakter[l]=='-'){
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<3 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",minus5[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='0'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",nol5[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}			
		}else if(angka.karakter[l]=='1'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",awal15[j]);
					}
				}
			}else{
				for(j=0 ; j<2 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",satu5[j]);
					}
				}
			}			
		}else if(angka.karakter[l]=='2'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",dua5[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}	
		}else if(angka.karakter[l]=='3'){
			if(l==0){
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga5[j]);
					}
				}
				if(angka.karakter[l+1]!='\0'){
					for(j=0 ; j<1 ;j++){//spasi
						for(k=0 ; k<tebal ; k++){
								printf("%c",spasi[j]);
							}
					}
				}
			}else{
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
				for(j=0 ; j<1 ;j++){
					for(k=0 ; k<tebal ; k++){
						printf("%c",tiga5[j]);
					}
				}
				if(angka.karakter[l+1]!='\0'){
					for(j=0 ; j<1 ;j++){//spasi
						for(k=0 ; k<tebal ; k++){
								printf("%c",spasi[j]);
							}
					}
				}
			}
		}else if(angka.karakter[l]=='4'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",empat5[j]);
				}
			}							
		}else if(angka.karakter[l]=='5'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",lima5[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}
		}else if(angka.karakter[l]=='6'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",enam5[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}
		}else if(angka.karakter[l]=='7'){
			for(j=0 ; j<3 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",tujuh5[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}
		}else if(angka.karakter[l]=='8'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",delapan5[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}
		}else if(angka.karakter[l]=='9'){
			for(j=0 ; j<2 ;j++){
				for(k=0 ; k<tebal ; k++){
					printf("%c",sembilan5[j]);
				}
			}
			if(angka.karakter[l+1]!='\0'){
				for(j=0 ; j<1 ;j++){//spasi
					for(k=0 ; k<tebal ; k++){
							printf("%c",spasi[j]);
						}
				}
			}
		}
		if(l<batas5-1){
			for(k=0 ; k<tebal ; k++){
				printf(" ");
			}
		}
	}
printf("\n");	
}
printf("%d",batas1);
printf("%d",batas2);
printf("%d",batas3);
printf("%d",batas4);
printf("%d",batas5);
printf("%c",angka.karakter[batas1]);
printf("%c",angka.karakter[batas2]);
printf("%c",angka.karakter[batas3]);
printf("%c",angka.karakter[batas4]);
printf("%c",angka.karakter[batas5]);
	
}

/*

Keterangan:
(1)di print di baris pertama
(2)di print di baris kedua
(3)di print di baris ketiga
(4)di print di baris keempat
(5)di print di baris kelima

*/