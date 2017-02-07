#include "faisal.h"
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
STRKOE, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
int main(){
	int i; //indeks
	int n; //banyaknya string
	scanf("%d",&n); // input jumlah string
	char array[n][100]; //deklras array string
	for(i=0;i<n;i++){
		scanf("%s",&array[i]); //input arraystring :D
	}
	
	int status=proses(n,array); //memanggil fungsi status apakah samaa konsonan dan vokal :d
	
	hasil(status,n,array); //memanggil prosedur hasil jadi tinggal ditampilkan saja :D
	return 0;
}