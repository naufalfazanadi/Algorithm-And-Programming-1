 #include <stdio.h>
 
 /*Saya Fidela Zhafirah tidak melakukan kecurangan seperti
yang telah dispesifikasikan pada mata kuliah
Algoritma dan Pemrograman I dalam mengerjakan
Soal Latihan Alpro, jika saya melakukan kecurangan
maka Allah/Tuhan adalah saksi saya, dan saya
bersedia menerima hukumanNya. Aamiin.*/
 
int main()
{
	char a;
	char b;
	char c;
	char d;
	char e;
	char f;
	char z,x;
	
	scanf(" %c", &a);
	scanf(" %c", &b);
	scanf(" %c", &c);
	scanf(" %c", &d);
	scanf(" %c", &e);
	scanf(" %c", &f);
	
	if((a == '1') || (a == '2') || (a == '3') || (a == '4') || (a == '5') || (a == '6') || (a == '7') || (a == '8') || (a == '9') || (a == '0')){
		a=z;
	}else{
		a=x;
	}
	
	if((b == '1') || (b == '2') || (b == '3') || (b == '4') || (b == '5') || (b == '6') || (b == '7') || (b == '8') || (b == '9') || (b == '0')){
		b=z;
	}else{
		b=x;
	}
	
	if((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6') || (c == '7') || (c == '8') || (c == '9') || (c == '0')){
		c=z;
	}else{
		c=x;
	}
	
	if((d == '1') || (d == '2') || (d == '3') || (d == '4') || (d == '5') || (d == '6') || (d == '7') || (d == '8') || (d == '9') || (d == '0')){
		d=z;
	}else{
		d=x;
	}
	
	if((e == '1') || (e == '2') || (e == '3') || (e == '4') || (e == '5') || (e == '6') || (e == '7') || (e == '8') || (e == '9') || (e == '0')){
		e=z;
	}else{
		e=x;
	}
	
	if((f == '1') || (f == '2') || (f == '3') || (f == '4') || (f == '5') || (f == '6') || (f == '7') || (f == '8') || (f == '9') || (f == '0')){
		f=z;
	}else{
		f=x;
	}
	
	
	if((a == z) && (b == x) && (c == z) && (d == x) && (e == z) && (f == x)){
		printf("valid\n");
	}
	else if((a == x) && (b == z) && (c == x) && (d == z) && (e == x) && (f == z)){
		printf("valid\n");
	}else{
		printf("tidak valid\n");
	}
	

return 0;
}
