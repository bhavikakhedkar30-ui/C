#include<stdio.h>
int main(){

    int year;
    printf("Enter Year: \n");
    scanf("%d",&year);

    if(year %4 ==0 && year %100 != 0 || year %400 ==0 ){

        printf("The year is a Leap Year");
    }
    else {

        printf("Entered year is not a Leap year");
    }
     return 0;

}