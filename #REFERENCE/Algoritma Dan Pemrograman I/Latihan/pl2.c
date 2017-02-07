#include<stdio.h>
//polasif2
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan UTS, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/
int main(){

	int i,j,n;

	scanf("%d",&n);
	//wilayah 1
	for(i=0;i<n;i++){
		//spasi
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		//kotak kotak sesuai dengan contoh
		for(j=0 ;j<= i; j++){
			printf("*");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	//wilayah2

	for(i=0;i<n;i++){
		//kotak kotak yang diinginkan
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=0;j<n*2;j++){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	//wilayah 3;
	for(i=0;i<n;i++){
		//kotak kotak yang diinginkan
		for(j=0 ;j< i; j++){
			printf(" ");
		}for(j=n-1;j>=i;j--){
			printf("*");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		for(j=n-1;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}

		


return 0;
}
