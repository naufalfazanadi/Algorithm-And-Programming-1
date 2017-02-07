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
			if(i==0){
				for(j=0;j<strlen(arr[i]);j++){
					for(k=0;k<spasi;k++){
						printf(" ");
					}
					for(k=0;k<j;k++){
						printf(" ");
					}
					printf("%c",arr[i][j]);
					printf("\n");
				}

			}else if(i%2==0){
				spasi=spasi+strlen(arr[i-1]);
				for(j=0;j<strlen(arr[i]);j++){
					for(k=0;k<spasi;k++){
						printf(" ");
					}
					for(k=0;k<j;k++){
						printf(" ");
					}
					printf("%c",arr[i][j]);
					printf("\n");
				}
				
			}else{
				spasi=spasi+strlen(arr[i-1]);
				for(j=0;j<spasi;j++){
					printf(" ");
				}
				for(j=strlen(arr[i])-1;j>=0;j--){ //print huruf perhuruf
					printf("%c",arr[i][j]);
				}
				
				
				printf("\n");
			}
		}
	


//alhamdulillah:D
	return 0;
}
