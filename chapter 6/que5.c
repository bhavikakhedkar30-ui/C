// Write a program to print the address of a variable. Use this address to get the 
//value of the variable.

#include<stdio.h>
int main(){

    int a =10;
    int *p =&a;

    printf("The adress of A is : %u \n",p);
    printf("The value at ptr p is : %d \n",*p);
    printf("The address of p is : %u \n ",&p);
}