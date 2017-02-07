#include<stdio.h>
#include<string.h>

int main(){
	int m;
	char str[100];
	scanf("%d",&m);
	scanf("%s",&str);
	int max=1;
	int n[25];
	int i;
	n[0]=0;
	for(i=0;i<strlen(str);i++){			
		if(str[i]=='a'){
			n[0]=n[0]+1;
		}
		if(str[i]=='b'){
			n[1]=n[1]+1;
		}
		if(str[i]=='c'){
			n[2]=n[2]+1;
		}
		if(str[i]=='d'){
			n[3]=n[3]+1;
		}
		if(str[i]=='e'){
			n[4]=n[4]+1;
		}
		if(str[i]=='f'){
			n[5]=n[5]+1;
		}
		if(str[i]=='g'){
			n[6]=n[6]+1;
		}
		
	}
	printf("%d",n[0]);
	return 0;
}