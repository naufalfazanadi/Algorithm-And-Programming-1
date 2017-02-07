#include<stdio.h>


typedef struct{
	int harga;
	int jumlah;
}barang;

int main(){

	barang lepi;
	barang mouse;
	barang keyboard;
	char menu;
	int total1,total2,total3 ;
	printf("============Tabel Harga Net Accesoris============\n");
	printf("Menu\n");
	printf("1.lepi = l\n");
	printf("2.Mouse = m\n");
	printf("3.Keyboard = k\n");
	
	scanf("%c",&menu);
	switch(menu){
		case 'l':{
			printf("Masukan harga lepi:\n");
			scanf("%d",&lepi.harga);
			printf("Masukan jumlah lepi:\n");
			scanf("%d",&lepi.jumlah);
			
			total1=lepi.harga*lepi.jumlah;
			
			printf("=================Rekapitulasi=================\n");
			printf("Anda membeli lepi dengan  harga:%d\n",lepi.harga);
			printf("Anda membeli lepi dengan  harga:%d\n",lepi.jumlah);
			
			printf("TOTAL                           =%d\n",total1);
			printf("Press enter to continue..\n");
		}break;
		
		case 'm':{
			printf("Masukan harga mouse:\n");
			scanf("%d",&mouse.harga);
			printf("Masukan jumlah mouse:\n");
			scanf("%d",&mouse.jumlah);
			
			total2=mouse.harga*mouse.jumlah;
			printf("=================Rekapitulasi=================\n");
			printf("Anda membeli mouse dengan  harga:%d\n",mouse.harga);
			printf("Anda membeli mouse dengan  harga:%d\n",mouse.jumlah);
	
			
			printf("TOTAL                           =%d\n",total2);
			printf("Press enter to continue..\n");
		}break;
		
		case 'k':{
			printf("Masukan harga keyboard:\n");
			scanf("%d",&keyboard.harga);
			printf("Masukan jumlah keyboard:\n");
			scanf("%d",&keyboard.jumlah);
			
			total3=keyboard.harga*keyboard.jumlah;
			printf("=================Rekapitulasi=================\n");
			printf("Anda membeli keyboard dengan  harga: %d\n",keyboard.harga);
			printf("Anda membeli keyboard dengan  harga: %d\n",keyboard.jumlah);
	
		
			printf("TOTAL                              = %d\n",total3);
			printf("Press enter to continue..\n");
		}break;
	}
	

getch();
printf("Terimakasih telah membeli di NET ACCESORRIS\n");

return 0;
}
