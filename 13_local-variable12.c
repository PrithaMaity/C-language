#include<stdio.h>
void show();

int main(){

    int a; // local variable
    printf("%d\n",a); //print garbage value

    int b; //local variable is declared before print 
    printf("%d\n",b); //print garbage value
    
    show(); // Call the show function

    return 0;
}
void show(){

    int a=20;
    printf("%d\n",a);

    if(a!=0){
        int b=10;
        printf("%d",b);
    }

    getchar();
}