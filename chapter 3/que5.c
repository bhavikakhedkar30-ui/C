#include<stdio.h>
int main(){

    int a ;
    printf("Enter 1st Numbers : \n");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd Numbers : \n");
    scanf("%d",&b);
   int c;
    printf("Enter 3rd Numbers : \n");
    scanf("%d",&c);
    int d;
    printf("Enter 4th Numbers : \n");
    scanf("%d",&d);

    if (a>b && a>c && a>d){

        printf("The greatest value is %d",a);
    }
    else if (b>a && b>c && b>d){

        printf("The greatest value is %d",b);
    }
    else if (c>a && c>b && c>d){

        printf("The greatest value is %d",c);
    }
    else if (d>a && d>c && d>b){

        printf("The greatest value is %d",d);
    }
    
    

}