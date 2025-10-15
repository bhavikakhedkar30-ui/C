#include<stdio.h>
float FoA(int);

float FoA(int a){

    float g = 9.8;
    printf("The force of attraction of mass %d is : %f ",a,a*g);

    return a*g;
}
int main(){

    int mass ;
    printf("Enter Mass :   ");
    scanf("%d",&mass);
    FoA(mass);
}