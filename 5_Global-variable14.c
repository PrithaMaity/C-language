#include<stdio.h>
void fun();
void disp();
int a;
void main(){
    a=20;
    printf("%d\n",a);
    fun();
    disp();
    getchar();
}
void fun(){
    printf("%d\n",a);
}
void disp(){
    printf("%d",a);
}