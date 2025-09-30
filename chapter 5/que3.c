#include<stdio.h>
int sum(int a ,int b); //user defined function//
void printTable(int n); //user defined function//


int main() //pre-defined function//
{
    int n ;
    printf("enter  number :  ");
    scanf("%d",&n);
    printTable(n); 
    
    
}

int sum(int a , int b)
{
    return a+b;
}
void printTable(int n){

    for (int i =1;i<=10;i++){
        printf("%d \n",i*n);
    }
}
