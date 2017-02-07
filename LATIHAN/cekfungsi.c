#include <stdio.h>
    
int fungsi () {
    int n;
    scanf("%d", &n);
    return n;
}

int main () {
    int x;

    x = fungsi();

    printf("%d\n", x);
    return 0;
}
