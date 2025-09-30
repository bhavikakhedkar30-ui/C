#include<stdio.h>

void calculateprice(float value);
int main(){
    float value;
    printf("enter item amount : ");
    scanf("%f",&value);
    calculateprice(value);


}
void calculateprice(float value){

    value = value + (0.18* value);
    printf("final price is : %f", value);
}