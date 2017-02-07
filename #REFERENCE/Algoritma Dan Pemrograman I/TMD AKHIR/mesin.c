#include "faisal.h"

int angka(int n,char arr[n][100]){
	int i,j,jumlah=0;
	int plus=0,minus=0,kali=1;
	int angka;
	char operasi;
	int status=0;
	for(i=0;i<n;i++){
		j=0;
		while(j<strlen(arr[i]) && status!=1){
			if(arr[i][j]=='+'){
				operasi='+';
				status=1;	
			}
			else if(arr[i][j]=='-'){
				operasi='-';
				status=1;	
			}
			else if(arr[i][j]=='x'){
				operasi='x';
				status=1;	
			}
			j++;
		}
	}
	int neg=0;
	int angkaneg=0;
	int hasil;
	for(i=0;i<n;i++){
		for(j=0;j<strlen(arr[i]);j++){
			if(operasi=='+'){
				if(arr[i][j]>='0' && arr[i][j]<='9'){
					angka=arr[i][j];
					angka=angka-48;
					plus=plus+angka;
					hasil=plus;
				}
			}
			if(operasi=='-'){
				if(arr[i][j]>='0' && arr[i][j]<='9'){
					if(neg==0){		
						angkaneg=arr[i][j];
						angkaneg=angkaneg-48;
						neg=1;
						minus=angkaneg;
						hasil=minus;
					}else{
						angka=arr[i][j];
						angka=angka-48;
						minus=minus-angka;
						hasil=minus;
					}
				}
				
			}
			if(operasi=='x'){
				if(arr[i][j]>='0' && arr[i][j]<='9'){
						angka=arr[i][j];
						angka=angka-48;
						kali=kali*angka;
						hasil=kali;
					}
				}
				
		}
	}
	
	return hasil;
}
char* stringx(int hasil,int digit){
	int counter=0;
	
	int help1=1;
	int help2;
	int i;
	for(i=0;i<digit-1;i++){
		help1=help1*10;
	}
	if(hasil<0){
		hsl[0]='-';
		i=1;
	}else{
		i=0;
	}
	
	while(help1>0){
		if(hasil<0){
			hasil=hasil*-1;
		}
		help2=hasil/help1;
		hsl[i]=help2+48;
		hasil=hasil-(help2*help1);
		help1=help1/10;
		i++;
	}
	hsl[i]='\0';
 	return hsl;
}  
int digat(int hasil){
	int digit=0;
	while(hasil!=0){
		hasil=hasil/10;
		digit++;
	}
	return digit;
} 

