#include<stdio.h>
int main(){


    int num;
      do {

        printf("Enter a number : ");
        scanf("%d",&num);
        printf("%d \n",num);
        if (num % 7 == 0)
        {
            break;
        }

    } while (1);
    printf("thankyou");
return 0;
}
