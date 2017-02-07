#include <stdio.h>
void jumlah(int x, int y){
    printf("%d", x+y);
}

void kurang(int x, int y){
    printf("%d", x-y);
}

void kali(int x, int y){
    printf("%d", x*y);
}

void bagi(int x, int y){
    printf("%d", x/y);
}

int main (){
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", jumlah);
    printf("%d\n", kurang);
    printf("%d\n", kali);
    printf("%d\n", bagi);

    return 0;
}
