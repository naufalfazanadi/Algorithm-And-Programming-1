#include "faisal.h"
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
samagakya..., jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
/* logic : dicari dulu maximal array n dan array m, ketika array maximal n genap dan maximal m genap maka
print sama, begitu juga sebaliknya :D */

int main(){ 
	int n,i; //indeks
	scanf("%d",&n); //input banyaknyak array int ke n
	int array[n];
	for(i=0;i<n;i++){
		scanf("%d",&array[i]); //input array[n] 
	}
	int m; //input banyaknya array int ke m
	scanf("%d",&m);
	int array1[m];
	for(i=0;i<m;i++){
		scanf("%d",&array1[i]); //input array m sejumlah m;
	}
	int maximal = maxi(n,array); //dipanggil fungsi maxinya :D
	int maximal1 = maxi1(m,array1); //dipanggil fungsi maxi1nya :D
	
	hasil(maximal,maximal1); //panggil prosedur untuk mengeprint :D

	return 0;
}
