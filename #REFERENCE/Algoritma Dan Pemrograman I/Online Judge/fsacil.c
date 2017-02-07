//Program Kelipatan besar kecil. Bismillah
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan FSACIL, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/
int main(){
float a,b,c;
int d,e,f,z,x,y,i,o,p;
int dk=0,ek=0,fk=0;
int az,bx,cy;

scanf("%f",&a);
z=a;
i=(a-z)*1000;
if(i%2==1){i++;}
az=i/10;

scanf("%f",&b);
x=b;
o=(b-x)*1000;
if(o%2==1){o++;}
bx=o/10;


/* 33.22
33

33.22-33=0.22 // 0.21 */
scanf("%f",&c);
y=c;
p=(c-y)*1000;
if(p%2==1){p++;}
cy=p/10;

scanf("%d",&d);
scanf("%d",&e);
scanf("%d",&f);

if ((az%d==0) && (z%d==0)){
	dk++;
}
if ((bx%d==0) && (x%d==0)){
	dk++;
}
if ((cy%d==0) && (y%d==0)){
	dk++;
}

if ((az%e==0) && (z%e==0)){
	ek++;
}
if ((bx%e==0) && (x%e==0)){
	ek++;
}
if ((cy%e==0) && (y%e==0)){
	ek++;
}

if ((az%f==0) && (z%f==0)){
	fk++;
}
if ((bx%f==0) && (x%f==0)){
	fk++;
}
if ((cy%f==0) && (y%f==0)){
	fk++;
}

if((dk>=2)||(ek>=2)||(fk>=2)){
	printf("valid\n");
}else{
	printf("tidak valid\n");


}
return 0;
}

  