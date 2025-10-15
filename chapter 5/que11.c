#include<stdio.h>
float FoA(float);

float FoA(float a){

    
    return a*9.8;
}
int main(){

    float mass ;
    printf("Enter mass");
    scanf("%f",&mass);
    printf("force is: %f",FoA(mass));
    
}