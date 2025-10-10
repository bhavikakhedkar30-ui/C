#include<stdio.h>
int main(){

    float celcius;
    float far;


    printf("Enter celcius temp: ");
    scanf("%f",&celcius);

    far= (celcius* 9/5) + 32;
    printf("The Temperature in fahrenheit is : %f",far);


}