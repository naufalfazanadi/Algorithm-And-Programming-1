#include<stdio.h>
#include<string.h>
/* di cari dulu konsonan setiap string berapa banyak.
ditentukan berapa banyak yang termasuk genap dan ganjil;
di print. */
typedef struct{
	int konsonan[100];
}bungkus; //harus memakai bungkusan karena akan melempar char
typedef struct{
	int even;
	int odd;
}bungkus2;
bungkus genap(int n,char str[n][100]){
	bungkus gen;
	int i,j,k;
	for(i=0;i<n;i++){
		gen.konsonan[i]=0;
		for(j=0;j<strlen(str[i]);j++){
			if(str[i][j]=='a' || str[i][j]=='i' || str[i][j]=='u' || str[i][j]=='e' || str[i][j]=='o'){
				gen.konsonan[i]++;
			}
		}
	}
	return gen;
}


void pola(int n,char str[n][100], bungkus konsonangen){
	int i,j,k;
	int counter1=0;
	int counter2=0;
	int spasi=0;
	char strgenap[100][100];
	char strganjil[100][100];
	for(i=0;i<n;i++){
		if(konsonangen.konsonan[i]%2==0){
			strcpy(strgenap[counter1],str[i]);
			counter1++;
		}else{
			strcpy(strganjil[counter2],str[i]);
			counter2++;
		}
	}
	int max;
	if(counter1>counter2){
		max=counter1;
	}else{
		max=counter2;
	}
	for(i=0;i<max;i++){
		printf("%s\n",strgenap[i]);
		spasi=strlen(strgenap[i]);
		for(j=0;j<spasi;j++){
			printf("-");
		}
		printf("%s\n",strganjil[i]);
	}
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	char str[n][100];
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	bungkus konsonangen = genap(n,str);
	pola(n,str,konsonangen);
	

	return 0;
}