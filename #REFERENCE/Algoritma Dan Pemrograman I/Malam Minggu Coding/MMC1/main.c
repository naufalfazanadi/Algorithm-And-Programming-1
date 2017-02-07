#include "faisal.h"

int main(){
	char habis[5]="habis";
	char array[100][100];
	char array2[100][100];
	char array3[100][100];
	char array4[100][100];
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	while(strcmp(array[i-1],"habis")!=0){
		scanf("%s",&array[i]);
		i++;
	}
	
	while(strcmp(array2[j-1],"habis")!=0){
		scanf("%s",&array2[j]);
		j++;
	}
	
	while(strcmp(array3[k-1],"habis")!=0){
		scanf("%s",&array3[k]);
		k++;
	}
	while(strcmp(array4[l-1],"habis")!=0){
		scanf("%s",&array4[l]);
		l++;
	}
	int maxi=besar(array,array2,array3,array4,i,j,k,l);
	int nama=namaa(array,array2,array3,array4,i,j,k,l);
	printf("Hepi\n");
	printf("%d\n",i-1);
	printf("Moni\n");
	printf("%d\n",j-1);
	printf("Piyu\n");
	printf("%d\n",k-1);
	printf("Tobi\n");
	printf("%d\n",l-1);
	if(nama==0){
		printf("Hepi\n");
	}else if(nama==1){
		printf("Moni\n");
	}else if(nama==2){
		printf("Piyu\n");
	}else{
		printf("Tobi\n");
	}
	printf("%d\n",maxi);
	return 0;
}
 