#include<stdio.h>
#include<math.h>

void square (int num);
int main()
 
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    square(num);
   
    return 0;
}

void square(int num)
{
    printf("square of the number is: %d",num*num);
}