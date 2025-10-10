#include<stdio.h>
int main(){

    char ch;
    printf ("Enter a character : ");
    scanf("%c",&ch);

    if (ch>=97 && ch<=256){

        printf("The character entered is lowercase ");

    }
    else {

        printf("The character entered is not lowercase");
    }

}