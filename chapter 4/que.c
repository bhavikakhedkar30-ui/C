//sum of user given natural number and printing them in reverse//

#include<stdio.h>
int main(){


   int num ;
   printf("enter number: ");
   scanf("%d",&num);

   int sum= 0;
   for (int i=1;i<=num;i++){
    sum = sum + i;

   }
   printf("sum is : %d",sum);

   for (int i =num ; i>=1 ; i--){

    printf("%d \n",i);
   }
return 0;
    
}
