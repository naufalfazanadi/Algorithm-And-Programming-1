//PIYU SEKOLAH!!!!!
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas praktikum 5, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/

int main(){
	//inputan
	int i,j;
	int x1,y1;
	int n;
	char arah[100];
	int langkah[100];
	int anak[100];
	//Koordinat piyu awal
		scanf("%d %d",&x1,&y1);
		scanf("%d",&n);
	int x3[100];
	int y3[100];
	int counter[100];
	for(i=1;i<=n;i++){
	scanf("%d",&anak[i]);
	counter[i]=0; //Merubah counter jadi 0 kembali;
	x3[i]=x1;	//merubah x3,y3 jadi 0 kembali;
	y3[i]=y1;
		for(j=1;j<=anak[i];j++){
			scanf(" %c %d",&arah[j],&langkah[j]);
				if(arah[j]=='H'){
				x3[i]=x3[i]+langkah[j];
					if(langkah[j]>0){
					counter[i]=counter[i]+langkah[j];
					}else{
					counter[i]=counter[i]+(langkah[j]*-1);
					}
				}
				if(arah[j]=='V'){
				y3[i]=y3[i]+langkah[j];
					if(langkah[j]>0){
					counter[i]=counter[i]+langkah[j];
					}else{
					counter[i]=counter[i]+(langkah[j]*-1);
					}
			}
		}
	}

	//hasil telepon piyu dari n ke 1
	for(i=n;i>=1;i--){
		printf("%d\n",i);
		printf("%d %d\n",x3[i],y3[i]);
		printf("%d\n",counter[i]);
	}
	//hasil koordinaat lapangan
	printf("koordinat lapangan\n");

	int max=0;

	for(i=1;i<=n;i++){
		if(counter[i]>max){
			max=counter[i];
		}
	}
	for(i=1;i<=n;i++){
		if(max==counter[i]){
			printf("%d %d\n",x3[i],y3[i]);
			printf("%d\n",max);
		}
	}

	return 0;
}
