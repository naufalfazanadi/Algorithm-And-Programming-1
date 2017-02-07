//program alpabet angka
#include <stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan alfabet angka, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/

int main(){
//var yang dibutuhkan
char a,b,c,d,e,f;
char num1 = 'A' ,num2 = 'A',num3 = 'A';
char alfa1 = 'A';
char alfa2 = 'A';
char alfa3 = 'A';
int angka = 0,alfa = 0;

//input salah satu angka/alfabet	
scanf(" %c",&a);
//if jika angka maka tambah var angka utk perbandingan di akhir, lalu if untuk menjadikan angka tsb num1.
	if((a == '1') || (a == '2') || (a == '3') || (a == '4') || (a == '5') || (a == '6') || (a == '7') || (a == '8') || (a == '9') || (a == '0')){
		angka++;
			if(num1=='A'){
				num1 = a;
			}else if(num2=='A'){
				num2 = a;
			}else if(num3=='A'){
				num3 = a;
			}
//else jika bukan angka maka huruf, lalu if kembali utk masuk ke alfa1.
	}else{
		alfa++;
			if(alfa1=='A'){
				alfa1 = a;
			}else if(alfa2=='A'){
				alfa2 = a;
			}else if(alfa3=='A'){
				alfa3 = a;
			}
	}
	
scanf(" %c",&b);
	if((b == '1') || (b == '2') || (b == '3') || (b == '4') || (b == '5') || (b == '6') || (b == '7') || (b == '8') || (b == '9') || (b == '0')){
		angka++;
			if(num1=='A'){
				num1 = b;
			}else if(num2=='A'){
				num2 = b;
			}else if(num3=='A'){
				num3 = b;
			}
	}else{
		alfa++;
			if(alfa1=='A'){
				alfa1 = b;
			}else if(alfa2=='A'){
				alfa2 = b;
			}else if(alfa3=='A'){
				alfa3 = b;
			}
	}
	
scanf(" %c",&c);
	if((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9') || (c == '0')){
		angka++;
			if(num1=='A'){
				num1 = c;
			}else if(num2=='A'){
				num2 = c;
			}else if(num3=='A'){
				num3 = c;
			}
	}else{
		alfa++;
			if(alfa1=='A'){
				alfa1 = c;
			}else if(alfa2=='A'){
				alfa2 = c;
			}else if(alfa3=='A'){
				alfa3 = c;
			}
	}
	
scanf(" %c",&d);
	if((d == '1') || (d == '2') || (d == '3') || (d == '4') || (d == '5') || (d == '6') || (d == '7') || (d == '8') || (d == '9') || (d == '0')){
		angka++;
			if(num1=='A'){
				num1 = d;
			}else if(num2=='A'){
				num2 = d;
			}else if(num3=='A'){
				num3 = d;
			}
	}else{
		alfa++;
			if(alfa1=='A'){
				alfa1 = d;
			}else if(alfa2=='A'){
				alfa2 = d;
			}else if(alfa3=='A'){
				alfa3 = d;
			}
	}
	
scanf(" %c",&e);
	if((e == '1') || (e == '2') || (e == '3') || (e == '4') || (e == '5') || (e == '6') || (e == '7') || (e == '8') || (e == '9') || (e == '0')){
		angka++;
			if(num1=='A'){
				num1 = e;
			}else if(num2=='A'){
				num2 = e;
			}else if(num3=='A'){
				num3 = e;
			}
	}else{
		alfa++;
			if(alfa1=='A'){
				alfa1 = e;
			}else if(alfa2=='A'){
				alfa2 = e;
			}else if(alfa3=='A'){
				alfa3 = e;
			}
	}
	
scanf(" %c",&f);
	if((f == '1') || (f == '2') || (f == '3') || (f == '4') || (f == '5') || (f == '6') || (f == '7') || (f == '8') || (f == '9') || (f == '0')){
		angka++;
			if(num1=='A'){
				num1 = f;
			}else if(num2=='A'){
				num2 = f;
			}else if(num3=='A'){
				num3 = f;
			}
	}else{
		alfa++;
			if(alfa1=='A'){
				alfa1 = f;
			}else if(alfa2=='A'){
				alfa2 = f;
			}else if(alfa3=='A'){
				alfa3 = f;
			}
	}

//if jika angka==alfa maka tampilkan hasil yg sudah di proses.
if(angka==alfa){

//output tampilkan seluruh angkaa!!
printf("%c\n",alfa1);
printf("%c\n",num1);
printf("%c\n",alfa2);
printf("%c\n",num2);
printf("%c\n",alfa3);
printf("%c\n",num3);

}else{
	printf("tidak valid\n");
	}
	
	return 0;
}

//akhir program