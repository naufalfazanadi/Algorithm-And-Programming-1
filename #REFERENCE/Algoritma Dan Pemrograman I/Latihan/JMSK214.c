//Program jam masuk moni
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas praktikum 2, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/

//ini variabel yang dibutuhkan
int main(){
int j,m,d,j2,m2,d2,total1,total2,waktu;
int j3,d3,m3;
//input jam masuk seharusnya
scanf("%d %d %d",&j,&m,&d);
//input jam massuk moni
scanf("%d %d %d",&j2,&m2,&d2);

//proses merubah ke detik seluruhnya
total1=(j*3600)+(m*60)+d;
total2=(j2*3600)+(m2*60)+d2;
waktu=total2-total1;
//membalikan kembali ke jam menit detik
j3=waktu/3600;
m3=(waktu%3600)/60;
d3=((waktu%3600)%60);

//if untuk penambah 0 ketika <=9
if (total2>total1){
	printf("terlambat\n");
	if (j3>=10){
		if(m3>=10){
			if(d3>=10){
			printf("%d %d %d \n",j3,m3,d3); //jika seluruh angka variabel j3,m3,d3 lebih dr 9
		}printf("%d %d 0%d \n",j3,m3,d3); //jika seluruh angka variabel j3,m3 lebih dr 9
	}printf("%d 0%d 0%d\n",j3,m3,d3); //jika seluruh angka variabel j3 lebih dr 9
	}else{
	printf("0%d 0%d 0%d\n",j3,m3,d3);
	}
}else{
	printf("tidak terlambat\n");
	}
return 0;
}
