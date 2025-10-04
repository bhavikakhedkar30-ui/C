#include<stdio.h>
int main(){

    float price[3];
    printf("Enter price of First item: ");
    scanf("%f",&price[0]);
    printf("Enter price of second item: ");
    scanf("%f",&price[1]);
    printf("Enter price of Third item: ");
    scanf("%f",&price[2]);

    printf("Final price for 1st: %f \n",price[0] + (0.18*price[0]));
    printf("Final price for 2nd: %f \n",price[1] + (0.18*price[1]));
    printf("Final price for 3rd: %f \n",price[2] + (0.18*price[2]));

    printf("Total amount is : %f ",( price[0] + (0.18*price[0]) ) + (price[1] + (0.18*price[1]) )+ ( price[2] + (0.18*price[2])));
 
    return 0 ;

}