#include<stdio.h>
float convert (int);

float convert (int a){

    printf("Temperature is : %d ",((a*9/5)+32));

    return ((a*9/5)+32);

}
int main(){
    int cel;
    printf("Enter the temperature in celcius: ");
    scanf("%d",&cel);

    convert(cel);


} 

