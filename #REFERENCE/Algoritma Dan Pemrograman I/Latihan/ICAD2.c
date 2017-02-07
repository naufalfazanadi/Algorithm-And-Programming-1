#include<stdio.h>
	int main(){
	
	int x1, y1, z1;
	int x2, y2, z2;
	int x3, y3, z3;
	int v;
	int s;
	int a;
	int b;
	int c;
	
		scanf("%d", &x1);
		scanf("%d", &y1);
		scanf("%d", &z1);
		scanf("%d", &v);
		scanf("%d", &s);
		scanf("%d", &x2);
		scanf("%d", &y2);
		scanf("%d", &z2);
	
	
	a = (s / v);
		b = a % 3600;
			c = b % 60;
	
			x3 = x1 + a / 3600;
		y3 = y1 + b / 60;
	z3 = z1 + c;
	
	if((z3>z2) || (y3>y2) || (x3>x2)){
		printf("terlambat\n");
		printf("%.2d %.2d %.2d\n", x3, y3, z3);
		
			}else{
				printf("tepat waktu\n");
				printf("%.2d %.2d %.2d\n", x3, y3, z3);
				}
		
return 0;

}

		
	
	