#include <stdio.h>
int main(){

	int a,b,c,d,e,f;
	int ganjil1 = 0,ganjil2 = 0,ganjil3 = 0;
	int genap1 = 0,genap2 = 0,genap3 = 0;
	int ganjil = 0;
	int genap = 0;
	scanf("%d",&a);
	if(a%2==1){
		ganjil++;
			if(ganjil1==0){
				ganjil1 = a;
			}
			else if(ganjil2==0){
				ganjil2 = a;
			}
			else if(ganjil3==0){
				ganjil3 = a;
			}
	}
	else{
		genap++;
			if(genap1==0){
				genap1 = a;
			}
			else if(genap2==0){
				genap2 = a;
			}
			else if(genap3==0){
				genap3 = a;
			}
	}
	
	scanf("%d",&b);
	if(b%2==1){
		ganjil++;
			if(ganjil1==0){
				ganjil1 = b;
			}
			else if(ganjil2==0){
				ganjil2 = b;
			}
			else if(ganjil3==0){
				ganjil3 = b;
			}
	}
	else{
		genap++;
			if(genap1==0){
				genap1 = b;
			}
			else if(genap2==0){
				genap2 = b;
			}
			else if(genap3==0){
				genap3 = b;
			}
	}
	
	scanf("%d",&c);
	if(c%2==1){
		ganjil++;
			if(ganjil1==0){
				ganjil1 = c;
			}
			else if(ganjil2==0){
				ganjil2 = c;
			}
			else if(ganjil3==0){
				ganjil3 = c;
			}
	}
	else{
		genap++;
			if(genap1==0){
				genap1 = c;
			}
			else if(genap2==0){
				genap2 = c;
			}
			else if(genap3==0){
				genap3 = c;
			}
	}
	
	scanf("%d",&d);
	if(d%2==1){
		ganjil++;
			if(ganjil1==0){
				ganjil1 = d;
			}
			else if(ganjil2==0){
				ganjil2 = d;
			}
			else if(ganjil3==0){
				ganjil3 = d;
			}
	}
	else{
		genap++;
			if(genap1==0){
				genap1 = d;
			}
			else if(genap2==0){
				genap2 = d;
			}
			else if(genap3==0){
				genap3 = d;
			}
	}
	
	scanf("%d",&e);
	if(e%2==1){
		ganjil++;
			if(ganjil1==0){
				ganjil1 = e;
			}
			else if(ganjil2==0){
				ganjil2 = e;
			}
			else if(ganjil3==0){
				ganjil3 = e;
			}
	}
	else{
		genap++;
			if(genap1==0){
				genap1 = e;
			}
			else if(genap2==0){
				genap2 = e;
			}
			else if(genap3==0){
				genap3 = e;
			}
	}
	
	scanf("%d",&f);
	if(f%2==1){
		ganjil++;
			if(ganjil1==0){
				ganjil1 = f;
			}
			else if(ganjil2==0){
				ganjil2 = f;
			}
			else if(ganjil3==0){
				ganjil3 = f;
			}
	}
	else{
		genap++;
			if(genap1==0){
				genap1 = f;
			}
			else if(genap2==0){
				genap2 = f;
			}
			else if(genap3==0){
				genap3 = f;
			}
	}


	if(ganjil==genap){
	printf("%d\n",genap1);
	printf("%d\n",ganjil1);
	printf("%d\n",genap2);
	printf("%d\n",ganjil2);
	printf("%d\n",genap3);
	printf("%d\n",ganjil3);
	}
	else{
	printf("tidak valid\n");
	}
	
	return 0;
	/*napjil14- saya Alifia Chinka Rizal Muhammad bersumpah demi Allah mengerjakan kuis ini dengan jujur*/
}
