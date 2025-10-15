#include<stdio.h>

int avg(int,int,int);

int avg(int a,int b,int c){

    printf("The average of %d , %d , %d is : %d",a,b,c, (a+b+c)/3);
    return (a+b+c)/3;
}
int main (){

    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);

    int num2;
    printf("Enter a number: ");
    scanf("%d",&num2);

    int num3;
    printf("Enter a number: ");
    scanf("%d",&num3);

    avg(num1,num2,num3);




    
}