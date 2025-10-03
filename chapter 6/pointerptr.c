//poniter to pointer operator working //
#include<stdio.h>
int main(){

    float price = 100;
    float *ptr = &price; // *ptr -> stores the address of price variable in the memory  
    float **pptr = &ptr; // **pptr -> stores the address of *ptr ehere *ptr is holding the adress of variable price 

    return 0;


}