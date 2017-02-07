//POLA KUCING
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas praktikum 4, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/
int main(){
	int i,j,n;//Variabel
	//input besar!
	scanf("%d",&n);
	//3 baris awal pertama
	for(i=0;i<n;i++){
		for(j=n+1;j>i;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(j=0;j<n*2;j++){
			printf(" ");
		}
		for(j=0;j<n-3;j++){
			printf(" ");
		}
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
	
	
	printf("\n");
	}
	//baris ke 2 yang penuh dengan bintang standar (kotak)
	for(i=0;i<n;i++){
		for(j=0;j<(n*7)+1;j++){
		printf("*");
		}
		printf("\n");
	}
	//baris ke 3 yang agak mengecil
	for(i=0;i<n;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(j=n;j>i;j--){
			printf("*");
		}
		for(j=0;j<(n*5)+1;j++){
			printf("*");
		}
		for(j=n;j>i;j--){
			printf("*");
		}
		
		printf("\n");
	}
	//baris ke 4 baris akhir
	for(i=0;i<n;i++){
	
		for(j=0;j<(n*2)+1;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf(" ");
		}
		for(j=n;j>i;j--){
			printf("*");
		}
		for(j=1;j<n-2;j++){
			printf("*");
		}
		for(j=n;j>i;j--){
			printf("*");
		}
	printf("\n");
	}

	return 0;
}
