#include "faisal.h"
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
samagakya..., jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
int maxi(int n,int array[n]){ //ini adalah fungsi,fungsi maximal n;
	int i,j; //ini paririmbon untuk for 
	int max=0; //var max :D
	for(i=0;i<n;i++){ 
		if(array[i]>max){ //jika array lebih dari max makaaa max=array tersebut
			max=array[i];
		}
	}
	
	return max; //mengembalikan max
}
int maxi1(int m,int array1[m]){ //ini adalah fungsi,fungsi maximal n;
	int i,j; //ini paririmbon untuk for
	int max1=0; //var max :D
	for(i=0;i<m;i++){ 
		if(array1[i]>max1){ //jika array lebih dari max makaa max= array tersebut
			max1=array1[i];
		}
	}
	
	
	return max1; //melempar max
}
void hasil(int  maximal,int maximal1){ //ini prosedur final dan print
	if(maximal%2==0){ //jika maximal array n genap 
		if(maximal1%2==0){ //jika genap juga
			printf("sama\n"); //maka sama
		}else{
			printf("tidak sama\n"); //jika n genap m tidak = tidak sama
		}
	}else{ //else n ganjil
		if(maximal1%2==1){ //jika ganjil oge  
			printf("sama\n"); //sama
		}else{ //else tidak sama
			printf("tidak sama\n");
		}
	}
}