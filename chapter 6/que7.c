#include<stdio.h>
int main(){

    int i = 10;
    int y = 12;

    int temp = &i;
    i = &y;
    
    printf("Value of i : %d",temp);
    printf("Value of y : %d",i);



    
}