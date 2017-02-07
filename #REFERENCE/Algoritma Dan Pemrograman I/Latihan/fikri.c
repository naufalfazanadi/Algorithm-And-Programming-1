#include <stdio.h>
/*Saya Fikry Al Farisi Muslim tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
[nama evaluasi], jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/

int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int jumlah_ribuan;
	int jumlah_lainnya;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	
	if(( a > 999 ) && ( a < 9999 )){
		jumlah_ribuan++;
}else{
		jumlah_lainnya++;
}
	if(( b > 999 ) && ( b < 9999 )){
		jumlah_ribuan++;
}else{
		jumlah_lainnya++;
}
	if(( c > 999 ) && ( c < 9999 )){
		jumlah_ribuan++;
}else{
		jumlah_lainnya++;
}
	if(( d > 999 ) && ( d < 9999 )){
		jumlah_ribuan++;
}else{
		jumlah_lainnya++;
}
	if(( e > 999 ) && ( e < 9999 )){
		jumlah_ribuan++;
}else{
		jumlah_lainnya++;
}
	if(( f > 999 ) && ( f < 9999 )){
		jumlah_ribuan++;
}else{
		jumlah_lainnya++;
}

	if(jumlah_ribuan>=3){
	printf("ribuan 3 atau lebih\n");
	}else{
		printf("tidak valid\n");
	}
	
	return 0;
}