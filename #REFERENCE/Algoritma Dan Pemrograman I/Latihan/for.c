#include<stdio.h>

int main(){

int brp,counter,hasil;

scanf("%d",&brp);
hasil=1;

for(counter=1;counter<=brp;counter++){
hasil=hasil*counter;
}
printf("%d",hasil);


return 0;

}