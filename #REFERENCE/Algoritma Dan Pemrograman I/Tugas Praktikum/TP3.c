#include<stdio.h>

	typedef struct{
		int jam;
		int menit;
		int detik;
	}waktu;
	typedef struct{
		int jam1;
		int  menit1;
		int detik1;
	}waktu1;

int main(){

	waktu pergi;
	waktu1 mobil1,bus1,pesawat1;
	int mbl,hari,mobil,bus,pesawat,sampai,totalmobil,totalbus,totalpesawat,waktuplg;
	int totalmobil1,totalbus1,totalpesawat1;
	int hasil0,hasil;
	scanf("%d",&mbl);
	scanf("%d",&hari);
	scanf("%d %d %d",&pergi.jam,&pergi.menit,&pergi.detik);
	
	waktuplg=(pergi.jam*3600)+(pergi.menit*60)+pergi.detik;
	mobil=(40*3600)+(30*60)+18;
	bus=(50*3600)+(20*60)+30;
	pesawat=(7*3600)+(25*60)+40;
	
	switch(mbl){
	case 1:{
		printf("mobil\n");
		
	}break;
	case 2:{
		printf("bus\n");
		
	}break;
	case 3:{
		printf("pesawat\n");
	}break;
	}
	
	if(mbl==1){
	if(waktuplg>mobil){
	hasil0=waktuplg-mobil;
	}
	else if(mobil>waktuplg){
	hasil=mobil-waktuplg;
	}
	}
	else if(mbl==2){
	if(waktuplg>bus){
	hasil0=waktuplg-bus;
	}
	else if(bus>waktuplg){
	hasil=mobil-waktuplg;
	}
	}
	else if(mbl==3){
	if(waktuplg>pesawat){
	hasil0=waktuplg-pesawat;
	}
	else if(pesawat>waktuplg){
	hasil=pesawat-waktuplg;
	}
	}
	printf("%d\n %d\n",hasil,hasil0);
	if(hasil>=0){
	if(mbl==1){
	if(hasil>172800){
		switch(hari){
			case 1 :{
			sampai=5;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=6;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=7;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
		
		}
		}else if(hasil>86400){
		switch(hari){
			case 1 :{
			sampai=6;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=7;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
		
		}
		}else if(hasil>=1){
		switch(hari){
			case 1 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			}
			}
	}
	}else if(hasil0>0){
	sampai=hari;
	printf("%d\n",sampai);
	}
	if(hasil>0){
	if(mbl==2){
	if(hasil>172800){
		switch(hari){
			case 1 :{
			sampai=5;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=6;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=7;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
		
		}
		}else if(hasil>86400){
		switch(hari){
			case 1 :{
			sampai=6;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=7;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
		
		}
		}else if(hasil>=1){
		switch(hari){
			case 1 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			}
			}
	}
	}else if(hasil0>0){
	sampai=hari;
	printf("%d\n",sampai);
	}
	if(hasil>0){
	if(mbl==3){
	if(hasil>172800){
		switch(hari){
			case 1 :{
			sampai=5;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=6;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=7;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-3;
			printf("%d\n",sampai);
			}break;
		
		}
		}else if(hasil>86400){
		switch(hari){
			case 1 :{
			sampai=6;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=7;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-2;
			printf("%d\n",sampai);
			}break;
		
		}
		}else if(hasil>=1){
		switch(hari){
			case 1 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			case 2 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 3 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 4 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 5 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 6 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			
			case 7 :{
			sampai=hari-1;
			printf("%d\n",sampai);
			}break;
			}
			}		
	}
	}else if(hasil0>0){
	sampai=hari;
	printf("%d\n",sampai);
	}
	
	if(hasil>172800){
		totalmobil1=(mobil-waktuplg)-172800;
	}else if(totalmobil>86400){
		totalmobil1=(mobil-waktuplg)-86400;
	}else{
		totalmobil1=(mobil-waktuplg);
	}
	if(totalbus>172800){
		totalbus1=(mobil-waktuplg)-172800;
	}else if(totalmobil>86400){
		totalbus1=(mobil-waktuplg)-86400;
	}else{
		totalbus1=(mobil-waktuplg);
	}
	if(totalpesawat>172800){
		totalpesawat1=(mobil+waktuplg)-172800;
	}else if(totalmobil>86400){
		totalpesawat1=(mobil+waktuplg)-86400;
	}else{
		totalpesawat1=(mobil+waktuplg);
	}
	

	mobil1.jam1=totalmobil1/3600;
	mobil1.menit1=(totalmobil1%3600)/60;
	mobil1.detik1=(totalmobil1%3600)%60;
	
	bus1.jam1=totalbus1/3600;
	bus1.menit1=(totalbus1%3600)/60;
	bus1.detik1=(totalbus1%3600)%60;
	
	pesawat1.jam1=totalpesawat1/3600;
	pesawat1.menit1=(totalpesawat1%3600)/60;
	pesawat1.detik1=(totalpesawat1%3600)%60;
	
	if (mbl==1){
	printf("%.2d %.2d %.2d\n",mobil1.jam1,mobil1.menit1,mobil1.detik1);
	}else if(mbl==2){
	printf("%.2d %.2d %.2d\n",bus1.jam1,bus1.menit1,bus1.detik1);
	}else if(mbl==3){
	printf("%.2d %.2d %.2d\n",pesawat1.jam1,pesawat1.menit1,pesawat1.detik1);
	}
	
	return 0;
	}



