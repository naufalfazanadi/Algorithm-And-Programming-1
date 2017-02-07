//SIATIMM!!!
#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	char arr[100];
	char input[5];
	//ini adalah inputan 
	scanf("%s",&input);
	scanf("%s",&arr);
	int jumlah=0;
	//for untuk 
	for(i=0;i<1;i++){
		for(j=0;j<strlen(arr);j++){
			if(strlen(input)==5){
				if(input[i]==arr[j]){
					if(input[i+1]==arr[j+1]){
						if(input[i+2]==arr[j+2]){
							if(input[i+3]==arr[j+3]){
								if(input[i+4]==arr[j+4]){
								jumlah++;
								}
							}
						}	
					}
				}
			}
			if(strlen(input)==4){
				if(input[i]==arr[j]){
					if(input[i+1]==arr[j+1]){
						if(input[i+2]==arr[j+2]){
							if(input[i+3]==arr[j+3]){
							jumlah++;
							}
						}	
					}
				}
			}
			if(strlen(input)==3){
				if(input[i]==arr[j]){
					if(input[i+1]==arr[j+1]){
						if(input[i+2]==arr[j+2]){
							jumlah++;
						}	
					}
				}
			}
			if(strlen(input)==2){
				if(input[i]==arr[j]){
					if(input[i+1]==arr[j+1]){
						jumlah++;
					}
				}
			}
		}
	}
	printf("%d\n",jumlah);


return 0;
}
