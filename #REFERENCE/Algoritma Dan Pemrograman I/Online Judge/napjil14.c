//program genap ganjil
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan napjil14, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/
int main(){

int a,b,c,d,e,f ;
int genap=0,ganjil=0,ge1=0,ge2=0,ge3=0,ganjil1=0,ganjil2=0,ganjil3=0;

scanf("%d",&a);
if (a%2==1){
	ganjil++;
		if(ganjil1==0){
		ganjil1=a;
		}else if (ganjil2==0){
		ganjil2=a;
		}else if (ganjil3==0){
		ganjil3=a;
		}
}else{
	genap++;
		if(ge1==0){
		ge1=a;
		}else if(ge2==0){
		ge2=a;
		}else if (ge3==0){
		ge3=a;
		}
}

scanf("%d",&b);
if (b%2==1){
	ganjil++;
		if(ganjil1==0){
		ganjil1=b;
		}else if (ganjil2==0){
		ganjil2=b;
		}else if (ganjil3==0){
		ganjil3=b;
		}
}else{
	genap++;
		if(ge1==0){
		ge1=b;
		}else if(ge2==0){
		ge2=b;
		}else if (ge3==0){
		ge3=b;
		}
}


scanf("%d",&c);
if (c%2==1){
	ganjil++;
		if(ganjil1==0){
		ganjil1=c;
		}else if (ganjil2==0){
		ganjil2=c;
		}else if (ganjil3==0){
		ganjil3=c;
		}
}else{
	genap++;
		if(ge1==0){
		ge1=c;
		}else if(ge2==0){
		ge2=c;
		}else if (ge3==0){
		ge3=c;
		}
}


scanf("%d",&d);
if (d%2==1){
	ganjil++;
		if(ganjil1==0){
		ganjil1=d;
		}else if (ganjil2==0){
		ganjil2=d;
		}else if (ganjil3==0){
		ganjil3=d;
		}
}else{
	genap++;
		if(ge1==0){
		ge1=d;
		}else if(ge2==0){
		ge2=d;
		}else if (ge3==0){
		ge3=d;
		}
}


scanf("%d",&e);
if (e%2==1){
	ganjil++;
		if(ganjil1==0){
		ganjil1=e;
		}else if (ganjil2==0){
		ganjil2=e;
		}else if (ganjil3==0){
		ganjil3=e;
		}
}else{
	genap++;
		if(ge1==0){
		ge1=e;
		}else if(ge2==0){
		ge2=e;
		}else if (ge3==0){
		ge3=e;
		}
}


scanf("%d",&f);
if (f%2==1){
	ganjil++;
		if(ganjil1==0){
		ganjil1=f;
		}else if (ganjil2==0){
		ganjil2=f;
		}else if (ganjil3==0){
		ganjil3=f;
		}
}else{
	genap++;
		if(ge1==0){
		ge1=f;
		}else if(ge2==0){
		ge2=f;
		}else if (ge3==0){
		ge3=f;
		}
}

if (ganjil==genap){
	printf("%d\n",ge1);
	printf("%d\n",ganjil1);
	printf("%d\n",ge2);
	printf("%d\n",ganjil2);
	printf("%d\n",ge3);
	printf("%d\n",ganjil3);
}else{
	printf("tidak valid\n");
}
return 0;
}