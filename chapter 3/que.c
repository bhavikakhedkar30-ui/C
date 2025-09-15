#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case alphabet");
    } 
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case alphabet");
    }
    else {
        printf("Not a alphabet");
    }

}
