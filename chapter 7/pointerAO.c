//pointer airthmatic in array//
#include<stdio.h>
int main(){
     
    int age= 22;
    int *ptr= &age;
    printf("ptr = %u \n",ptr);

    ptr++; //pointer airthmatic//
    printf("ptr =%u \n",ptr);

    ptr--;
    printf("ptr =%u",ptr);
    return 0;
    
   
    //pointers can perform only increment and decrement operations//
    //When a pointer is either incrementted or Decrementted the memory address gets incrementted or decrementted according to the datatype size//

}