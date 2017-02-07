#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	int tebal;
	scanf("%s",&string);
	scanf("%d",&tebal);
	int i,j,k,l;
	
	int status=0;
	int digit=strlen(string);
	int batas1=strlen(string);
	int batas2=strlen(string);
	int batas3=strlen(string);
	int batas4=strlen(string);
	int batas5=strlen(string);
	char string1[strlen(string)];
	char string2[strlen(string)];
	char string3[strlen(string)];
	char string4[strlen(string)];
	char string5[strlen(string)];
	strcpy(string1,string);
	strcpy(string2,string);
	strcpy(string3,string);
	strcpy(string4,string);
	strcpy(string5,string);
	
	i=digit-1;
	while(i>=0 && status!=1){
		if(string[i]=='1' || string[i]=='4'){
			batas1=batas1-1;
		}else{
			status=1;
		}
		
		i--;
	}
	status=0;
	i=digit-1;
	while(i>=0 && status!=1){
		if(string[i]=='1' || string[i]=='0' || string[i]=='7'){
			batas3=batas3-1;
		}else{
			status=1;
		}
		
		i--;
	}
	status=0;
	i=digit-1;
	while(i>=0 && status!=1){
		if(string[i]=='1' || string[i]=='7'){
			batas5=batas5-1;
		}else{
			status=1;
		}
		
		i--;
	}
	string1[batas1]='\0';
	string2[batas2]='\0';
	string3[batas3]='\0';
	string4[batas4]='\0';
	string5[batas5]='\0';
	
	printf("%d",batas1);
	printf("%d",batas2);
	printf("%d",batas3);
	printf("%d",batas4);
	printf("%d\n",batas5);
	
	for(i=0;i<tebal;i++){
		// baris 1
		for(k=0;k<batas1;k++){
			if(string1[k]=='1'){
				if(k==0){
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}else{
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}
			}else if(string1[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string1[k]=='3'){
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
							}
					}
				}
			}else if(string1[k]=='4'){
				if(k==0){
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
						for(j=0;j<tebal;j++){
							printf("-");
						}
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
					
				}else{
					if(string1[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
						for(j=0;j<tebal;j++){
							printf("-");
						}
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}
			}else if(string1[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}		
				}
			}else if(string1[k]=='6'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
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
						printf("-");
					}
				}
			}else if(string1[k]=='8'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			
			}else if(string1[k]=='9'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			}else if(string1[k]=='0'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string1[k]=='-'){
				if(string1[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			}
			if(k<batas1-1){
				for(j=0;j<tebal;j++){
					printf("!");
				}
			}	
		}
		printf("\n");
	}
	for(i=0;i<tebal;i++){ // baris 2
		
		for(k=0;k<batas2;k++){
			if(string2[k]=='1'){
				if(k==0){
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}else{
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string2[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string2[k]=='3'){
				if(k==0){
					
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}			
				}else{
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
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
					printf("-");
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
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}		
				}
			}else if(string2[k]=='6'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string2[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string2[k]=='7'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string2[k]=='8'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}else if(string2[k]=='9'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string2[k]=='0'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string2[k]=='-'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
			}
			if(k<batas2-1){
				for(j=0;j<tebal;j++){
					printf("!");
				}
			}	
		}
		
		printf("\n");
	}
	for(i=0;i<tebal;i++){
		// baris 3
		for(k=0;k<batas3;k++){
			if(string3[k]=='1'){
				if(k==0){
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}else{
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}
			}else if(string3[k]=='2'){
				
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string3[k]=='3'){
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
							}
					}
				}
			}else if(string3[k]=='4'){
			
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string3[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}		
			}else if(string3[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}		
				}
			}else if(string3[k]=='6'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string3[k]=='7'){
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}
					
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			}else if(string3[k]=='8'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			
			}else if(string3[k]=='9'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			}else if(string3[k]=='0'){
				if(string3[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}				
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string3[k]=='-'){
				if(string2[k+1]!='\0'){
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
			}
			if(k<batas3-1){
				for(j=0;j<tebal;j++){
					printf("!");
				}
			}	
		}
		printf("\n");
	}
	for(i=0;i<tebal;i++){ // baris 4
		for(k=0;k<batas4;k++){
			if(string4[k]=='1'){
				if(k==0){
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}else{
					for(j=0;j<tebal;j++){
						printf("-");
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
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string4[k]=='3'){
				if(k==0){
					
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}			
				}else{
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
				}
			}else if(string4[k]=='4'){
			
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}				
			}else if(string4[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf("-");
				}
			
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}		
				
			}else if(string4[k]=='6'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
		
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			
			}else if(string4[k]=='7'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string4[k]=='8'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
			}else if(string4[k]=='9'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}

			}else if(string4[k]=='0'){
				for(j=0;j<tebal;j++){
					printf("0");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}			
			}else if(string4[k]=='-'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
			}
			if(k<batas4-1){
				for(j=0;j<tebal;j++){
					printf("!");
				}
			}	
		}
		
		printf("\n");
	}
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
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string5[k]=='3'){
				if(k==0){ 
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string5[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
						}
					}
				}else{
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("0");
					}
					if(string5[k+1]!='\0'){
						for(j=0;j<tebal;j++){
							printf("-");
							}
					}
				}
			}else if(string5[k]=='4'){
			
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
							
			}else if(string5[k]=='5'){
			
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}		
				}
			}else if(string5[k]=='6'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string5[k]=='7'){
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
					for(j=0;j<tebal;j++){
						printf("-");
					}

					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			}else if(string5[k]=='8'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			
			}else if(string5[k]=='9'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}
				}
			}else if(string5[k]=='0'){
				for(j=0;j<tebal;j++){
					printf("-");
				}
				for(j=0;j<tebal;j++){
					printf("0");
				}
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("-");
					}			
				}
			}else if(string5[k]=='-'){
				if(string5[k+1]!='\0'){
					for(j=0;j<tebal;j++){
						printf("!");
					}
					for(j=0;j<tebal;j++){
						printf("!");
					}
					for(j=0;j<tebal;j++){
						printf("!");
					}
				}
			}
			if(k<batas5-1){
				for(j=0;j<tebal;j++){
					printf("!");
				}
			}	
		}
		printf("\n");
	}
	return 0;
}