void baris1(int tebal,int digit,char* hasil1,int hasil){
	int i,j,k,l;
	int status=0;
	if(hasil<0){
		digit++;
	}
	int batas1=digit;
	char string1[batas1];
	strcpy(string1,hasil1);
	
	i=digit-1;
	while(i>=0 && status!=1){
		if(string1[i]=='1' || string1[i]=='4'){
			batas1=batas1-1;
		}else{
			status=1;
		}
		
		i--;
	}
	string1[batas1]='\0';
	for(i=0;i<tebal;i++){
		// baris 1
		for(k=0;k<batas1;k++){
			if(string1[k]=='1'){
				if(k==0){
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string1[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string1[k]=='3'){
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
							}
					}
				}
			}else if(string1[k]=='4'){
				if(k==0){
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
					
				}else{
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string1[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string1[k]=='6'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string1[k]=='7'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string1[k]=='8'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			
			}else if(string1[k]=='9'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string1[k]=='0'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){ 
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string1[k]=='-'){ //jika string negatif 
				if(string1[k+1]!='\0'){ //jika didepannya masih ada char
					//print pola
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}
			if(k<batas1-1){ //this one spaces for every character
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		printf("\n"); //newline every row
	}
}

void baris2(int tebal,int digit,char* hasil1,int hasil){
	int i,j,k,l;
	int status=0;
	if(hasil<0){
		digit++;
	}
	int batas2=digit;
	char string2[batas2];
	strcpy(string2,hasil1);
	string2[batas2]='\0';
	for(i=0;i<tebal;i++){ // baris 2
		
		for(k=0;k<batas2;k++){
			if(string2[k]=='1'){
				if(k==0){
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string2[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string2[k]=='3'){
				if(k==0){
					
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}			
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string2[k]=='4'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}				
			}else if(string2[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string2[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string2[k]=='6'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string2[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string2[k]=='7'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string2[k]=='8'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}else if(string2[k]=='9'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string2[k]=='0'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string2[k]=='-'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}
			if(k<batas2-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		
		printf("\n");
	}
}
void baris3(int tebal,int digit,char* hasil1,int hasil){

	int i,j,k,l;
	int status=0;
	if(hasil<0){
		digit++;
	}
	int batas3=digit;
	char string3[batas3];
	strcpy(string3,hasil1);

	i=digit-1;
	while(i>=0 && status!=1){
		if(string3[i]=='1' || string3[i]=='0' || string3[i]=='7'){
			batas3=batas3-1;
		}else{
			status=1;
		}
		
		i--;
	}
	string3[batas3]='\0';
	for(i=0;i<tebal;i++){
		// baris 3
		for(k=0;k<batas3;k++){
			if(string3[k]=='1'){
				if(k==0){
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string3[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string3[k]=='3'){
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
							}
					}
				}
			}else if(string3[k]=='4'){
			
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}		
			}else if(string3[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string3[k]=='6'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string3[k]=='7'){
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string3[k]=='8'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			
			}else if(string3[k]=='9'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string3[k]=='0'){
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}				
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string3[k]=='-'){				
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}
			if(k<batas3-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		printf("\n");
	}
}
void baris4(int tebal,int digit,char* hasil1,int hasil){
	int i,j,k,l;
	int status=0;
	if(hasil<0){
		digit++;
	}
	int batas4=digit;
	char string4[batas4];
	strcpy(string4,hasil1);
	string4[batas4]='\0';
	for(i=0;i<tebal;i++){ // baris 4
		for(k=0;k<batas4;k++){
			if(string4[k]=='1'){
				if(k==0){
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string4[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string4[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string4[k]=='3'){
				if(k==0){
					
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}			
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string4[k]=='4'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}				
			}else if(string4[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}		
				
			}else if(string4[k]=='6'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
		
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			
			}else if(string4[k]=='7'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string4[k]=='8'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}else if(string4[k]=='9'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string4[k]=='0'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string4[k]=='-'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}
			if(k<batas4-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		
		printf("\n");
	}
}
void baris5(int tebal,int digit,char* hasil1,int hasil){
	int i,j,k,l;
	int status=0;
	if(hasil<0){
		digit++;
	}
	int batas5=digit;
	char string5[batas5];
	strcpy(string5,hasil1);
	i=digit-1;
	while(i>=0 && status!=1){
		if(string5[i]=='1' || string5[i]=='7'){
			batas5=batas5-1;
		}else{
			status=1;
		}
		
		i--;
	}
	string5[batas5]='\0';
	for(i=0;i<tebal;i++){
		// baris 1
		for(k=0;k<batas5;k++){
			if(string5[k]=='1'){
				if(k==0){
					if(string5[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					if(string5[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}
			}else if(string5[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string5[k]=='3'){
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string5[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string5[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf(" ");
							}
					}
				}
			}else if(string5[k]=='4'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
							
			}else if(string5[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}		
				}
			}else if(string5[k]=='6'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string5[k]=='7'){
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}

					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string5[k]=='8'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			
			}else if(string5[k]=='9'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}else if(string5[k]=='0'){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}			
				}
			}else if(string5[k]=='-'){
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
					for(j=0;j<tebal;j++){
						printf(" ");
					}
				}
			}
			if(k<batas5-1){
				for(j=0;j<tebal;j++){
					printf(" ");
				}
			}	
		}
		printf("\n");
	}
}
