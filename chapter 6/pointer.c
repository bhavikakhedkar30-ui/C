// '*' is called as 'value at address' operator
//'&' is callled as 'address of ' operator 
#include<stdio.h>
int main(){

    int age = 22;
    int *ptr= &age;
   /**int _age = *ptr;
    printf("%d",&age);
    return 0;
    
    // how to print address of a varibale  //
    printf("%u \n",&age); //%p -> pointer format specifier for exact address of a variable 
    printf("%u \n", &ptr);
    printf("%u \n", ptr); //%u -> unsighed int for reading the address easily */

    //value printing //
    printf("%d \n ", age);
    printf("%d \n",*ptr);
    printf("%d \n",*(&age));

    return 0;





}

