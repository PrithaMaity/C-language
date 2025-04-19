#include<stdio.h>
void fun(){
    int a=10; //local variable's scope is within block
    //static variable b is only acessable inside fun function
    // but fun function can be call inside any function 
    static int b=20;  
    printf("\nInside fun function: %d %d", a, b);
    a++;
    b++;
}
int main()
    {
        int a;
        int b=10;
        static int c;
        static int d=20;
        printf("\nIn main function: %d %d %d %d", a, b, c, d);
        fun(); //fun function called
        fun();
        getchar();
        return 0;
    }
    