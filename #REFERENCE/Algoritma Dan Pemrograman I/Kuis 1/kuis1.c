//program kelipatan angka
#include<stdio.h>
 
/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Kel22014, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/

int main(){
//variabel 3 integer
	int a,b,c;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

if ((a>0 && a<1000) &&(b>0 && b<1000) && (c>0 && c<1000)){
//if jika bilangan a dan b berkelipatan
if (a%b==0){
	// if nested jika c dan b juga berkelipatan
	if (c%b==0){
	printf("%d %d\n",a,b);
	printf("%d %d\n",c,b);
	//jika c dan b tidak berkelipatan maka hanya a dan b
	}else{
	printf("%d %d\n",a,b);
	}
// if jika c dan b berkelipatan begitu juga  a dan b	
}else if (c%b==0){
	if (a%b==0){
	printf("%d %d\n",c,b);
	printf("%d %d\n",a,b);
	}else{
	printf("%d %d\n",c,b);
}

// if jika b dan a berkelipatan begitu juga  c dan a	
} else if (b%a==0){
	if (c%a==0){
	printf("%d %d\n",b,a);
	printf("%d %d\n",c,a);
	}else{
	printf("%d %d\n",b,a);
}
	
// if jika a dan c berkelipatan begitu juga  b dan c
}else if (c%a==0){
	if (b%a==0){
	printf("%d %d\n",a,c);
	printf("%d %d\n",b,c);
	}else{
	printf("%d %d\n",a,c);
	}
	// if jika c dan b berkelipatan begitu juga  a dan b
}else if (b%c==0){
	if (a%c==0){
	printf("%d %d\n",b,c);
	printf("%d %d\n",a,c);
	}else{
	printf("%d %d\n",b,c);
}	
// if jika b dan c berkelipatan begitu juga  a dan c
}else if (a%c==0){
	if (b%c==0){
	printf("%d %d\n",b,c);
	printf("%d %d\n",a,c);
	}else{
	printf("%d %d\n",b,c);
	}
}	
}	
return 0;

}






/*if (a>b && a%b==0
  if (b>a && b%a==0)
  dst
  dst
  dst
*/