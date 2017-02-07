#include <stdio.h>

int main () {
	int i , j, n, spasi;
	scanf("%d", &n);
	
	for (i=0; i<1; i++){
		for (j=0; j<n; j++){
			printf (" ");	
		}
		for (j=0; j<n; j++){
			printf ("*");	
		}
		for (j=0; j<(n*2)-2; j++){
			printf (" ");	
		}
		for (j=0; j<n; j++){
			printf ("*");	
		}
	
		printf ("\n");
	}
	
	//bagian atas
	for (i=1; i<n; i++){
		//membuat spasi
		for (j=n-1; j>i; j--){
			printf (" ");	
		}
		
		//membuat bintang
		for (spasi=1; spasi<=i; spasi++){
			printf ("*");	
		}

		//membuat bintang n x n
		for (j=0; j<=n; j++){
			printf ("*");	
		}
		
		//membuat spasi n x n pertama
		for (j=1; j<=n; j++){
			printf (" ");
			
		}
		
		//membuat spasi n x n kedua
		for (j=1; j<=n-2; j++){
			printf (" ");
			
		}
		
		//membuat spasi segitiga
		for (spasi=1; spasi<=i; spasi++){
			printf (" ");
		}
		
		//membuat bintang jajar genjang
		for (j=1; j<=n; j++){
			printf ("*");	
		}
		
		printf ("\n");
	}
	
	//bagian tengah
	for (i=1; i<=n-1; i++){
		//membuat spasi n x n
		for (j=1; j<n; j++){
			printf (" ");	
		}
		
		//membuat spasi segitiga
		for (spasi=1; spasi<=i; spasi++){
			printf (" ");
		}
		
		//membuat bintang jajar genjang
		for (j=1; j<=n; j++){
			printf ("*");	
		}
		
		//membuat spasi
		for (j=n; j>=i+1; j--){
			printf (" ");	
		}
		
		//membuat spasi
		for (j=n-1; j>=i+1; j--){
			printf (" ");	
		}
		
		//membuat bintang segitiga
		for (j=1; j<=n; j++){
			printf ("*");
			
		}
		
		printf ("\n");
		
	}
	
	//bagian tengah akhir
	//membuat spasi
	for (j=1; j<2*n; j++){
		printf (" ");
	}
	//membuat bintang
	for (j=1; j<=2*n-1; j++){
		printf ("*");
	}	
	//membuat garis baru
	printf ("\n");
	
	//bagian bawah
	for (i=1; i <=n; i++){
		//membuat spasi segitiga
		for (j=n; j>i-1; j--){
			printf (" ");
		}
		
		//membuat bintang jajar genjang
		for (j=1; j<=n; j++){
			printf ("*");
		}
		
		//membuat spasi segitiga
		for (j=1; j<=i-1; j++){
			printf (" ");
		}
		
		//membuat spasi n x n 
		for (j=1; j<=n; j++){
			printf (" ");
		}
		for (j=1; j<=n-3; j++){
			printf (" ");
		}
		
		//membuat spasi segitiga
		for (j=1; j<=i-1; j++){
			printf (" ");
		}
		
		//membuat bintang jajar genjangg
		for (j=1; j<=n; j++){
			printf ("*");
		}
		
		printf ("\n");
	}
		
return 0;	
}
