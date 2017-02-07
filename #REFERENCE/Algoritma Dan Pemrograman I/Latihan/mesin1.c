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
 
 char* string1(int hasil,int digit){
	int counter=digit-1;
	if(hasil<0){
		hasil=hasil*-1;
	}
	int help1=hasil;
	int help2=hasil;
	char hsl[digit];
	int i;
	
	 for(i=0;i<digit;i++){
		
		help1=help1/10;
		hsl[counter]=(help2-(help1*10))+48;
		help2=help1;
		counter--;
	}
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
