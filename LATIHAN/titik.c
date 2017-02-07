#include <stdio.h>
#include <math.h>

int main () {
	int x1, x2, y1, y2, kuadratx, kuadraty ; //variabel untuk masing masing titik x y, dan hasil kuadratnya
	float akarx, hasil; //float untuk hasil akar dan hasil total
	
	//pemasukan data x dan y
	printf ("\nMasukan x1 : ");
		scanf ("%d", &x1);
	printf ("Masukan x2 : ");
		scanf ("%d", &x2);
	printf ("Masukan y1 : ");
		scanf ("%d", &y1);
	printf ("Masukan y2 : ");
		scanf ("%d", &y2);
	
	//perhitungan data sesuai rumus sqrt((x1-x2)^2)+(y1-y2)^2
	kuadratx = (x1-x2)*(x1-x2);
	kuadraty = (y1-y2)*(y1-y2);
	akarx = sqrt(kuadratx);
	hasil = akarx + kuadraty;
	
	//menampilkan hasil perhitungan
	printf ("Hasilnya adalah %0.2f\n", hasil);
	return 0;
}