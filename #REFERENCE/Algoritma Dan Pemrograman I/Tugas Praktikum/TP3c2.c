//program berangkat moni
#include<stdio.h>
/*
Saya faisal syaiful anwar tidak melakukan kecurangan seperti yang telah dispesifikasikan pada mata kuliah Algoritma dan Pemrograman I dalam mengerjakan tugas praktikum 3, jika saya melakukan kecurangan maka Allah/Tuhan adalah saksi saya, dan saya bersedia menerima hukumanNya. Aamiin.
*/

//ini tipe bungkusan
typedef struct{
	int jam1;
	int menit1;
	int detik1;
}struk;
int main(){

struk mobil1;
struk bus1;
struk pesawat1;
//variabel yg dibutuhkan
int jenis,hari,jam,menit,detik,jmlh,mobil,bus,pesawat,sisa;
int wktm,wktb,wktp;
int wktma;
int wktba;
int wktpa;

//input 3 masukan user
scanf("%d",&jenis);
scanf("%d",&hari);
scanf("%d %d %d",&jam,&menit,&detik);

//mencari konstanta
jmlh=(jam*3600)+(menit*60)+detik;
mobil=(40*3600)+(30*60)+18;
bus=(50*3600)+(20*60)+30;
pesawat=(7*3600)+(25*60)+40;

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
wktm=mobil-jmlh;
wktb=bus-jmlh;
wktp=pesawat-jmlh;

//switch hari beserta perhitungan jam
switch(hari){
case 1:{
if(jenis==1){
	if(wktm<hari1){
	printf("7\n");
	wktma=hari1-wktm;
}else if(wktm>=hari1 && wktm<=hari2){
	printf("6\n");
	sisa=wktm-hari1;
	wktma=hari1-sisa;
}else if(wktm>=hari2 && wktm<=hari3){
	printf("5\n");
	sisa=wktm-hari2;
	wktma=hari1=sisa;
	}
	mobil1.jam1=wktma/3600;
	mobil1.menit1=(wktma%3600)/60;
	mobil1.detik1=(wktma%3600)%60;
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("7\n");
	wktba=hari1-wktb;
	}else if(wktb>=hari1 && wktb<=hari2){
	printf("6\n");
	sisa=wktb-hari1;
	wktba=hari1-sisa;
	}else if(wktb>=hari2 && wktb<=hari3){
	printf("5\n");
	sisa=wktb-hari2;
	wktba=hari1=sisa;
	}
	bus1.jam1=wktba/3600;
	bus1.menit1=(wktba%3600)/60;
	bus1.detik1=(wktba%3600)%60;

}else if(jenis==3){
	if(pesawat>jmlh){
	printf("7\n");
	wktpa=hari1-wktp;
	}else{
	printf("1\n");
	wktpa=jmlh-pesawat;
	}
	pesawat1.jam1=wktpa/3600;
	pesawat1.menit1=(wktpa%3600)/60;
	pesawat1.detik1=(wktpa%3600)%60;
}
}break;
case 2:{
if(jenis==1){
	if(wktm<hari1){
	printf("1\n");
	wktma=hari1-wktm;
}else if(wktm>=hari1 && wktm<=hari2){
	printf("7\n");
	sisa=wktm-hari1;
	wktma=hari1-sisa;
}else if(wktm>=hari2 && wktm<=hari3){
	printf("6\n");
	sisa=wktm-hari2;
	wktma=hari1=sisa;
	}
	mobil1.jam1=wktma/3600;
	mobil1.menit1=(wktma%3600)/60;
	mobil1.detik1=(wktma%3600)%60;
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("1\n");
	wktba=hari1-wktb;
	}else if(wktb>=hari1 && wktb<=hari2){
	printf("7\n");
	sisa=wktb-hari1;
	wktba=hari1-sisa;
	}else if(wktb>=hari2 && wktb<=hari3){
	printf("6\n");
	sisa=wktb-hari2;
	wktba=hari1=sisa;
	}
	bus1.jam1=wktba/3600;
	bus1.menit1=(wktba%3600)/60;
	bus1.detik1=(wktba%3600)%60;

}else if(jenis==3){
	if(pesawat>jmlh){
	printf("1\n");
	wktpa=hari1-wktp;
	}else{
	printf("2\n");
	wktpa=jmlh-pesawat;
	}
	pesawat1.jam1=wktpa/3600;
	pesawat1.menit1=(wktpa%3600)/60;
	pesawat1.detik1=(wktpa%3600)%60;
}}break;
case 3:{
if(jenis==1){
	if(wktm<hari1){
	printf("2\n");
	wktma=hari1-wktm;
}else if(wktm>=hari1 && wktm<=hari2){
	printf("1\n");
	sisa=wktm-hari1;
	wktma=hari1-sisa;
}else if(wktm>=hari2 && wktm<=hari3){
	printf("7\n");
	sisa=wktm-hari2;
	wktma=hari1=sisa;
	}
	mobil1.jam1=wktma/3600;
	mobil1.menit1=(wktma%3600)/60;
	mobil1.detik1=(wktma%3600)%60;
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("2\n");
	wktba=hari1-wktb;
	}else if(wktb>=hari1 && wktb<=hari2){
	printf("1\n");
	sisa=wktb-hari1;
	wktba=hari1-sisa;
	}else if(wktb>=hari2 && wktb<=hari3){
	printf("7\n");
	sisa=wktb-hari2;
	wktba=hari1=sisa;
	}
	bus1.jam1=wktba/3600;
	bus1.menit1=(wktba%3600)/60;
	bus1.detik1=(wktba%3600)%60;

}else if(jenis==3){
	if(pesawat>jmlh){
	printf("2\n");
	wktpa=hari1-wktp;
	}else{
	printf("3\n");
	wktpa=jmlh-pesawat;
	}
	pesawat1.jam1=wktpa/3600;
	pesawat1.menit1=(wktpa%3600)/60;
	pesawat1.detik1=(wktpa%3600)%60;
}}break;
case 4:{
if(jenis==1){
	if(wktm<hari1){
	printf("3\n");
	wktma=hari1-wktm;
}else if(wktm>=hari1 && wktm<=hari2){
	printf("2\n");
	sisa=wktm-hari1;
	wktma=hari1-sisa;
}else if(wktm>=hari2 && wktm<=hari3){
	printf("1\n");
	sisa=wktm-hari2;
	wktma=hari1=sisa;
	}
	mobil1.jam1=wktma/3600;
	mobil1.menit1=(wktma%3600)/60;
	mobil1.detik1=(wktma%3600)%60;
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("3\n");
	wktba=hari1-wktb;
	}else if(wktb>=hari1 && wktb<=hari2){
	printf("2\n");
	sisa=wktb-hari1;
	wktba=hari1-sisa;
	}else if(wktb>=hari2 && wktb<=hari3){
	printf("1\n");
	sisa=wktb-hari2;
	wktba=hari1=sisa;
	}
	bus1.jam1=wktba/3600;
	bus1.menit1=(wktba%3600)/60;
	bus1.detik1=(wktba%3600)%60;

}else if(jenis==3){
	if(pesawat>jmlh){
	printf("3\n");
	wktpa=hari1-wktp;
	}else{
	printf("4\n");
	wktpa=jmlh-pesawat;
	}
	pesawat1.jam1=wktpa/3600;
	pesawat1.menit1=(wktpa%3600)/60;
	pesawat1.detik1=(wktpa%3600)%60;
}}break;
case 5:{
if(jenis==1){
	if(wktm<hari1){
	printf("4\n");
	wktma=hari1-wktm;
}else if(wktm>=hari1 && wktm<=hari2){
	printf("3\n");
	sisa=wktm-hari1;
	wktma=hari1-sisa;
}else if(wktm>=hari2 && wktm<=hari3){
	printf("2\n");
	sisa=wktm-hari2;
	wktma=hari1=sisa;
	}
	mobil1.jam1=wktma/3600;
	mobil1.menit1=(wktma%3600)/60;
	mobil1.detik1=(wktma%3600)%60;
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("4\n");
	wktba=hari1-wktb;
	}else if(wktb>=hari1 && wktb<=hari2){
	printf("3\n");
	sisa=wktb-hari1;
	wktba=hari1-sisa;
	}else if(wktb>=hari2 && wktb<=hari3){
	printf("2\n");
	sisa=wktb-hari2;
	wktba=hari1=sisa;
	}
	bus1.jam1=wktba/3600;
	bus1.menit1=(wktba%3600)/60;
	bus1.detik1=(wktba%3600)%60;

}else if(jenis==3){
	if(pesawat>jmlh){
	printf("4\n");
	wktpa=hari1-wktp;
	}else{
	printf("5\n");
	wktpa=jmlh-pesawat;
	}
	pesawat1.jam1=wktpa/3600;
	pesawat1.menit1=(wktpa%3600)/60;
	pesawat1.detik1=(wktpa%3600)%60;
}}break;
case 6:{
if(jenis==1){
	if(wktm<hari1){
	printf("5\n");
	wktma=hari1-wktm;
}else if(wktm>=hari1 && wktm<=hari2){
	printf("4\n");
	sisa=wktm-hari1;
	wktma=hari1-sisa;
}else if(wktm>=hari2 && wktm<=hari3){
	printf("3\n");
	sisa=wktm-hari2;
	wktma=hari1=sisa;
	}
	mobil1.jam1=wktma/3600;
	mobil1.menit1=(wktma%3600)/60;
	mobil1.detik1=(wktma%3600)%60;
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("5\n");
	wktba=hari1-wktb;
	}else if(wktb>=hari1 && wktb<=hari2){
	printf("4\n");
	sisa=wktb-hari1;
	wktba=hari1-sisa;
	}else if(wktb>=hari2 && wktb<=hari3){
	printf("3\n");
	sisa=wktb-hari2;
	wktba=hari1=sisa;
	}
	bus1.jam1=wktba/3600;
	bus1.menit1=(wktba%3600)/60;
	bus1.detik1=(wktba%3600)%60;

}else if(jenis==3){
	if(pesawat>jmlh){
	printf("5\n");
	wktpa=hari1-wktp;
	}else{
	printf("6\n");
	wktpa=jmlh-pesawat;
	}
	pesawat1.jam1=wktpa/3600;
	pesawat1.menit1=(wktpa%3600)/60;
	pesawat1.detik1=(wktpa%3600)%60;
}}break;
case 7:{
if(jenis==1){
	if(wktm<hari1){
	printf("6\n");
	wktma=hari1-wktm;
}else if(wktm>=hari1 && wktm<=hari2){
	printf("5\n");
	sisa=wktm-hari1;
	wktma=hari1-sisa;
}else if(wktm>=hari2 && wktm<=hari3){
	printf("4\n");
	sisa=wktm-hari2;
	wktma=hari1=sisa;
	}
	mobil1.jam1=wktma/3600;
	mobil1.menit1=(wktma%3600)/60;
	mobil1.detik1=(wktma%3600)%60;
	
}else if(jenis==2){
	if(wktb<hari1){
	printf("6\n");
	wktba=hari1-wktb;
	}else if(wktb>=hari1 && wktb<=hari2){
	printf("5\n");
	sisa=wktb-hari1;
	wktba=hari1-sisa;
	}else if(wktb>=hari2 && wktb<=hari3){
	printf("4\n");
	sisa=wktb-hari2;
	wktba=hari1=sisa;
	}
	bus1.jam1=wktba/3600;
	bus1.menit1=(wktba%3600)/60;
	bus1.detik1=(wktba%3600)%60;

}else if(jenis==3){
	if(pesawat>jmlh){
	printf("6\n");
	wktpa=hari1-wktp;
	}else{
	printf("7\n");
	wktpa=jmlh-pesawat;
	}
	pesawat1.jam1=wktpa/3600;
	pesawat1.menit1=(wktpa%3600)/60;
	pesawat1.detik1=(wktpa%3600)%60;
}}break;
}

//output jam 
if(jenis==1){
	printf("%d %d %d\n",mobil1.jam1,mobil1.menit1,mobil1.detik1);
}
else if(jenis==2){
	printf("%d %d %d\n",bus1.jam1,bus1.menit1,bus1.detik1);
}
if(jenis==3){
	printf("%d %d %d\n",pesawat1.jam1,pesawat1.menit1,pesawat1.detik1);
}

return 0;
}

//akkhir program wassalam. pusing kang mayan :(