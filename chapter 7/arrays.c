// Arrays -> collection of similar data types stored at contiguous memeory locations//
#include<stdio.h>
int main (){
    
    //input and output of arrays//
    int marks[6];
    printf("Enter phy: ");
    scanf("%d",&marks[0]);
    printf("Enter chem: ");
    scanf("%d",&marks[1]);
    printf("Enter maths: ");
    scanf("%d",&marks[2]);
    printf("phy= %d , chem =%d , math = %d",marks[0],marks[1],marks[2]);
    

    return 0;


    // printing of array by loops//
    int i ;
    for (i=0;i<=5;i++){
    printf("%d \n",marks[i]);
    }
}