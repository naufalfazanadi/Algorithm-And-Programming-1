#include<stdio.h>
//saya mengerjakan ray3yes dengan jujur. Faisal/1403356
int main(){

	int i,j,k;
	int atas1,atas2,atas3;
	int bawah1,bawah2,bawah3;
	//aray1
	int n1;
		scanf("%d",&n1);
	int ray1[n1];
		for(i=0;i<n1;i++){
			scanf("%d",&ray1[i]);
		}
	int	counter1=0;
		for(i=0;i<n1/2;i++){
			counter1=counter1+ray1[i];
		}
	
		atas1=counter1/(n1/2);
		
	int	counter2=0;
	
		for(i=n1-1;i>=n1-(n1/2);i--){
			counter2=counter2+ray1[i];
		}
		bawah1=counter2/(n1/2);
	//array2	
	int n2;
		scanf("%d",&n2);
	int ray2[n2];
		for(j=0;j<n2;j++){
			scanf("%d",&ray2[j]);
		}
	int	counter3=0;
		for(j=0;j<n2/2;j++){
			counter3=counter3+ray2[j];
		}
	
		atas2=counter3/((n2/2));
		
	int	counter4=0;
	
		for(j=n2-1;j>=n2-(n2/2);j--){
			counter4=counter4+ray2[j];
		}
		bawah2=counter4/((n2/2));
	
	int n3;
		scanf("%d",&n3);
	int ray3[n3];
		for(k=0;k<n3;k++){
			scanf("%d",&ray3[k]);
		}
	int	counter5=0;
		for(k=0;k<n3/2;k++){
			counter5=counter5+ray3[k];
		}
		
		if(n3==2){
		atas3=counter5;
		}else{
		atas3=counter5/((n3/2));
		}
	int	counter6=0;
	
		for(k=n3-1;k>=n3-(n3/2);k--){
			counter6=counter6+ray3[k];
		}
		
		if(n3==2){
		bawah3=counter6;
		}else{
		bawah3=counter6/((n3/2));
		}
				
		
	if (atas1>atas2){
			if(atas1>atas3 && atas3>atas2){
				printf("%d %d %d\n",atas1,atas3,atas2);
			}else if(atas1>atas3 && atas2>atas3){
				printf("%d %d %d\n",atas1,atas2,atas3);
			}
			
		}else if (atas2>atas3){
			if(atas2>atas1 && atas1>atas3){
				printf("%d %d %d\n",atas2,atas1,atas3);
			}else if(atas2>atas1 && atas3>atas1){
				printf("%d %d %d\n",atas2,atas3,atas1);
			}
			
		}else if (atas3>atas1){
			if(atas3>atas2 && atas1>atas2){
				printf("%d %d %d\n",atas3,atas1,atas2);
			}else if(atas3>atas2 && atas2>atas1){
				printf("%d %d %d\n",atas3,atas2,atas1);
			}
		}
		
		if (bawah1>bawah2){
			if(bawah1>bawah3 && bawah3>bawah2){
				printf("%d %d %d\n",bawah1,bawah3,bawah2);
			}else if(bawah1>bawah3 && bawah2>bawah3){
				printf("%d %d %d\n",bawah1,bawah2,bawah3);
			}
			
		}else if (bawah2>bawah3){
			if(bawah2>bawah1 && bawah1>bawah3){
				printf("%d %d %d\n",bawah2,bawah1,bawah3);
			}else if(bawah2>bawah1 && bawah3>bawah1){
				printf("%d %d %d\n",bawah2,bawah3,bawah1);
			}
			
		}else if (bawah3>bawah1){
			if(bawah3>bawah2 && bawah1>bawah2){
				printf("%d %d %d\n",bawah3,bawah1,bawah2);
			}else if(bawah3>bawah2 && bawah2>bawah1){
				printf("%d %d %d\n",bawah3,bawah2,bawah1);
			}
		}
		

return 0;
}
