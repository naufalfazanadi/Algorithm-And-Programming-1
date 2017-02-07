#include <stdio.h>
#include <string.h>

int main () {
    int i,j,n;
    char str[64];

    scanf("%s", &str); 

    int count = 0;
    for (i = 0; i < strlen(str); i++) {
        if ((str[i] == 'a') || (str[i] == 'i') || 
            (str[i] == 'u') || (str[i] == 'e') || 
            (str[i] == 'o') || 
            (str[i] == 'A') || (str[i] == 'I') || 
            (str[i] == 'U') || (str[i] == 'E') ||
            (str[i] == 'O')) {
            
            count = count % 10;
            switch (count) {
                case 0 : str[i] = '0';break;
                case 1 : str[i] = '1';break;
                case 2 : str[i] = '2';break;
                case 3 : str[i] = '3';break;
                case 4 : str[i] = '4';break;
                case 5 : str[i] = '5';break;
                case 6 : str[i] = '6';break;
                case 7 : str[i] = '7';break;
                case 8 : str[i] = '8';break;
                case 9 : str[i] = '9';break;
            }
            count++;
        }
    }

    printf("%s\n", str);

    return 0;     
}
