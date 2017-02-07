#include<stdio.h>
#include<stdlib.h>

char main()
{
char pil;

system("cls");

printf("Selamat Datang di Program Pengolah Angka\n");
printf("Created by faisal\n");
printf("=============================================\n");
printf("Press enter to continue\n");
getch();

printf("Pilih salah satu pertanyaan dari 5 opsi huruf berikut : \n");
printf("A(Pertambahan)\n\nB(Pengurangan)\n\nC(Perkalian)\n\nD(Pembagian)\n");
printf("Press enter to continue..\n");

getch();

printf("Pilihan anda adalah :");
	scanf("%c", &pil);

system("cls");

	if (pil='A')
	{printf("Hai, Ini pertanyaan A ");
	 
			}
		
	return 0;
}
