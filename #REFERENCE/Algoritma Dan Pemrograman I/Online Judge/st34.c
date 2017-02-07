#include<stdio.h>
#include<string.h>

int main(){
	//deklarasi
	int i,j;
	char str[100];
	scanf("%s",&str);
	int k=0;
	int vokal=0;
	int konso=0;
	//jumlah vokal atau konsonan
	for(i=0;i<strlen(str);i++){
		if(str[i]=='a' || str[i]=='i' || str[i]=='u' || str[i]=='e' || str[i]=='o'){
			vokal++;
		}else{
			konso++;
		}
	}
	if((vokal*konso)%2==0){ //jika vokal*konso samadengan genap!	
		while(k<strlen(str)){ //while ini ngebungkus for miring sama lurus
			for(i=0;i<4;i++){ //for empat huruf empat huruf
				if(k<strlen(str)){// ini maksudnya jika kata nya masih ada maka lanjut
					for(j=0;j<i;j++){//print kosongnya dulu
						printf(" ");
					}
					for(j=0;j<1;j++){//terus print hurufnya
						printf("%c",str[k]); //str terhadap k; jadi setiap ngulang k nya ngelanjut.
					k++;
					}
					printf("\n");
				}else{ //akhiri baris kata jika k>strlen, gunakan null
					printf("\0"); 
					k++;
				}
			}
			if(k<strlen(str)){
				for(i=0;i<4;i++){ //for 4huruf lurusss
					if(k<strlen(str)){
						printf("%c",str[k]);
						k++;
					}else{
						printf("\0");
					}
				}
				printf("\n"); //akhiri baris kata jika k>strlen, gunakan null
			}
		}
	}else{ //jika ganjil
		while(k<strlen(str)){
			for(i=0;i<3;i++){ //for 3 huruf 3 huruf miring tangga
				if(k<strlen(str)){
					for(j=0;j<i;j++){
						printf(" ");
					}
					for(j=0;j<1;j++){
						printf("%c",str[k]);
					k++;
					}
					printf("\n");
				}else{
					printf("\0"); 
					k++;
				}
			}
			if(k<strlen(str)){
				for(i=0;i<3;i++){ // ini lurus
					if(k<strlen(str)){
						printf("%c",str[k]);
						k++;
					}else{
						printf("\0");
					}
				}
				printf("\n");
			}	
		}
	}



	return 0;
}
/*Saya Faisal Syaiful  tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
st34, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/