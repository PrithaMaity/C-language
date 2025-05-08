#include<stdio.h>
int main(){
    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n); //input number  

    for(i=1; i<=10; i++) //initialization; condition; increment/decrement
    {
        printf("%d*%d=%d\n", n,i,n*i); //n*i= result 
    }
    return 0;
}