#include <stdio.h>

int main () {
	int x; //variabel untuk jumlah pengulangan
	int i=1; //variabel untuk pengulangan
	
	//pemasukan untuk jumlah pengulangan
	scanf("%d", &x);
	
	//looping
	do
	{
		//menampilkan wilsum sebanyak x
		printf("Wilujeng Sumping,!\n");
		i++;
	}
	while(i<=x);
	return 0;
}