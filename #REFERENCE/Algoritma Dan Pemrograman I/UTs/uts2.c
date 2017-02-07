#include<stdio.h>
//ars2214
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan UTS, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/
int main(){

	int i,j;
	int n;
	//input jumlah elemen
	scanf("%d",&n);
	
	int ray1[n];
	//input array
	
	for(i=0;i<n;i++){
		scanf("%d",&ray1[i]);
	}
	//mencari nilai max
	int max=0;
	for(i=0;i<n/2;i++){
		if(ray1[i]>max){
			max=ray1[i];
		}
	}
	//int mencari nilai min
	int min=99;
	for(i=n-1;i>=n-(n/2);i--){
		if(ray1[i]<min){
			min=ray1[i];
		}
	}
	//jika max sama dengan min
	if(max==min){
		printf("valid\n");
		printf("%d\n",max);
	}else{ //atau tidak valid
		printf("tidak valid\n");
		printf("%d\n",max);
		printf("%d\n",min);
	}

return 0;
}
