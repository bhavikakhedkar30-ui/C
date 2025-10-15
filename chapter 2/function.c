#include<stdio.h>
 
int sum(int,int,int);//function declaration//

int sum(int x ,int y ,int z){//function defination also the main body of the function//

    printf("The sum is : %d",x+y+z);

    return x+y+z;
}
int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    sum(a,b,c);//function call//
}

