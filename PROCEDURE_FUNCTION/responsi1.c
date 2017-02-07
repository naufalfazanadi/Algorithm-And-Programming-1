#include <stdio.h>
#include <string.h>

int vokal (char str[]) {
    int i;
    int count = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'i' || 
            str[i] == 'u' || str[i] == 'e' || 
            str[i] == 'o') {
            count++;
        }
    }

    return count;
}

int konsonan (char str[]) {
    int i;
    int count = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'i' && 
            str[i] != 'u' && str[i] != 'e' && 
            str[i] != 'o') {
            count++;
        }
    }

    return count;
}

void print_vokal (int n, char str[]) {
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'i' || 
            str[i] == 'u' || str[i] == 'e' || 
            str[i] == 'o') {
            printf("%c", str[i]);
        }
    }
}

void print_konsonan (int n, char str[]) {
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'i' && 
            str[i] != 'u' && str[i] != 'e' && 
            str[i] != 'o') {
            printf("%c", str[i]);
        }
    }
}

int main () {
    int n;

    scanf("%d", &n);

    int i;
    char str[n][64];

    for (i = 0; i < n; i++) {
        scanf("%s", &str[i]);
    }

    if (vokal(str[0]) == vokal(str[n-1]) && konsonan(str[0]) == konsonan(str[n-1])) {
        
        print_vokal(n, str[0]);
        print_vokal(n, str[n-1]);
        printf("\n");

        print_konsonan(n, str[0]);
        print_konsonan(n, str[n-1]);
        printf("\n");
   
    } else {
        
        printf("Tidak Valid\n");
    
    }

    return 0;
}
