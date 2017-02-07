#include "header.h"
//Remedial - pelan pelan sabar :D
int main(){
	int i;
	int n;
	//--------------------------------------------------------------------------------------------------------------------------------------
	//input array angka
	scanf("%d",&n); 				//input n
	int angka[n];
	for(i=0;i<n;i++){
		scanf("%d",&angka[i]);		//input angka sebanyak n
	}
	//--------------------------------------------------------------------------------------------------------------------------------------
	//input array string
	int m;							//input m
	scanf("%d",&m);
	char string[m][100];			
	for(i=0;i<m;i++){				//input string sebanyak m
		scanf("%s",&string[i]);
	}
	aduh jawaban;					//deklarasi bungkusan
	jawaban = vokel(m,string);		//lempar bungkusan -- akan dilempar lagi ke main
	
	hasil(n,angka,m,string,jawaban);// pemanggilan void
	
	return 0;
}