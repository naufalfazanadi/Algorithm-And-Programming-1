#include "faisal.h"

void hasil(int n,char str[n][100],int m,int x1[100],int y1[100]){ //prosedur
	int i,j,k; //indeks
	char str2[n][100]; //str2 duplikat str
	for(i=0;i<n;i++){ //copy str ke str2
		strcpy(str2[i],str[i]);
	}
	
	for(j=0;j<m;j++){ //for 
		for(i=0;i<=n;i++){
			if(x1[j]==i){ //jika x1 sama dengan i :D
				strcpy(str2[x1[j]-1],str[y1[j]-1]);
				strcpy(str2[y1[j]-1],str[x1[j]-1]);
				for(k=0;k<n;k++){ //duplikat kembali str 
					strcpy(str[k],str2[k]);
				}
			}
		}
	}
	for(i=0;i<n;i++){ //printing
		for(j=strlen(str2[i])-1;j>=0;j--){ //ini di print terbalik jadi aja pake countdown
			printf("%c",str2[i][j]);
		}
		printf("\n"); //slashn
	}
}