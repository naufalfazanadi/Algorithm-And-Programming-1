//program float 2 2014
#include<stdio.h>

/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan float214, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/

int main(){

//variabel yang dibutuhkan

float a,b,c,d;
float besar=0,kecil=0;
scanf("%f %f %f %f",&a,&b,&c,&d);

//if untuk mencari angka terbesar
if(a>b && a>c && a>d){
	if(besar==0){
	besar=a;}
}else if(b>a && b>c && b>d){
	if(besar==0){
	besar=b;}
}else if(c>a && c>b && c>d){
	if(besar==0){
	besar=c;}
}else if(d>a && d>b && d>c){
	if(besar==0){
	besar=d;}
}
//if untuk mencari angka terkecil

if(a<b && a<c && a<d){
	if(kecil==0){
	kecil=a;}
}else if(b<a && b<c && b<d){
	if(kecil==0){
	kecil=b;}
}else if(c<a && c<b && c<d){
	if(kecil==0){
	kecil=c;}
}else if(d<a && d<b && d<c){
	if(kecil==0){
	kecil=d;}
}
//if untuk mengurutkan jika angka besar sudah ada dan angka kecil sudah maka angka selanjutnya
if(a==besar){
	if(b==kecil){
	printf("%.2f %.2f\n",c,d);
	}else if(c==kecil){
	printf("%.2f %.2f\n",b,d);
	}else if(d==kecil){
	printf("%.2f %.2f\n",b,c);
	}
}
//if untuk mengurutkan jika angka besar sudah ada dan angka kecil sudah maka angka selanjutnya
if(b==besar){
	if(a==kecil){
	printf("%.2f %.2f\n",c,d);
	}else if(c==kecil){
	printf("%.2f %.2f\n",a,d);
	}else if(d==kecil){
	printf("%.2f %.2f\n",a,c);
	}
}
//if untuk mengurutkan jika angka besar sudah ada dan angka kecil sudah maka angka selanjutnya
if(c==besar){
	if(a==kecil){
	printf("%.2f %.2f\n",b,d);
	}else if(b==kecil){
	printf("%.2f %.2f\n",a,d);
	}else if(d==kecil){
	printf("%.2f %.2f\n",a,b);
	}
}
//if untuk mengurutkan jika angka besar sudah ada dan angka kecil sudah maka angka selanjutnya
if(d==besar){
	if(a==kecil){
	printf("%.2f %.2f\n",b,c);
	}else if(c==kecil){
	printf("%.2f %.2f\n",a,b);
	}else if(b==kecil){
	printf("%.2f %.2f\n",a,c);
	}
}	
return 0;
}
