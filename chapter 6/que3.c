//write a function to calc the sum product &avg of 2 numbers . print the avg in main function.//
#include<stdio.h>
void dowork(int a , int b , int *sum , int *prd ,int *avg);

int main()

{

    int a = 3 , b=5;
    int sum , prd ,avg;
   dowork(a , b, &sum , &prd , & avg);
    
   printf("sum is = %d , prd = %d , avg = %d " , sum , prd , avg);

}
void dowork(int a , int b , int *sum , int *prd ,int *avg){
 
    *sum = a+b;
    
    *prd = a*b;

    *avg = (a+b)/2;
}
