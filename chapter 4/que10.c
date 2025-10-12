#include<stdio.h>
int main(){

    int i=8;
    int num;
    int sum=0;
    for ( num = 1; num<=10 ; num++){

        printf("%d X %d = %d \n",i,num,i*num);
        
    }

    
    for ( num = 1; num<=10 ; num++)
        sum = sum +(i*num);
        printf("the sum of answers is : %d",sum);
}