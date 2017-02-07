//Program jam masuk moni
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas praktikum 2, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/

typedef struct{
		int jam;
		int menit;
		int detik
}waktu1;


//ini variabel yang dibutuhkan
int main(){

waktu1 j1;
waktu1 j2;
waktu1 j3;
int total1,total2,waktu;

//input jam masuk seharusnya
scanf("%d%d%d", &j1.jam, &j1.menit, &j1.detik);
//input jam massuk moni
scanf("%d%d%d", &j2.jam, &j2.menit, &j2.detik);

//proses merubah ke detik seluruhnya
total1=(j1.jam*3600)+(j1.menit*60)+j1.detik;
total2=(j2.jam*3600)+(j2.menit*60)+j2.detik;
waktu=total2-total1;
//membalikan kembali ke jam menit detik
j3.jam=waktu/3600;
j3.jam=(waktu%3600)/60;
j3.detik=((waktu%3600)%60);

//output
//if untuk penambah 0 ketika <=9
if (total2>total1){
	printf("terlambat\n");
	
	
	if (j3.jam>=10){
		if(j3.menit>=10){
			if(j3.detik>=10){
				printf("%d %d %d\n",j3.jam,j3.menit,j3.detik);
			}else{
				printf("%d %d 0%d\n,",j3.jam,j3.menit,j3.detik);
			}
		}else if(j3.menit<=10){
			if(j3.detik>=10){
				printf("%d 0%d %d\n",j3.jam,j3.menit,j3.detik);
			}else{
				printf("%d 0%d 0%d\n",j3.jam,j3.menit,j3.detik);
			}}
			}
	else if (j3.jam<=10){
		if(j3.menit>=10){
			if(j3.detik>=10){
				printf("0%d %d %d\n",j3.jam,j3.menit,j3.detik);
			}else{
				printf("0%d %d 0%d\n",j3.jam,j3.menit,j3.detik);
			}
		}else if(j3.menit<=10){
			if(j3.detik>=10){
				printf("0%d 0%d %d\n",j3.jam,j3.menit,j3.detik);
			}else{
				printf("0%d 0%d 0%d\n",j3.jam,j3.menit,j3.detik);
			}}
			}
			}
//output jika moni tidak terlambat
else{
	printf("tidak terlambat\n");
	}
	
return 0;

}

