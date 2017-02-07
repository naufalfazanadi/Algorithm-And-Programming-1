#include<stdio.h>
#include<string.h>

int main(){
	char data1[4]="   ";
	char data2[4]="*  ";
	char data3[4]="** ";
	char data4[4]="***";
	char data5[4]=" * ";
	char data6[4]=" **";
	char data7[4]="  *";
	char data8[4]="* *";
	int i,j,k,l,jumlah=0;
	int plus=0,minus=0,kali=1;
	int angka;
	char operasi;
	int status=0;
	int n;
	int tebal;
	scanf("%d",&n);
	char arr[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&arr[i]);
	}
	scanf("%d",&tebal);
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
	printf("%d~\n",hasil);
	int digit=0;
	int hasil2=hasil;
	int help1=hasil2;
	int help2=hasil2;
	while(hasil!=0){
		hasil=hasil/10;
		digit++;
	}
	int counter=digit-1;
	char hsl[digit];
	for(i=0;i<digit;i++){
		if(hasil2<0){
			hasil2=hasil2*-1;
		}
		help1=help1/10;
		hsl[counter]=(help2-(help1*10))+48;
		help2=help1;
		counter--;
	}
	printf("%d_\n",digit);
	for(i=0;i<digit;i++){
		printf("%c\n",hsl[i]);
	}
		
		for(i=0;i<tebal;i++){//1

				for(l=0;l<digit;l++){
				for(j=0;j<4;j++){
					
					
						if(hsl[l]=='0'){
							for(k=0;k<tebal;k++){
							printf("%c",data5[j]);
							}
						}if(hsl[l]=='1'){
							for(k=0;k<tebal;k++){
							printf("%c",data1[j]);
							}
						}if(hsl[l]=='2'){
							for(k=0;k<tebal;k++){
							printf("%c",data5[j]);
							}
						}if(hsl[l]=='3'){
							for(k=0;k<tebal;k++){
							printf("%c",data5[j]);
							}
						}if(hsl[l]=='4'){
							for(k=0;k<tebal;k++){
							printf("%c",data1[j]);
							}
						}if(hsl[l]=='5'){
							for(k=0;k<tebal;k++){
							printf("%c",data5[j]);
							}
						}if(hsl[l]=='6'){
							for(k=0;k<tebal;k++){
							printf("%c",data5[j]);
							}
						}if(hsl[l]=='7'){
							for(k=0;k<tebal;k++){
							printf("%c",data3[j]);
							}
						}if(hsl[l]=='8'){
							for(k=0;k<tebal;k++){
							printf("%c",data5[j]);
							}
						}if(hsl[l]=='9'){
							for(k=0;k<tebal;k++){
							printf("%c",data5[j]);
							}
						}
					}
				
				
			}
			printf("\n");
		}
		
		for(i=0;i<tebal;i++){ //2
			for(l=0;l<digit;l++){
				for(j=0;j<4;j++){
					if(hsl[l]=='0'){
						for(k=0;k<tebal;k++){
						printf("%c",data8[j]);
						}
					}if(hsl[l]=='1'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='2'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='3'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='4'){
						for(k=0;k<tebal;k++){
						printf("%c",data8[j]);
						}
					}if(hsl[l]=='5'){
						for(k=0;k<tebal;k++){
						printf("%c",data2[j]);
						}
					}if(hsl[l]=='6'){
						for(k=0;k<tebal;k++){
						printf("%c",data2[j]);
						}
					}if(hsl[l]=='7'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='8'){
						for(k=0;k<tebal;k++){
						printf("%c",data8[j]);
						}
					}if(hsl[l]=='9'){
						for(k=0;k<tebal;k++){
						printf("%c",data8[j]);
						}
					}
					
				}
			}
			printf("\n");
		}
		
		for(i=0;i<tebal;i++){ //3
			for(l=0;l<digit;l++){
				for(j=0;j<4;j++){
					if(hsl[l]=='0'){
						for(k=0;k<tebal;k++){
						printf("%c",data1[j]);
						}
					}if(hsl[l]=='1'){
						for(k=0;k<tebal;k++){
						printf("%c",data1[j]);
						}
					}if(hsl[l]=='2'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='3'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='4'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='5'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='6'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='7'){
						for(k=0;k<tebal;k++){
						printf("%c",data1[j]);
						}
					}if(hsl[l]=='8'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='9'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}
					
				}
			}
			printf("\n");
		}
		
		for(i=0;i<tebal;i++){ //4
			for(l=0;l<digit;l++){
				for(j=0;j<4;j++){
					if(hsl[l]=='0'){
						for(k=0;k<tebal;k++){
						printf("%c",data8[j]);
						}
					}if(hsl[l]=='1'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='2'){
						for(k=0;k<tebal;k++){
						printf("%c",data2[j]);
						}
					}if(hsl[l]=='3'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='4'){
						for(k=0;k<tebal;k++){
							printf("%c",data7[j]);
						}
					}if(hsl[l]=='5'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='6'){
						for(k=0;k<tebal;k++){
						printf("%c",data8[j]);
						}
					}if(hsl[l]=='7'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='8'){
						for(k=0;k<tebal;k++){
						printf("%c",data8[j]);
						}
					}if(hsl[l]=='9'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}
					
				}
			}
			printf("\n");
		}
		
		for(i=0;i<tebal;i++){ //5
			
			for(l=0;l<digit;l++){
				for(j=0;j<4;j++){
					if(hsl[l]=='0'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='1'){
						for(k=0;k<tebal;k++){
						printf("%c",data1[j]);
						}
					}if(hsl[l]=='2'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='3'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='4'){
						for(k=0;k<tebal;k++){
						printf("%c",data7[j]);
						}
					}if(hsl[l]=='5'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='6'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='7'){
						for(k=0;k<tebal;k++){
						printf("%c",data1[j]);
						}
					}if(hsl[l]=='8'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}if(hsl[l]=='9'){
						for(k=0;k<tebal;k++){
						printf("%c",data5[j]);
						}
					}
					
				}
			}
			printf("\n");
		}



	return 0;
}
