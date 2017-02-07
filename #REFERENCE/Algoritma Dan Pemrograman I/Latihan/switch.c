#include<stdio.h>

int main(){

	int hari;

	scanf("%d",&hari);
	
	switch(hari){
		case 1 : {
			printf("Hari senin\n");
			break;
		}
		case 2 : {
			printf("Hari selasa\n");
			break;
		}
		case 3 : {
			printf("Hari rabu\n");
			break;
		}
		case 4 : {
			printf("Hari kamis\n");
			break;
		}
		case 5 : {
			printf("Hari jumat\n");
			break;
		}
		case 6 : {
			printf("Hari sabtu\n");
			break;
		}
		case 7 : {
			printf("Hari minggu\n");
			break;
		}
		default : {
			printf("tidak ada hari ke %d\n",hari);
		}
	}
return 0;
	}