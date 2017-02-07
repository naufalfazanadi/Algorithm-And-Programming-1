#include<stdio.h>
#include<string.h>
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
timpiyu, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
int main(){
	int n,i,j,k=0; //deklarasi indeks, counter dsb.
	scanf("%d",&n); // input banyaknya string
	int sama=0;
	char str[n][100];
	for(i=0;i<n;i++){ //input string sebanyak n
		scanf("%s",&str[i]);
	}
	int indeks;
	sama=0;
	for(i=0;i<n;i++){ //for ini utk mengecek apakah ada yang sama.
		if(i<n){
			for(j=i+1;j<n;j++){
				if(strcmp(str[i],str[j])==0){
					sama=sama+1;
				}
			}
		}
	}
	int jumlah=0; //jumlah

	for(i=0;i<n;i++){ //penghitungan jumlah dan penyatuan string
		jumlah=jumlah+strlen(str[i]);
		if(i<n-1){
			strcat(str[0],str[i+1]); //penyatuan string
		}else{
			printf("\0");
		}
	}
	k=0;
	indeks=jumlah/2; //indeks untuk yg turun
	
	if(jumlah%2==0 && sama==0){ //output jika kondisi sesuai
		printf("valid\n"); 
		for(i=0;i<jumlah/2;i++){ //print lurus
			printf("%c",str[0][i]); //print char sebanyak jumlah/2
		}
		printf("\n");
		int spasi=jumlah/2;
		for(i=0;i<jumlah/2;i++){ 
			for(j=spasi-1;j>i;j--){ //print spasi nyaaa
				printf(" ");
			}
			for(j=0;j<1;j++){ //print char yg menurun
				printf("%c",str[0][indeks]);
				indeks++;
			}
			printf("\n");
		}
	}else{
		printf("tidak valid\n");
	}
	return 0;
}