#include <stdio.h>

int main(){
	int a,b,c,d,e,f,rb,lain;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	
	if(( a > 999 ) && ( a < 9999 )){
		rb++;
}else{
		lain++;
}
	if(( b > 999 ) && ( b < 9999 )){
		rb++;
}else{
		lain++;
}
	if(( c > 999 ) && ( c < 9999 )){
		rb++;
}else{
		lain++;
}
	if(( d > 999 ) && ( d < 9999 )){
		rb++;
}else{
		lain++;
}
	if(( e > 999 ) && ( e < 9999 )){
		rb++;
}else{
		lain++;
}
	if(( f > 999 ) && ( f < 9999 )){
		rb++;
}else{
		lain++;
}

	if(rb>=3){
	printf("ribuan 3 atau lebih\n");
	}else{
		printf("tidak valid\n");
	}
	
	return 0;
}
