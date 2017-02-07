#include "header.h"
/*Saya Faisal tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
remidial1, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
int main(){
	int n,i;
	//input biasaa :D
	scanf("%d",&n);
	char kata[n][100];
	for(i=0;i<n;i++){ //input string
		scanf("%s",kata[i]);
	}
	hasil(n,kata);
	return 0;
}