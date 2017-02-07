#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	char kotak[6]={'k','o','t','a','k','\0'};
	char segitiga[9]={'s','e','g','i','t','i','g','a','\0'};
	char segidelapan[12]={'s','e','g','i','d','e','l','a','p','a','n','\0'};
	scanf("%s",&str);
	int n;
	scanf("%d",&n);
	char bada[100];
	int sisi;
	int i,j;
	int counter;
	int total[n];
	int hasil[n];
	for(i=0;i<n;i++){
		scanf("%s",&bada);
		scanf("%d",&sisi);
		counter=0;
		
		if(strcmp(bada,kotak)==0){
			total[i]=sisi*sisi;
		}else if(strcmp(bada,segitiga)==0){
			counter=3;
			total[i]=1;
			for(j=0;j<sisi-1;j++){
				total[i]=total[i]+(counter);
				counter=counter+2;
			}
		}else if(strcmp(bada,segidelapan)==0){
			counter=sisi+2;
			total[i]=sisi;
			for(j=0;j<sisi-1;j++){
				total[i]=(total[i]+counter);
				counter=counter+2;
			}
			counter=counter-2;
			for(j=0;j<sisi-2;j++){
				total[i]=total[i]+counter;
			}
			for(j=0;j<sisi;j++){
				total[i]=(total[i]+counter);
				counter=counter-2;
			}
			
			
		}
		hasil[i]=total[i]/strlen(str);
		if(total[i]%strlen(str)!=0){
			hasil[i]++;
		}
		
	}
	for(i=0;i<n;i++){
		printf("%d\n",hasil[i]);
	}
	return 0;
}
