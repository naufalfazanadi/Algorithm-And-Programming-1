#include<stdio.h>

int main(){

int j1,m1,d1,j2,m2,d2,j3,m3,d3,v,s,waktu,brngkt,perkiraan,sampai;

scanf("%d %d %d",&j1,&m1,&d1);
scanf("%d",&v);
scanf("%d",&s);
scanf("%d",&j2,&m2,&d2);

waktu=s/v;
brngkt=(j1*3600)+(m1*60)+d1;
perkiraan=(j2*3600)+(m2*60)+d2;
sampai=brngkt+waktu;

j3=sampai/3600;
m3=(sampai%3600)/60;
d3=((sampai%3600)%60);

if(sampai>perkiraan){
	printf("tepat waktu\n");
	if (j3>=10){
		if(m3>=10){
			if(d3>=10){
				printf("%d %d %d\n",j3,m3,d3);
			}else{
				printf("%d %d 0%d\n,",j3,m3,d3);
			}
		}else if(m3<10){
			if(d3>=10){
				printf("%d 0%d %d\n",j3,m3,d3);
			}else{
				printf("%d 0%d 0%d\n",j3,m3,d3);
			}}
			}
	else if (j3<10){
		if(m3>=10){
			if(d3>=10){
				printf("0%d %d %d\n",j3,m3,d3);
			}else{
				printf("0%d %d 0%d\n",j3,m3,d3);
			}
		}else if(m3<10){
			if(d3>=10){
				printf("0%d 0%d %d\n",j3,m3,d3);
			}else{
				printf("0%d 0%d 0%d\n",j3,m3,d3);
			}}
			}
}else{
	printf("terlambat\n");
	printf("%.2d %.2d %.2d\n",j3,m3,d3);
}

return 0;
}
