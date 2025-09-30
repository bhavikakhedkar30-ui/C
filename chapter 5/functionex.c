#include<stdio.h>
//declartion telling the complier that a function is generated//
void printhello();
int main(){
    //function call -> calling the funtion from printhello to int main function //
    printhello();
    printhello();
    printhello();
    
     return 0;
}

//function defination what exactly the funtion would be doing//
void printhello()
{
 printf("hello world!!!\n");
 printf("my name is bhavika \n");
}
