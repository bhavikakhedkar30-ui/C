#include<stdio.h>

int calcpercentage(int science , int math , int san);


int main(){

    int sc = 98;
    int math = 78;
    int san = 45;
    printf("percentage is : %d", calcpercentage(sc , math , san));
    return 0;



}
int calcpercentage(int science , int math , int san){

    return ((science + math + san) / 3 );
}


