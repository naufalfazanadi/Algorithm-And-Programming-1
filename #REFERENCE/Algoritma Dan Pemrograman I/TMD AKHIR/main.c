#include "faisal.h"
//Kode Hitungan Detektif Alpro
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
	//declar value from procedure function
	int hasil=angka(n,arr1);
	int digit=digat(hasil);
	char* hasil1 = stringx(hasil,digit);

	
	printf("%d\n",hasil); //print hasil
	for(i=0;i<tebal;i++){
		printf("\n"); //print spasi sebanyak tebal
	}
	if(digit==0){ //jika digit 0
		for(i=0;i<tebal;i++){ //print pola sebanyak tebal
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("0");
			}
			printf("\n");
		}
		for(i=0;i<tebal;i++){
			for(j=0;j<tebal;j++){
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
		for(i=0;i<tebal;i++){
			printf("\n");
		}
		for(i=0;i<tebal;i++){
			for(j=0;j<tebal;j++){
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
		for(i=0;i<tebal;i++){
			for(j=0;j<tebal;j++){
				printf(" ");
			}
			for(j=0;j<tebal;j++){
				printf("0");
			}
			printf("\n");
		}
	}else{
		baris1(tebal,digit,hasil1,hasil);
		baris2(tebal,digit,hasil1,hasil);
		baris3(tebal,digit,hasil1,hasil);
		baris4(tebal,digit,hasil1,hasil);
		baris5(tebal,digit,hasil1,hasil);
		
	}
	return 0;
}
