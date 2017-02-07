//SOAL DINAMIK FAKK!!
#include<stdio.h>
#include<string.h>
/*Saya Faisal Syaiful  tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
EVALUASI AKHIR, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/
int main(){
	char str[100][100]; //array inputan
	int i,j,n;
	char sekian[8]={'d','i','n','a','m','i','k','\0'}; // ini dinamik!
	i=0;
	int k;
	int angka=0;;
	int x;
	x=0;
	// diatas adalah macam macam kebutuhan pengulangan
	
	while(strcmp(str[i-1],sekian)!=0){
		scanf("%s",&str[i]); //input
		i++; // tambahtambahan
		x++; // untuk patokan
	}
	char hasil[x][100]; //hasil!
	k=0;
	for(i=0;i<x-1;i++){ //for sebanyak x
		k=0;
		for(j=0;j<strlen(str[i]);j++){
			if(str[i][j]!='a' && str[i][j]!='i' && str[i][j]!='u' && str[i][j]!='e' && str[i][j]!='o' ){ //jika konsonan maka masuk ke if
				if(str[i][j+1]=='a' || str[i][j+1]=='i' || str[i][j+1]=='u' || str[i][j+1]=='e' || str[i][j+1]=='o'){ // jika konsonan maka lanjut
					if(j+1<strlen(str[i])){
						if(str[i][j+2]!='a' && str[i][j+2]!='i' && str[i][j+2]!='u' && str[i][j+2]!='e' && str[i][j+2]!='o'){ //jika konsonan maka lanjut
							if(j+2<strlen(str[i])){
								angka++; //angka++
							}
						}
					}	
				}
				hasil[i][k]=str[i][j]; //masukmasuk ke array baru
				k++; //indeks 
			}
			
		}
		
	}
	for(i=0;i<x-1;i++){
		for(j=0;j<strlen(hasil[i]);j++){
			if(hasil[i][j]>='a' && hasil[i][j]<='z' || hasil[i][j]=='1' || hasil[i][j]=='2' || hasil[i][j]=='3' || hasil[i][j]=='4' || hasil[i][j]=='5' || hasil[i][j]=='6'  || hasil[i][j]=='7'  || hasil[i][j]=='8' || hasil[i][j]=='9' || hasil[i][j]=='0' ){
		
			}else{
				hasil[i][j]='\0';
			}
		}
	} 
	printf("%d\n",angka); //printjumlah konsonan diapit konsonan
	int z;
	int spasi; //deklarasi spasi
		
		spasi=0; //spasi di 0kan
		for(i=0;i<x-1;i++){
			if(i%2==0){ //jika indeks genap;
				for(j=0;j<spasi;j++){
					printf(" "); // spasii sebanyak spasi
				}
				spasi=0;
				printf("%s",hasil[i]);
			}else{ // jika indeks ganjil
				spasi=spasi+strlen(hasil[i]); //spasi ditambahkan yihaaa
			}
		}
			printf("\n");
			spasi=0;
		for(i=0;i<x-1;i++){
			if(i%2==1){ //jika indeks ganjil
				for(j=0;j<spasi;j++){ 
					printf(" "); //print spasii sebanyak spasii
				}
				spasi=0;
				printf("%s",hasil[i]);
			}else{//jika indeks genap maka jadiin spasi
				spasi=spasi+strlen(hasil[i]);
			}
		}
		printf("\n");
	return 0;
	//alhamdulillahirobilalamin
}
