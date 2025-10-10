#include<stdio.h>
int main(){

    float circle;
    float radius;
    float pi=3.14;
    
    printf("Enter radius :");
    scanf("%f",&radius);

    circle = pi*(radius*radius);
    printf("The area of the circle is : %f",circle);

}