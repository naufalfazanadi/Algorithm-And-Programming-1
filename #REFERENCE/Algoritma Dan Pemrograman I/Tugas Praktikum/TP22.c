#include <stdio.h>
/*Saya Azis Ramdhan Darojat tidak melakukan kecurangan seperti yang telah dispesifikasikan pada 
mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas Praktikkum 2, 
jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin*/

int main(){
	
	//Mendeklarasikan variabel untuk menampung nilai Jam Menit dan Detik dengan tipe bilangan bulat(integer)//
	int x1, y1, z1, x2, y2, z2, v1, v2;//x adalah variabel yang menyatakan 'jam', y->menit dan z->detik//
	//Meminta masukkan dari user berupa nilai dari variabel yang menyatakan 'Jam', 'Menit' dan 'Detik'//
	scanf("%d",&x1);
	scanf("%d",&y1);
	scanf("%d",&z1);
	scanf("%d",&x2);
	scanf("%d",&y2);
	scanf("%d",&z2);
	
	v1=(x1*3600)+(y1*60)+z1;//Proses untuk menghitung Jam masuk kampus yang dikonversikan kedalam detik//
	v2=(x2*3600)+(y2*60)+z2;//Proses untuk menghitung Jam datang Mahasiswa yang dikonversikan kedalam detik//

	/*Pemilihan jika Jam Datang Mahasiswa yang sudah dikonversi lebih besar dari Jam Masuk Kampus yang sudah dikonversi 
	(Ketika dikurangkan menghasilkan nilai lebih dari nol)Maka Mahasiswa terlambat dan jika hasilnya kurang dari atau sama dengan nol
	maka mahasiswa tidak terlambat*/
	if ((v2-v1)>0){
	printf("terlambat\n");
	/*Pemilihan apakah mahasiswa tersebut terlambat dalam hitungan jam,
	dalam hitungan menit atau hanya dalam hitungan detik*/
	if ((v2-v1)>=3600){
	printf("%.2d %.2d %.2d\n",(v2-v1)/3600, ((v2-v1)%3600)/60, ((v2-v1)%3600)%60);
	}else if((v2-v1)>=60&&(v2-v1)<3600){
	printf("00 %.2d %.2d\n",((v2-v1)%3600)/60, ((v2-v1)%3600)%60);
	}else{
	printf("00 00 %.2d\n",((v2-v1)%3600)%60);}} else {
	printf("tidak terlambat\n"); 
	} 
	
return 0;
}
//"0%d" cara lain untuk menambahkan '0' sebelum nilai variabel int dipanggil//
