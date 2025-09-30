#include<stdio.h>
void printHW(int a);
int main(){

    printHW(5);

}
//recursion
void printHW(int a){

    if (a==0){
        return;
    }
    printf("hello world \n");
    printHW(a-1);
}