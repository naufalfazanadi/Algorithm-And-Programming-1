//program berangkat moni
#include<stdio.h>
/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan tugas praktikum 3, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/

//ini tipe bungkusan
	typedef struct{
	int mobil;
	int pesawat;
	int bus;
	}jenis;
int main(){

jenis total;
//variabel yg dibutuhkan
int jenis,hari,jam,menit,detik,jmlh,mobil1,bus1,pesawat1,sisa;
int wktm,wktb,wktp;

int jam1;
int menit1;
int detik1;

//input 3 masukan user
scanf("%d",&jenis);
scanf("%d",&hari);
scanf("%d %d %d",&jam,&menit,&detik);

//mencari konstanta
jmlh=(jam*3600)+(menit*60)+detik;
mobil1=(40*3600)+(30*60)+18;
bus1=(50*3600)+(20*60)+30;
pesawat1=(7*3600)+(25*60)+40;

int hari1=86400;
int hari2=172800;
int hari3=259200;

//switch khusus jenis 
switch(jenis){
	case 1:{
	printf("mobil\n");
	}break;
	case 2:{
	printf("bus\n");
	}break;
	case 3:{
	printf("pesawat\n");
	}break;
	default :{
	printf("pilihan tidak ada\n");
	}
}

//waktu sisa mobil bus maupun pswt
wktm=mobil1-jmlh;
wktb=bus1-jmlh;
wktp=pesawat1-jmlh;

//switch hari beserta perhitungan jam
switch(hari){
case 1:{
if(jenis==1){
	if(wktm<hari1){
	printf("7\n");
	total.mobil=hari1-wktm;
}else if(wktm>=hari1 && wktm<hari2){
	printf("6\n");
	sisa=wktm-hari1;
	total.mobil=hari1-sisa;
}else if(wktm>=hari2 && wktm<hari3){
	printf("5\n");
	sisa=wktm-hari2;
	total.mobil=hari1=sisa;
	}
}else if(jenis==2){
	if(wktb<hari1){
	printf("7\n");
	total.bus=hari1-wktb;
	}else if(wktb>=hari1 && wktb<hari2){
	printf("6\n");
	sisa=wktb-hari1;
	total.bus=hari1-sisa;
	}else if(wktb>=hari2 && wktb<hari3){
	printf("5\n");
	sisa=wktb-hari2;
	total.bus=hari1=sisa;
	}
	 
	 
 

}else if(jenis==3){
	if(pesawat1>jmlh){
	printf("7\n");
	total.pesawat=hari1-wktp;
	}else{
	printf("1\n");
	total.pesawat=jmlh-pesawat1;
	}
}
}break;
case 2:{
if(jenis==1){
	if(wktm<hari1){
	printf("1\n");
	total.mobil=hari1-wktm;
}else if(wktm>=hari1 && wktm<hari2){
	printf("7\n");
	sisa=wktm-hari1;
	total.mobil=hari1-sisa;
}else if(wktm>=hari2 && wktm<hari3){
	printf("6\n");
	sisa=wktm-hari2;
	total.mobil=hari1=sisa;
	}
	 
	 
 
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("1\n");
	total.bus=hari1-wktb;
	}else if(wktb>=hari1 && wktb<hari2){
	printf("7\n");
	sisa=wktb-hari1;
	total.bus=hari1-sisa;
	}else if(wktb>=hari2 && wktb<hari3){
	printf("6\n");
	sisa=wktb-hari2;
	total.bus=hari1=sisa;
	}
	 
	 
 

}else if(jenis==3){
	if(pesawat1>jmlh){
	printf("1\n");
	total.pesawat=hari1-wktp;
	}else{
	printf("2\n");
	total.pesawat=jmlh-pesawat1;
	}
	 
 
 
}}break;
case 3:{
if(jenis==1){
	if(wktm<hari1){
	printf("2\n");
	total.mobil=hari1-wktm;
}else if(wktm>=hari1 && wktm<hari2){
	printf("1\n");
	sisa=wktm-hari1;
	total.mobil=hari1-sisa;
}else if(wktm>=hari2 && wktm<hari3){
	printf("7\n");
	sisa=wktm-hari2;
	total.mobil=hari1=sisa;
	}
	 
	 
 
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("2\n");
	total.bus=hari1-wktb;
	}else if(wktb>=hari1 && wktb<hari2){
	printf("1\n");
	sisa=wktb-hari1;
	total.bus=hari1-sisa;
	}else if(wktb>=hari2 && wktb<hari3){
	printf("7\n");
	sisa=wktb-hari2;
	total.bus=hari1=sisa;
	}
	 
	 
 

}else if(jenis==3){
	if(pesawat1>jmlh){
	printf("2\n");
	total.pesawat=hari1-wktp;
	}else{
	printf("3\n");
	total.pesawat=jmlh-pesawat1;
	}
	 
 
 
}}break;
case 4:{
if(jenis==1){
	if(wktm<hari1){
	printf("3\n");
	total.mobil=hari1-wktm;
}else if(wktm>=hari1 && wktm<hari2){
	printf("2\n");
	sisa=wktm-hari1;
	total.mobil=hari1-sisa;
}else if(wktm>=hari2 && wktm<hari3){
	printf("1\n");
	sisa=wktm-hari2;
	total.mobil=hari1=sisa;
	}
	 
	 
 
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("3\n");
	total.bus=hari1-wktb;
	}else if(wktb>=hari1 && wktb<hari2){
	printf("2\n");
	sisa=wktb-hari1;
	total.bus=hari1-sisa;
	}else if(wktb>=hari2 && wktb<hari3){
	printf("1\n");
	sisa=wktb-hari2;
	total.bus=hari1=sisa;
	}
	 
	 
 

}else if(jenis==3){
	if(pesawat1>jmlh){
	printf("3\n");
	total.pesawat=hari1-wktp;
	}else{
	printf("4\n");
	total.pesawat=jmlh-pesawat1;
	}
	 
 
 
}}break;
case 5:{
if(jenis==1){
	if(wktm<hari1){
	printf("4\n");
	total.mobil=hari1-wktm;
}else if(wktm>=hari1 && wktm<hari2){
	printf("3\n");
	sisa=wktm-hari1;
	total.mobil=hari1-sisa;
}else if(wktm>=hari2 && wktm<hari3){
	printf("2\n");
	sisa=wktm-hari2;
	total.mobil=hari1=sisa;
	}
	 
	 
 
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("4\n");
	total.bus=hari1-wktb;
	}else if(wktb>=hari1 && wktb<hari2){
	printf("3\n");
	sisa=wktb-hari1;
	total.bus=hari1-sisa;
	}else if(wktb>=hari2 && wktb<hari3){
	printf("2\n");
	sisa=wktb-hari2;
	total.bus=hari1=sisa;
	}
	 
	 
 

}else if(jenis==3){
	if(pesawat1>jmlh){
	printf("4\n");
	total.pesawat=hari1-wktp;
	}else{
	printf("5\n");
	total.pesawat=jmlh-pesawat1;
	}
	 
 
 
}}break;
case 6:{
if(jenis==1){
	if(wktm<hari1){
	printf("5\n");
	total.mobil=hari1-wktm;
}else if(wktm>=hari1 && wktm<hari2){
	printf("4\n");
	sisa=wktm-hari1;
	total.mobil=hari1-sisa;
}else if(wktm>=hari2 && wktm<hari3){
	printf("3\n");
	sisa=wktm-hari2;
	total.mobil=hari1=sisa;
	}
	 
	 
 
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("5\n");
	total.bus=hari1-wktb;
	}else if(wktb>=hari1 && wktb<hari2){
	printf("4\n");
	sisa=wktb-hari1;
	total.bus=hari1-sisa;
	}else if(wktb>=hari2 && wktb<hari3){
	printf("3\n");
	sisa=wktb-hari2;
	total.bus=hari1=sisa;
	}
	 
	 
 

}else if(jenis==3){
	if(pesawat1>jmlh){
	printf("5\n");
	total.pesawat=hari1-wktp;
	}else{
	printf("6\n");
	total.pesawat=jmlh-pesawat1;
	}
	 
 
 
}}break;
case 7:{
if(jenis==1){
	if(wktm<hari1){
	printf("6\n");
	total.mobil=hari1-wktm;
}else if(wktm>=hari1 && wktm<hari2){
	printf("5\n");
	sisa=wktm-hari1;
	total.mobil=hari1-sisa;
}else if(wktm>=hari2 && wktm<hari3){
	printf("4\n");
	sisa=wktm-hari2;
	total.mobil=hari1=sisa;
	}
	 
	 
 
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("6\n");
	total.bus=hari1-wktb;
	}else if(wktb>=hari1 && wktb<hari2){
	printf("5\n");
	sisa=wktb-hari1;
	total.bus=hari1-sisa;
	}else if(wktb>=hari2 && wktb<hari3){
	printf("4\n");
	sisa=wktb-hari2;
	total.bus=hari1=sisa;
	}
	 
	 
 

}else if(jenis==3){
	if(pesawat1>jmlh){
	printf("6\n");
	total.pesawat=hari1-wktp;
	}else{
	printf("7\n");
	total.pesawat=jmlh-pesawat1;
	}
}}break;
default :{
printf("pilihan tidak ada\n");

}
}
    jam1=total.mobil/3600;
	menit1=(total.mobil%3600)/60;
	detik1=(total.mobil%3600)%60;
	
	jam1=total.pesawat/3600;
	menit1=(total.pesawat%3600)/60;
	detik1=(total.pesawat%3600)%60;
	
	jam1=total.bus/3600;
	menit1=(total.bus%3600)/60;
	detik1=(total.bus%3600)%60;

//output jam 
if(jenis==1){
	printf("%.2d %.2d %.2d\n",jam1,menit1,detik1);
}
else if(jenis==2){
	printf("%.2d %.2d %.2d\n",jam1,menit1,detik1);
}
if(jenis==3){
	printf("%.2d %.2d %.2d\n",jam1,menit1,detik1);
}

return 0;
}

//akkhir program wassalam. pusing kang mayan :(