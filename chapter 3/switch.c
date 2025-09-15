#include<stdio.h>
int main()
{
    char day;
    printf("enter day(1-7):");
    scanf("%c",&day);

    switch (day){
        case 'm': printf("monday");
        break;
        case 't': printf("Tuesday");
        break;
        case 'w': printf("Wednesday");
        break;
        case 'T': printf("Thrusday");
        break;
        case 'f': printf("Friday");
        break;
        case 's': printf("saturday");
        break;
        case 'S': printf("Sunday!!");
        break;

        default : printf("wrong number entered ");




    }

    return 0;
}
