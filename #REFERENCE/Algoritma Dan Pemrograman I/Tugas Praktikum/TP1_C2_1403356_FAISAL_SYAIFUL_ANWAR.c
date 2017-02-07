/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan tugas praktikum 1, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/
#include<stdio.h>
//program penghitung sisa makanan piyu

int main()
{
	//ini adalah variabel yang dibutuhkan 
	int hari,makanan,teman,out1,out2; 
	
	//ini adalah input untuk menghitung makanan piyu (3 variabel)
	scanf("%d \n %d \n %d",&makanan , &hari, &teman); 
	
	makanan >0;
	hari>1;
	teman>1;
		
	//ini proses operasi matematika
	out1 = makanan-(3*hari);
	out2 = out1/teman;
	
	//ini output yang diinginkan oleh program
	printf("%d\n",out1);
	printf("%d",out2);
	
	return 0;
	
}
