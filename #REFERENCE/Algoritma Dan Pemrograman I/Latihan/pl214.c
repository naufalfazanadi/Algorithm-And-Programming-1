//mengejar pola pola yiha
#include<stdio.h>
#include<string.h>
/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan pl214, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/


int main(){
	int i,j,n,k; //deklarasi indeks,n,counter :D
	scanf("%d",&n); //input jumlah inputan
	char arr[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&arr[i]); //jumlah inputan string
	}
	
	int spasi=0; //spasi
	for(i=0;i<n;i++){
		if(i%2==0){ // jika string ke i ke 0 (genap)
			for(j=0;j<spasi;j++){ //spasi diawal
				printf(" ");
			}
			for(j=0;j<strlen(arr[i]);j++){ //print huruf perhuruf
					printf("%c",arr[i][j]);
			}
			spasi=spasi+((strlen(arr[i])/2)-1); //spasi untuk yg lurus harus ditambah setengah dari panjang string atasnya :D
			printf("\n");
		}else{
			for(j=strlen(arr[i])-1;j>=0;j--){
				for(k=0;k<spasi+1;k++){ //print spasinya 
					printf(" ");
				}
				printf("%c\n",arr[i][j]); //ini huruf yg mendatar ke bwh
			}
			spasi=spasi+2; // spasi ini untuk yg lurus karena mesti nambah 2 lagi dari spasi yg dibutuhkan si mendatar
		}
	
	}



//alhamdulillah:D
	return 0;
}
