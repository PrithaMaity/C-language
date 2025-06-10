#include<stdio.h>
int main(){
    int i, j;
    for(i=1; i<=5; i++) //rows
    { 
        for(j=1; j<=i; j++) //columns
        {
            printf("* ");
        }
        printf("\n");
    }
        printf("\n");
        printf("\n");

    int k, l;
    for(k=1; k<=5; k++) //rows
    {
        for(l=5; l>=k; l--) //columns
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    int a, b, c;
    for(a=1; a<=5; a++) //rows
    {
        for(b=a; b<5; b++) //space
        {
            printf(" ");
        }
        for(c=1; c<=a; c++) // column
        {
            printf("*");
        }
    
        printf("\n");
    }
    printf("\n");
    printf("\n");


        int p, q, r;
    for(p=1; p<=5; p++) //rows
    {
        for(q=1; q<p; q++) //space
        {
            printf(" ");
        }
        for(r=p; r<=5; r++) // column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}