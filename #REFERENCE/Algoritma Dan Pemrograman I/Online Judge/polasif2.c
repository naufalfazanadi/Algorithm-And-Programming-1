#include<stdio.h>

int main(){

int i,j,n;

scanf("%d",&n);

for(i=0;i<n;i++){
	printf(" ");
}
for(i=0;i<n;i++){
	printf("*");
}
for(i=0;i<n;i++){
	printf(" ");
}
for(i=0;i<(n-2);i++){
	printf(" ");
}
for(i=0;i<n;i++){
	printf("*");
}
printf("\n");
for(i=1;i<n;i++){
	for(j=n-1;j>i;j--){
		printf("-");
	}
	for(j=1;j<=i+1;j++){
		printf("*");
	}
	for(j=0;j<n;j++){
		printf("*");
	}
	for(j=0;j<n;j++){
		printf(" ");
	}
	for(j=0;j<=i;j++){
		printf(" ");
	}
	for(j=0;j<n;j++){
		printf("*");
	}

printf("\n");

}


	
for(i=1;i<n;i++){

	for(j=0;j<n;j++){
		printf("+");
	}
	for(j=1;j<i+1;j++){
		printf("+");
	}
	for(j=2;j<i;j++){
		printf(" ");
	}
	for(j=0;j<n;j++){
		printf("*");
	}
	for(j=n-2;j>=i;j--){
		printf("+");
	}
	for(j=n-1;j>=i;j--){
		printf("+");
	}
	for(j=0;j<n;j++){
		printf("*");
	}
printf("\n");
}
for(i=0;i<(n*2);i++){
	printf(" ");
}
for(i=0;i<(n*2)-1;i++){
	printf("*");
}

return 0;
}