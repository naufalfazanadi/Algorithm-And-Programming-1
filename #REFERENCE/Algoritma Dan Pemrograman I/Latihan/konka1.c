#include<stdio.h>

int main(){

char a,b,c,d,e,f;
char j1,j2,j3,j4,j5,j6;

scanf(" %c",&a);
scanf(" %c",&b);
scanf(" %c",&c);
scanf(" %c",&d);
scanf(" %c",&e);
scanf(" %c",&f);

if (a=='b'||a=='c'||a=='d'||a=='f'||a=='g'||a=='H'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z'){
j1='1';
}else{
j1='0';
}
if (b=='a'||b=='i'||b=='u'||b=='e'||b=='o'){
j2='0';
}else{
j2='1';
}
if (a=='b'||a=='c'||a=='d'||a=='f'||a=='g'||a=='H'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z'){
j3='1';
}else{
j3='0';

if (b=='a'||b=='i'||b=='u'||b=='e'||b=='o'){
j4='0';
}else{
j4='1';

if (a=='b'||a=='c'||a=='d'||a=='f'||a=='g'||a=='H'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z'){
j5='1';
}else{
j5='0';

if (b== 'a'||b=='i'||b=='u'||b=='e'||b=='o'){
j6='0';
}else{
j6='1' ;

if((j1=='1') && (j2=='0') && (j3=='1') && (j4=='0') && (j5=='1')&& (j6=='0')){
printf("kombinasi valid\n");
}else if((j1=='0') && (j2=='1') && (j3=='0') && (j4=='1') && (j5=='0') && (j6=='1')){
printf("kombinasi valid\n");
}else{
printf("kombinasi tidak valid\n");
}


return 0;
}
