#include<stdio.h>
int main(){

    float SI;
    float P;
    float R;
    float T;

    printf("Enter Principle : ");
    scanf("%f",&P);

    printf("Enter Rate Of Interest : ");
    scanf("%f",&R);

    printf("Enter Time in years : ");
    scanf("%f",&T);

    SI = (P*R*T)/100;

    printf("Simple Interest is : %f",SI);

    return 0;
}