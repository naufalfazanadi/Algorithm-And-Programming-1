//this is hapus string
#include<stdio.h>
#include<string.h>

/*Saya Faisal Syaiful  tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
TP7, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/
int main(){
	//declaration
	int i,j,k,l;
	char str1[100],str2[100];
		//input
		scanf("%s",&str1);//manystring
		scanf("%s",&str2);//delstring
	int sama=0;
	
	for(i=0;i<strlen(str1);i++){//cek seluruh strlen panjang

		j=0;
		sama=0;
		if(str1[i]==str2[0]){//jika huruf pertamanya sudah sama maka lanjut cek selanjutnya
			while(str2[j]!='\0'){
				if(str1[i+j]==str2[j]){
					sama++;
				}
				j++;
			}
			//jika sudah sama hurufnya maka huruf tsb diganti jadi char 0
			if(sama==strlen(str2)){
				for(k=0;k<strlen(str2);k++){
					str1[i+k]='0';
				}
			}
		}
	}
	
	char str3[strlen(str1)-strlen(str2)];
	l=0;
	for(i=0;i<strlen(str1);i++){
		
		if(str1[i]=='0'){

		}else{//jika bukan 0 maka masukin ke array baru.
			str3[l]=str1[i];
			l++;
		}
	}
	i=0;
	
	for(i=0;i<strlen(str3);i++){//for untuk memberi null diakhir kata
		if(str3[i]>='a' && str3[i]<='z'){//agar tahu jumlah pasti strlen array baru.
	
		}else{
			str3[i]='\0';
		}
	} 
	printf("%s\n",str3);
	i=0;
	l=0;
	k=strlen(str3);
	//ini bagian pola!!!!!!!
	//pola terbagi dua jika strlen array baru ganjil ATAU genap
	if(strlen(str3)%2==0){//ini apa coba <---
							//ya! genap! anda benar!!
		for(i=0;i<strlen(str3)/2;i++){
			for(j=0;j<i;j++){
				printf(" ");
			}
			for(j=0;j<1;j++){//inih diprintnya cuma sekali aja (j<1)
				l++;
				printf("%c",str3[l-1]);
			}
			
			for(j=(strlen(str3)/2)-1;j>i;j--){
				printf(" ");
			}
			for(j=(strlen(str3)/2)-1;j>i;j--){
				printf(" ");
			}
			
			for(j=0;j<1;j++){//ini dibagi dua polanya ini yang naik naik kepuncak gunung.
				k--;
				printf("%c",str3[k]);
			}
			printf("\n");
			
		}
	}else{//inih kalau........ganjil! anda benar!
		for(i=0;i<(strlen(str3)/2);i++){
			for(j=0;j<i;j++){
				printf(" ");
			}
			for(j=1;j<2;j++){
				l++;
				printf("%c",str3[l-1]);
			}
			
			for(j=(strlen(str3)/2);j>i;j--){
				printf(" ");
			}
			for(j=(strlen(str3)/2)-1;j>i;j--){
				printf(" ");
			}
			for(j=0;j<1;j++){
				k--;
				printf("%c",str3[k]);
			}
			printf("\n");
			
		}
	
		i=0;
		j=0;
		
		for(i=0;i<(strlen(str3)/2);i++){
			printf(" ");
		}
		printf("%c\n",str3[(strlen(str3)/2)]);
	}
	return 0;
}
