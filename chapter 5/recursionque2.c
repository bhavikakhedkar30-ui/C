#include<stdio.h>
int factorial (int a);

int factorial (int a){

    if (a==1 || a == 0){

        return 1;
    }
    else {
        return a * factorial(a-1); 
    }
    
}
int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int result = factorial(num);
    printf("The factorial of %d is: %d\n",num,result);
}