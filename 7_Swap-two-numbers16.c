#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter two number: ");
    scanf("%d %d", &a,&b); //a=20 b=30
// Uncomment the code to see the output
// 1st method
/*
    temp=a; // temp=20
    a=b; // a=30
    b=temp; // b=20
*/

// 2nd method
   
    a=a+b; //a=50
    b=a-b; //b=20
    a=a-b; //a=30

// Uncomment the code to see the output
// 3rd method
    
    // a=a*b; //a=600
    // b=a/b; //b=20
    // a=a/b; //a=30
    
    printf("a=%d b=%d", a,b); // a=30 b=20
    return 0;
}