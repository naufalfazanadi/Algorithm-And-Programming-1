#include<stdio.h>
//saya sumpah mengerjakan ini dengan jujur / faisal 1403356
int main(){

	int i,j,k;
	int n1;
		scanf("%d",&n1);
	int ray1[n1];
		for(i=0;i<n1;i++){
			scanf("%d",&ray1[i]);
		}
		int kecil1=99;
		for(i=0;i<n1;i++){
			if(ray1[i]<kecil1){
				kecil1=ray1[i];
			}
		}
		int besar1=0;
		for(i=0;i<n1;i++){
			if(ray1[i]>besar1){
				besar1=ray1[i];
			}
		}
		
	int n2;
		scanf("%d",&n2);
	int ray2[n2];
		for(j=0;j<n2;j++){
			scanf("%d",&ray2[j]);
		}
		int kecil2=99;
		for(j=0;j<n2;j++){
			if(ray2[j]<kecil2){
				kecil2=ray2[j];
			}
		}
		int besar2=0;
		for(j=0;j<n2;j++){
			if(ray2[j]>besar2){
				besar2=ray2[j];
			}
		}
	int n3;
		scanf("%d",&n3);
	int ray3[n3];
		for(k=0;k<n3;k++){
			scanf("%d",&ray3[k]);
		}
		int kecil3=99;
		for(k=0;k<n3;k++){
			if(ray3[k]<kecil3){
				kecil3=ray3[k];
			}
		}
		int besar3=0;
		for(k=0;k<n3;k++){
			if(ray3[k]>besar3){
				besar3=ray3[k];
			}
		}
		
		if (kecil1>kecil2){
			if(kecil1>kecil3 && kecil3>kecil2){
				printf("%d %d %d\n",kecil2,kecil3,kecil1);
			}else if(kecil1>kecil3 && kecil2>kecil3){
				printf("%d %d %d\n",kecil3,kecil2,kecil1);
			}
			
		}else if (kecil2>kecil3){
			if(kecil2>kecil1 && kecil1>kecil3){
				printf("%d %d %d\n",kecil3,kecil1,kecil2);
			}else if(kecil2>kecil1 && kecil3>kecil1){
				printf("%d %d %d\n",kecil1,kecil3,kecil2);
			}
			
		}else if (kecil3>kecil1){
			if(kecil3>kecil2 && kecil1>kecil2){
				printf("%d %d %d\n",kecil2,kecil1,kecil3);
			}else if(kecil3>kecil2 && kecil2>kecil1){
				printf("%d %d %d\n",kecil1,kecil2,kecil3);
			}
		}
		
		if (besar1>besar2){
			if(besar1>besar3 && besar3>besar2){
				printf("%d %d %d\n",besar2,besar3,besar1);
			}else if(besar1>besar3 && besar2>besar3){
				printf("%d %d %d\n",besar3,besar2,besar1);
			}
			
		}else if (besar2>besar3){
			if(besar2>besar1 && besar1>besar3){
				printf("%d %d %d\n",besar3,besar1,besar2);
			}else if(besar2>besar1 && besar3>besar1){
				printf("%d %d %d\n",besar1,besar3,besar2);
			}
			
		}else if (besar3>besar1){
			if(besar3>besar2 && besar1>besar2){
				printf("%d %d %d\n",besar2,besar1,besar3);
			}else if(besar3>besar2 && besar2>besar1){
				printf("%d %d %d\n",besar1,besar2,besar3);
			}
		}
		
		
		
		

return 0;
}
