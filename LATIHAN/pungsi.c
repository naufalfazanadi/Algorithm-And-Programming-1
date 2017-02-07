#include <stdio.h>

//fungsi tambah
int tambah (int angka1, int angka2) {
	return angka1+angka2;
}

//fungsi kurang
int kurang (int angka1, int angka2) {
	return angka1-angka2;
}

//fungsi kali
int kali (int angka1, int angka2) {
	return angka1*angka2;
}

//fungsi bagi
int bagi (int angka1, int angka2) {
	return angka1/angka2;
}

//fungsi utama
int main () {
	int a,b;
	char x;
	scanf("%d %c %d", &a, &x, &b);
	switch (x) {
		case '+' : printf("%d\n", tambah(a,b));break;
		case '-' : printf("%d\n", kurang(a,b));break;
		case '*' : printf("%d\n", kali(a,b));break;
		case '/' : printf("%d\n", bagi(a,b));break;
		default : printf("tidak ada kalkulasi\n");break;
	}	
	return 0;
}