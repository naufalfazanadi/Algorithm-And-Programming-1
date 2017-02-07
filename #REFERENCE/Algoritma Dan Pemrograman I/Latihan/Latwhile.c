#include<stdio.h>

int main(){

int i;
int n;
int ray[10];
for(i=0;i<10;i++){
scanf("%d",&ray[i]);
}
i=0;
int ketemu1=0;
int ketemu2=0;
int ketemu3=0;
int genap=0;

while((ketemu1==0 || ketemu2==0 || ketemu3==0) && i<10){
	if(ray[i] % 2 == 0){
		genap++;
		if (ketemu1==0){
			ketemu1=ray[i];
			i++;
		}else if (ketemu2==0){
			ketemu2=ray[i];
			i++;
		}else if (ketemu3==0){
			ketemu3=ray[i];
			i++;
		}
	}else{
		i++;
	}
}

if(genap==3){
	printf("%d",ketemu1);
	printf("%d",ketemu2);
	printf("%d",ketemu3);
}else if(genap==2){
	printf("%d",ketemu1);
	printf("%d",ketemu2);
}else if(genap==1){
	printf("%d",ketemu1);

}

return 0;
}
