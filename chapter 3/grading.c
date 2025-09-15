// making a grading system using different ways //

#include<stdio.h>
int main()
{

    int marks;
    printf("enter marks of student : ");
    scanf("%d",&marks);

   //with if else if condition operator//


      if (marks>25 && marks<=30){

        printf("Pass With Grace");
    }
    else if (marks>30 && marks <=40){
        printf("C garde");
    }
    else if (marks>40 && marks <=50){
       printf("C++ garde");
   }
    else if (marks>50 && marks <=60){
        printf("B garde");
    }
    else if (marks>60 && marks <=70){
        printf("B++ garde");
    }
    else if (marks>70 && marks <=80){
        printf("A garde");
    }
    else if (marks>80 && marks <=90){
        printf("A++ garde");
    }
    else if (marks>90 && marks <=100){
        printf("C garde");
    }
    else {
        printf("Fail");
    } 


    // if else way to solve this//


  /* if (marks>=30){
        printf("Pass");

    }

    else {
        printf("Fail");
   } 


  // ternary opertor usage//

  marks <= 30? printf("fail \n" ) : printf("Pass"); */

    return 0;
}
