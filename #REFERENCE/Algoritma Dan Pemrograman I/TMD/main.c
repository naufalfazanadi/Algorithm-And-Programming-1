#include "faisal.h"

int main(){
	int n,i,j,k,l;
	int tebal;
	scanf("%d",&n);
	char arr1[n][100];
	 for(i=0;i<n;i++){
		scanf("%s",&arr1[i]);
	} 
	scanf("%d",&tebal);
	int hasil=angka(n,arr1);
	int digit=digat(hasil);
	char hasil1[digit];
	hasil1[digit+1];
	strcpy(hasil1,(char *)string1(hasil,digit));
	printf("hasilmain_%s",hasil1);
	printf("%d\n",hasil);
	for(i=0;i<tebal;i++){
		printf("\n");
	}
	

	
	// if(digit==0){
		// for(i=0;i<tebal;i++){
			// for(j=0;j<tebal;j++){
				// printf(" ");
			// }
			// for(j=0;j<tebal;j++){
				// printf("0");
			// }
			// printf("\n");
		// }
		// for(i=0;i<tebal;i++){
			// for(j=0;j<tebal;j++){
				// printf("0");
			// }
			// for(j=0;j<tebal;j++){
				// printf(" ");
			// }
			// for(j=0;j<tebal;j++){
				// printf("0");
			// }
			// printf("\n");
		// }
		// for(i=0;i<tebal;i++){
			// printf("\n");
		// }
		// for(i=0;i<tebal;i++){
			// for(j=0;j<tebal;j++){
				// printf("0");
			// }
			// for(j=0;j<tebal;j++){
				// printf(" ");
			// }
			// for(j=0;j<tebal;j++){
				// printf("0");
			// }
			// printf("\n");
		// }
		// for(i=0;i<tebal;i++){
			// for(j=0;j<tebal;j++){
				// printf(" ");
			// }
			// for(j=0;j<tebal;j++){
				// printf("0");
			// }
			// printf("\n");
		// }
	// }else{
		baris1(tebal,digit,hasil1,hasil);
		baris2(tebal,hasil1,digit,hasil);
		baris3(tebal,hasil1,digit,hasil);
		baris4(tebal,hasil1,digit,hasil);
		baris5(tebal,hasil1,digit,hasil);
	// }
	return 0;
}

					 