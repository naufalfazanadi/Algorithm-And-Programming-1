//Nasgor!!!!!!
#include<stdio.h>
/*Saya Faisal tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan Tugas praktikum 6, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.*/

//array bungkusan!!
typedef struct{
	int harga;
	int level;
}box;
int main(){
	//deklarasi bungkusan
	box awal[100];

	int i,j=0;
	int status;

	int max=1;
	int maxh=1;
	i=0;
	char pil;
	
	//pancingan input awal
	scanf("%d",&awal[i].level);
	while(awal[i].level!=0){
		scanf("%d",&awal[i].harga);
		scanf("%d",&awal[i+1].level);
		
	i++;
	j++;
	}
	
	i=0;
	scanf(" %c",&pil);
	//tentukan max A atau max B
	while(i<j){
	if(pil=='A'){
		if(awal[i].level>max){
			max=awal[i].level;
		}
	}if(pil=='B'){
		if(awal[i].harga>maxh){
			maxh=awal[i].harga;
			}
		}
	i++;
	}
	
	status=1;
	i=0;
	//print output
	while(i<j && status!=0){
		if(pil=='A'){
			if(max==awal[i].level){
			printf("%d\n",max);
			printf("%d\n",awal[i].harga);
			status=0;
			}
		}if(pil=='B'){
			if(maxh==awal[i].harga){
			printf("%d\n",awal[i].level);
			printf("%d\n",maxh);
			status=0;
			}
		}
		i++;
	}
	//jika tidak
	if(pil!='A' && pil!='B'){
	printf("tidak ada yang dicari\n");
	}
	
	
return 0;
}
