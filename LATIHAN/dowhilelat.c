/////////////////////////////////////////////////////////
///              [Alpro1] Meet-10                    ////
///            DO WHILE - PRACTICE 1                 ////
///                                                  ////
///            code by: naufalfazanadi               ////
/////////////////////////////////////////////////////////
#include <stdio.h>

// do while itu bisa untuk menu
// seperti repeat until
int main () {

    char jawab;
    int menu;

    do {
        printf("\tSELAMAT DATANG\n");
        printf("====================================\n");
        printf("Pilih menu code yang diinginkan\n");
        printf("1. Hello World!\n");
        printf("2. Bintang\n");
        printf("3. Kalkulator\n");
        printf("Jawab : ");
        scanf("%d", &menu);
        printf("\n");

        switch (menu) {
            case 1 :  {
                printf("Hello World!\n");
                printf("\nApakah mau lagi ? (y/n) ");
                scanf(" %c", &jawab);
                printf("\n");
            }break;
            case 2 :  {
                int i,j;
                for (i = 0; i < 5; i++) {
                    for (j = 0; j <= i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                printf("\nApakah mau lagi ? (y/n) ");
                scanf(" %c", &jawab);
                printf("\n");
            }break;
            case 3 :  {
                printf("UNDER CONSTRUCTION\n");
                printf("\nApakah mau lagi ? (y/n) ");
                scanf(" %c", &jawab);
                printf("\n");
            }break;
            default : {
                printf("Menu tidak ada\n");
                printf("\nApakah mau lagi ? (y/n) ");
                scanf(" %c", &jawab);
                printf("\n");
            }
        }
    } while ((jawab == 'y') || (jawab == 'Y'));
    
    return 0;
}
