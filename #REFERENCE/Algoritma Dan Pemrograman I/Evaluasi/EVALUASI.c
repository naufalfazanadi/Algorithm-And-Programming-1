#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan EVALUASI, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/
int main(){
	//variabel;
	int pjg,x1,y1,makan,x2,y2,n;
	int sisa;
	//input
	scanf("%d",&pjg);
	scanf("%d %d",&x1,&y1);
	scanf("%d",&makan);
	scanf("%d %d",&x2,&y2);
	scanf("%d",&n);
	int ray1[n];
	int langkah[100];
	int jauh[100];
	int i;
	for(i=0;i<n;i++){
	scanf("%d %d",&langkah[i],&jauh[i]);
	}
	
	for(i=0;i<n;i++){
	
	
		if(langkah[i]==4){
			if(jauh[i]>=y2-y1){
				y1=y1+jauh[i];
				if(pjg>makan){
				sisa=pjg-makan;
				}
			}
		}
	
	
		if(langkah[i]==1){
			if(jauh[i]>=x2-x1){
				x1=x1+jauh[i];
				if(pjg>makan){
				sisa=pjg-makan;
				}
			}
			
		}
	
	
		if(langkah[i]==3){
			if(jauh[i]>=y1-y2){
				y1=y1+jauh[i];
				if(pjg>makan){
				sisa=pjg-makan;
				}
				}
			
		}
	
	
	if(langkah[i]==2){
			if(jauh[i]>=x1-x2){
				x1=x1+jauh[i];
				if(pjg>makan){
				sisa=pjg-makan;
				}
			}
		}
		
	}
	

if(sisa>0){

printf("ya\n");
printf("%d\n",sisa);
printf("%d %d\n",x1,y1);
}else{
printf("tidak\n");
}


return 0;
} 