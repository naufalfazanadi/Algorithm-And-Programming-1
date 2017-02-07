#include<stdio.h>

/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan tugas praktikum 3, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/

int main(){

int i,j,n;

scanf("%d",&n);

for(i=0;i<n*2;i++){
	for(j=0;j<=i;j++){
	printf("*");
	}
	for(j=(n*2)-1;j>i;j--){
	printf(" ");
	}
	for(j=(n*2)-1;j>i;j--){
	printf(" ");
	}
	for(j=0;j<=i;j++){
	printf("*");
	}
	
	for(j=1;j<=i;j++){
	printf("*");
	}
	for(j=(n*2)-1;j>i;j--){
	printf(" ");
	}
	for(j=(n*2)-1;j>i;j--){
	printf(" ");
	}
	for(j=0;j<=i;j++){
	printf("*");
	}
	
	printf("\n");
}

for(i=0;i<n;i++){
	for(j=0;j<=n*2;j++){
	printf(" ");
	}
	for(j=0;j<n;j++){
		printf("*");
	}
	for(j=0;j<n;j++){
	printf("*");
	}
	for(j=0;j<n-3;j++){
	printf("*");
	}
	for(j=0;j<n;j++){
	printf("*");
	}
	
	
printf("\n");
	}
	
for(i=0;i<n;i++){
	for(j=0;j<=n*2;j++){
	printf(" ");
	}
	for(j=1;j<n*2;j++){
	printf(" ");
	}
	for(j=0;j<=i;j++){
	printf(" ");
	}
	for(j=0;j<n-3;j++){
	printf(" ");
	}
	for(j=n;j>i;j--){
	printf("*");
	}
	
	
printf("\n");
	}

return 0;
}