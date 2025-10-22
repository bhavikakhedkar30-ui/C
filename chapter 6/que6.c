#include<stdio.h>
int sum(int * , int*);
int sum(int *a , int *b)
{
    *a = 3;
    *b = 10;
    return *a+*b;
}
int main(){

    int x = 1; int y=5;
    printf("The sum is : %d \n",sum(&x,&y));
    printf("The value of x is : %d \n",x);
    printf("The value of x is : %d \n",y);


}












    


