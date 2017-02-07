//program penghitung total ganjil
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas praktikum 2, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/

int main(){
//ini variabel
int n1,n2,n3,n4,n5,n6,g1,g2,g3,g4,g5,g6,jmlh;

scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
scanf("%d",&n4);
scanf("%d",&n5);
scanf("%d",&n6);

//if jika ganjil maka ambil angka tsb
if ((n1%2)==1){
g1=n1;
}else{
g1=0;
}

if ((n2%2)==1){
g2=n2;
}else{
g2=0;
}

if ((n3%2)==1){
g3=n3;
}else{
g3=0;
}

if ((n4%2)==1){
g4=n4;
}else{
g4=0;
}

if ((n5%2)==1){
g5=n5;
}else{
g5=0;
}

if ((n6%2)==1){
g6=n6;
}else{
g6=0;
}
//jumlah angka ganjil yang diambil
jmlh=g1+g2+g3+g4+g5+g6;
//output jumlah ditambah valid/tdk valid ketika jumlah tsb ganjil/genap
if ((jmlh%2)==1){
printf("%d\n",jmlh);
printf("valid\n");
}else{
printf("%d\n",jmlh);
printf("tidak valid\n");
}
return 0;

}
