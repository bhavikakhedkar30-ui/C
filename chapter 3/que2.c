#include<stdio.h>
int main()
{
    
int num;
printf("Enter a number : ");
scanf(" %d",&num);
 if (num >=1){

    printf("Natural Number");
 }
 else if (num <1 && num == 0){
    printf("Whole Number");
 }
 else {

    printf ("Wrong number , re enter number ");
 }

 return 0;


}
