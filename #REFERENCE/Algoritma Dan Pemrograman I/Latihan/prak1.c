//6var abcdef jika ada angka jumlah angka ganjil melebihi angka genap = valid

#include<stdio.h>

int main(){

int genap=0,ganjil=0,a,b,c,d,e,f;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
scanf("%d",&f);


if(a%2==1){
ganjil++;
}else{
genap++;}

if(b%2==1){
ganjil++;
}else{
genap++;}

if(c%2==1){
ganjil++;
}else{
genap++;}

if(d%2==1){
ganjil++;
}else{
genap++;}

if(e%2==1){
ganjil++;
}else{
genap++;}

if(ganjil > genap){
printf("Valid");
}else{
printf("Invalid");
}
return 0;

}
