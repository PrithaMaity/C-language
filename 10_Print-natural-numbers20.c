#include<stdio.h>
int main(){
    int n, i=1;
    // All positive number is natural number
    printf("Enter any number: ");
   //  Please enter a positive number
    scanf("%d", &n);
     
   // using for loop
   // Uncomment code to execute for loop
   
      // for(i=1; i<=n; i++)
      //   {
      //      printf("%d ",i);
      //   }

   // using while loop
   // Uncomment code to execute while loop

         // while(i<=n){
         //    printf("%d ",i);
         //    ++i;
         // }

   // using do while loop

         do{
            printf("%d ",i);
            ++i;
         }
         while(i<=n);

     return 0;
}