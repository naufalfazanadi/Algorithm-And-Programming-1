#include "faisal.h"
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
timpiyu, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
int main(){
	int n,i; // deklarasi
	scanf("%d",&n); //input 
	char str[n][100];
	for(i=0;i<n;i++){ //input sebanyak n
		scanf("%s",&str[i]);
	}
	int m;
	scanf("%d",&m); //input jumlah langkah
	int x1[100];
	int y1[100];
	for(i=0;i<m;i++){ //input x1 y1
		scanf("%d",&x1[i]);
		scanf("%d",&y1[i]);
	}
	hasil(n,str,m,x1,y1); //manggil prosedur

	return 0;
}
