//pointer in function//
#include<stdio.h>
void square(int n);
void _sq(int* n);
int main()
{

    int number = 4;
    square(number);
    printf("number = %d \n", number);

    _sq(&number);
    printf("number = %d \n", number);

    return 0;
}
//call by value
void square(int n)
{

    n = n * n;
    printf("square = %d \n",n);
}
void _sq(int* n)
{
*n = (*n) * (*n);
printf("sqaure = %d \n" , *n);

}