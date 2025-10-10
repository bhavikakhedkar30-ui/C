#include<stdio.h>
int main(){

    float vol;
    int r;
    int h;

    printf("Enter Radius: ");
    scanf("%d",&r);

    printf("Enter height: ");
    scanf("%d",&h);


    vol= 3.14*((r*r)*h);
    printf("The Volume of cylinder is : %f",vol);
}





