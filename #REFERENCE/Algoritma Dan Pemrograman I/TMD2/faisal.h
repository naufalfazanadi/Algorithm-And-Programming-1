#include<stdio.h>
#include<string.h>
/* 
************	*************** 	********
************	** ********* **	 	**	   **
	****		**	*******  **		**     **
	****		**   *****   **		**     **
	****		**	  ***    ** 	**     **
	****		**	   *     ** 	******** 
	*/
//bungkusan array :D
typedef struct{
	char hsl[100];
}tmd;
//deklarasi global
//deklarasi ini urutannya harus sama dengan di mesin.
int angka(int n,char arr[n][100]);
tmd stringx(int hasil,int digit);
int digat(int hasil);
void baris1(int tebal,int digit,tmd hasil1,int hasil);
void baris2(int tebal,int digit,tmd hasil1,int hasil);
void baris3(int tebal,int digit,tmd hasil1,int hasil);
void baris4(int tebal,int digit,tmd hasil1,int hasil);
void baris5(int tebal,int digit,tmd hasil1,int hasil);
void nol(int digit,int tebal);