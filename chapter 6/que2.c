//swap two numbers//
#include<stdio.h>
void swap(int a ,int b);
int main(){


    int x = 3;
    int y = 5;
    swap(x,y);
    
}void swap(int a,int b){
    
    int t =a;
    a=b;
    b=t;
    printf("x=%d & y=%d \n",a,b);
}