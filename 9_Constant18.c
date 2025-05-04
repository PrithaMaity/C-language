#include<stdio.h>
void main(){
   const int a=100; //constant value once declared can't be modified
   const char b='B';
   const float f=2.9;
   const char s[10]="Pritha";
   printf("%d\n", a);
   printf("%c\n", b);
   printf("%f\n", f);
   printf("%s", s);

   getchar();
}