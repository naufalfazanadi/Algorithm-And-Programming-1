#include <stdio.h>
void faktorial(int a){
    int i;
    int sum=a;
    for(i=(a-1); i>0; i--){
        sum=sum*i;
    }
    printf("%d\n", sum);
}
int main (){
    int n;
    scanf("%d", &n);
    faktorial(n);
    return 0;
}
