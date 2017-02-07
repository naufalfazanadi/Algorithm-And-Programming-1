#include<stdio.h>
#include<string.h>
int main(){
	//deklarasi
	int i,j;
	char str[100];
	scanf("%s",&str);
	int k=0;
	int konsonan=0;
	int konso=0;
	//jumlah konsonan atau konsonan
	for(i=0;i<strlen(str);i++){
		if(str[i]=='a' || str[i]=='i' || str[i]=='u' || str[i]=='e' || str[i]=='o'){
			konsonan++;
		}else{
			konso++;
		}
	}
	if((konsonan*konso)%2==0){ //jika konsonan*konso samadengan genap!	
		while(k<strlen(str)){ //while ini ngebungkus for miring sama lurus
			
			if(k<strlen(str)){
				for(i=0;i<4;i++){ //for 4huruf lurusss
					if(k<strlen(str)){
						printf("%c",str[k]);
						k++;
					}else{
						printf("\0");
					}
				}
				printf("\n"); //akhiri baris kata jika k>strlen, gunakan null
			}
		}
	}else{ //jika ganjil
		while(k<strlen(str)){
			
			if(k<strlen(str)){
				for(i=0;i<3;i++){ // ini lurus
					if(k<strlen(str)){
						printf("%c",str[k]);
						k++;
					}else{
						printf("\0");
					}
				}
				printf("\n");
			}	
		}
	}



	return 0;
}